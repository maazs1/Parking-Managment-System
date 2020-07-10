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
    else if (duration >=2 && type==2){
        fee= duration*50;
        cout<<" Parking Fee : $"<<fee<<endl;
    }
    else if (duration >=2 && type==3){
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

int main(){
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
        return 0;
    }
}


