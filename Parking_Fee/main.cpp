#include <iostream>
#include <istream>
using namespace std

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
    
    cout<<" Parking Duration    : "<<durration<<"Hour/s"<<endl;
    
    if (duration >=2 && type==1){
        fee= (duration-0)*1000*1;
        cout<<" Parking Fee : $"<<fee<<endl;
    }
    else if (duration >=2 && type==2){
        fee= (duration-0)*5000*1;
        cout<<" Parking Fee : $"<<fee<<endl;
    }
    else if (duration >=2 && type==3){
        fee= (duration-0)*10000*1;
        cout<<" Parking Fee : $"<<fee<<endl;
    }
    else if (duration >=2 && type==){
        fee= 1000;
        cout<<" Parking Fee : $"<<fee<<endl;
    }
    else if (duration >=2 && type==2){
        fee= 5000;
        cout<<" Parking Fee : $"<<fee<<endl;
    }
    else if (duration >=2 && type==3){
        fee= 10000;
        cout<<" Parking Fee : $"<<fee<<endl;
    }
    cout<<endl<<endl;
    cout<<"Enter the cost   : $"; cin>>cost;
    reference=cost-fee;
    cout<<"Refund           : $"<<reference;
    
    cout<<endl<<endl;
    cout<<"Printing struct............"<<endl;
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

int main()
    char a;

parkng:
    cout<<"-------------------------------------------"<<endl;
    cout<<"       PARKING FEE (CAR/MOTORCYLE)       "<<endl;
    cout<<"           MAAZ'S PARKING LOT            "<<endl;
    cout<<"           EDMONTON, ALBERTA             "<<endl;
    
    
