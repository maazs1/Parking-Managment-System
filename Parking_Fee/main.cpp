#include <iostream>
#include <istream>
#include <cstdlib>
using namespace std;

void getAccess();

void priceFee(){
    
    string number;
    int type, fee, cost, reference;
    float duration, startingTime, exitTime;
    
    cout<<" Transporation type: "; cin>>type;
    cout<<" Check in Time: "; cin>>startingTime;
    cout<<" Check out Time: "; cin>>exitTime;
    cout<<" License Plate: "; cin>>number;

    cout<<endl;

    
    if (exitTime >= startingTime){
        duration = exitTime-startingTime;
    }
    else{
        duration = (12-startingTime)+exitTime;
    }
    
    cout<<" Parking Duration: "<<duration<<" Hour/s"<<endl;
    
    if (type==1){
        fee= duration*10;
        cout<<" Parking Fee: $"<<fee<<endl;
    }
    else if ( type==2){
        fee= duration*20;
        cout<<" Parking Fee: $"<<fee<<endl;
    }
    else if (type==3){
        fee= duration*40;
        cout<<" Parking Fee: $"<<fee<<endl;
    }

    cout<<endl<<endl;
    cout<<" Enter your Ammount: $"; cin>>cost;
    reference=cost-fee; 
    cout<<" Your Refund is: $"<<reference;
    
    cout<<endl<<endl;
    cout<<"Printing Receipt............"<<endl;
    goto print;
    
    print : 
        cout<<endl<<endl;
        cout<<" ___________________________________"<<endl;
        cout<<"| Type: "<<type<<endl;
        cout<<"| License Plate: "<<number<<endl;
        cout<<"| Parking Duration: "<<duration<<" Hour/s"<<endl;
        cout<<"| Parking Fee: $"<<fee<<endl;
        cout<<"|         >> Paid off <<         "<<endl;
        cout<<" ___________________________________"<<endl;
        cout<<"            THANK YOU            "<<endl;
}

void displayMenu(){
        char input1, input2;

    parking :
        cout<<"___________________________________________"<<endl;
        cout<<"          PARKING FEE (Vehicles)           "<<endl;
        cout<<"            MAAZ'S PARKING LOT              "<<endl;
        cout<<"            EDMONTON, ALBERTA               "<<endl;
        cout<<"___________________________________________"<<endl;
        cout<<"         >> Transportation type <<         "<<endl;
        cout<<" Motorcyle: 1                             "<<endl;
        cout<<" Car: 2                             "<<endl;
        cout<<" Bus/Truck: 3                             "<<endl;
        cout<<"___________________________________________"<<endl;
    
    priceFee();
    cout<<endl;
    
    cout<<" Book Another Parking Site? (y/n): ";cin>>input1;
    if(input1=='y' || input1=='Y'){
        displayMenu();
    }
    else{
        cout<<" Exit Program? (y/n): "; cin>>input2;
    
        if(input2=='y' || input2=='Y'){
            exit(1);
        }
    }
    

}

void getAccess(){
    string enteredName, signedName, email, signedPassword, enteredPassword, back, retypedPass;
    int numberTyped;
    
    
    menuDisplay: 
        cout<<endl;
        cout<<" SIGN UP [1]"<<endl;
        cout<<" SIGN IN [2]"<<endl;
        cout<<" EXIT    [3]"<<endl;
        cout<<" --------------------"<<endl;
        cout<<" Enter a Number: "; cin>>numberTyped;
        cout<<endl;
        
        
        switch(numberTyped){
            case 1:
                goto signup;
                break;
            
            case 2: 
                goto signin;
                break;
            
            case 3: 
                exit(1);
                
            default: 
                cout<<endl;
                cout<<" Invalid Number "<<endl;
                goto menuDisplay;
        }
        
    signup: 
        cout<<endl;
        cout<<" Enter the Following Details to Create an Account"<<endl;
        cout<<" Username: ";cin>>enteredName;
        cout<<" Email: ";cin>>email;
        cout<<" Password: ";cin>>enteredPassword;
        cout<<" Retype Password: ";cin>>retypedPass;
        if (retypedPass == enteredPassword){
            cout<<endl;
            cout<<" Account Created ! Please SignIn to Continue"<<endl;
            goto signin;
        }
        else{
            cout<<endl;
            cout<<"Password did not match. Please try again"<<endl;
            goto signup;
        }
    signin:
        cout<<endl<<endl;
        cout<<"-------------------LOGIN-------------------"<<endl;
        cout<<endl;
        cout<<" Username/Email: "; cin>>signedName;
        cout<<" Password: ";cin>>signedPassword;
        cout<<endl;
        if ((signedPassword == enteredPassword) && (signedName==enteredName) || (email == signedName)){
            cout<<endl<<endl;
            cout<<"-----------------LOGGED IN-----------------"<<endl;
            cout<<endl;
            displayMenu(); 
        }
        else if ((signedPassword != enteredPassword) && (signedName!=enteredName) || (email != signedName)) {
            cout<<"INVALID USERNAME/EMAIL OR PASSWORD!"<<endl;
            cout<<"PLEASE CHECK YOUR USERNAME/EMAIL & PASSWORD"<<endl;
            goto menuDisplay;
        }
        else{
            cout<<"LOGIN FAILED!"<<endl;
            goto menuDisplay;
        }

}

int main(){
    getAccess();
}
