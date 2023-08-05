#include <iostream>
using namespace std;
int main(){
    cout<<"Welcome to THE HOTEL"<<endl;
    cout<<"==========================="<<endl;
    cout<<"\nHow many rooms would you like to book: ";
    int number_of_rooms{0}; //works
    cin>>number_of_rooms; //works

    cout<<"What is your period of stay(in days): ";
    int number_of_nights{0};
    cin>>number_of_nights;
    cout<<"============================"<<endl;
    cout<<"\nESTIMATE FOR ROOM BOOKINGS"<<endl;//works
    cout<<"Number of rooms: "<<number_of_rooms<<endl;
    cout<<"Price per room: inr "<<3000<<endl;
    cout<<"Cost of rooms per night: inr "<<3000*number_of_rooms<<endl;
    cout<<"Period of stay: "<<number_of_nights<<" nights "<<endl;
    cout<<"Cost of "<<number_of_rooms<<" rooms for "<<number_of_nights<<" nights(excluding taxes): "<<3000*number_of_rooms*number_of_nights<<endl;
    cout<<"Tax for the stay: inr "<<3000*number_of_rooms*0.036<<endl;
    cout<<"-----------------------------"<<endl;

    cout<<"Total estimate: inr "<<(3000*number_of_rooms*number_of_nights)+(3000*number_of_rooms*0.036)<<endl;
    cout<<"-----------------------------"<<endl;

   
    int money_paid{0};
    
    cout<<"Amount paid by the customer: inr ";
    cin>>money_paid;
    if(money_paid>(3000*number_of_rooms*number_of_nights)+(3000*number_of_rooms*0.036)){
    cout<<"Amount to be returned to the customer: inr "<<(money_paid)-((3000*number_of_rooms*number_of_nights)+(3000*number_of_rooms*0.036))<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"THANK YOU FOR VISITING.\nWE HOPE YOU ENJOY YOUR STAY."<<endl;
    }
    else{
         cout<<"-----------------------------"<<endl;
        cout<<"DUE TO INSUFFICIENT AMOUNT PAID WE CAN NOT LET YOU STAY\nALSO, CALLING THE COPS\nTHANK YOU"<<endl;
    }
    
    return 0;
}
