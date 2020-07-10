#include <iostream>
#include <istream>
using namespace std;


void priceFee(){
    
    string number;
    int type, fee, cost, reference;
    float duration, startingTime, exitTime;
    
    
    cout<<" Check in Time       : "; cin>>startingTime;
    cout<<" Check out Time      : "; cin>>exitTime;
    cout<<" License Plate       : "; cin>>number;
    cout<<" Transporation type  : "; cin>>type;

    
    if (exitTime >= startingTime){
        duration = exitTime-startingTime;
    }
    else{
        duration = (12-startingTime)+exitTime;
    }
    
    cout<<" Parking Duration    : "<<duration<<"Hour/s"<<endl;
    
    if (type==1){
        fee= duration*10;
        cout<<" Parking Fee : $"<<fee<<endl;
    }
    else if ( type==2){
        fee= duration*50;
        cout<<" Parking Fee : $"<<fee<<endl;
    }
    else if (type==3){
        fee= duration*100;
        cout<<" Parking Fee : $"<<fee<<endl;
    }

    cout<<endl<<endl;
    cout<<"Enter your Ammount     : $"; cin>>cost;
    reference=cost-fee; 
    cout<<"Your Refund is         : $"<<reference;
    
    cout<<endl<<endl;
    cout<<"Printing Receipt............"<<endl;
    goto print;
    
    print : 
        cout<<endl<<endl;
        cout<<" ___________________________________"<<endl;
        cout<<"| Type                 : "<<type<<endl;
        cout<<"| License Plate        : "<<number<<endl;
        cout<<"| Parking Duration     : "<<duration<<" Hour/s"<<endl;
        cout<<"| Parking Fee          : $"<<fee<<endl;
        cout<<"|         >> Paid off <<         "<<endl;
        cout<<" ___________________________________"<<endl;
        cout<<"            THANK YOU            "<<endl;
}

void displayMenu(){
        char a;

    parking :
        cout<<"-------------------------------------------"<<endl;
        cout<<"          PARKING FEE (Vehicles)           "<<endl;
        cout<<"            MAAZ'S PARKING LOT              "<<endl;
        cout<<"            EDMONTON, ALBERTA               "<<endl;
        cout<<"-------------------------------------------"<<endl;
        cout<<"         >> Transportation type <<         "<<endl;
        cout<<" Motorcyle : 1                             "<<endl;
        cout<<" Car       : 2                             "<<endl;
        cout<<" Bus/Truck : 3                             "<<endl;
        cout<<"-------------------------------------------"<<endl;
    
    priceFee();
    
    cout<<"Count again ? (y/n) "; cin>>a;
    
    cout<<endl;
    
    if(a=='y' || a=='Y'){
        goto parking;
    }
}

void getAccess(){
    string enteredName, signedName, email, signedPassword, enteredPassword, back, retypedPass;
    int numberTyped;
    
    
    menuDisplay: 
        cout<<endl<<endl;
        cout<<" SIGN UP [1]"<<endl;
        cout<<" SIGN IN [2]"<<endl;
        cout<<" --------------------"<<endl;
        cout<<" Enter Number: "; cin>>numberTyped;
        
        
        switch(numberTyped){
            case 1:
                goto signup;
                break;
            
            case 2: 
                goto signin;
                break;
                
            default: 
                cout<<" Invalid Number, Try Again"<<endl;
                goto menuDisplay;
        }
        
    signup: 
        cout<<" Enter the Following Details to Create an Account"<<endl;
        cout<<" Username: ";cin>>enteredName;
        cout<<" Email: ";cin>>email;
        cout<<" Password: ";cin>>enteredPassword;
        cout<<" Retype Password: ";cin>>retypedPass;
        if (retypedPass == enteredPassword){
            cout<<" Account Created ! Please SignIn to Continue"<<endl;
            goto signin;
        }
        else{
            cout<<"Password did not match. Please try again"<<endl;
            goto signup;
        }
    signin:
        cout<<" LOGIN"<<endl;
        cout<<" Username/Email: "; cin>>signedName;
        cout<<" Password: ";cin>>signedPassword;
        cout<<endl<<endl;
        if ((signedPassword == enteredPassword) && (signedName==enteredName) || (email == signedName)){
            cout<<" -------LOGGED IN-------<<"<<endl;
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


