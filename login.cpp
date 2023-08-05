#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"LOGIN DETAILS"<<endl;

            string username;
            string hehe = "surbhi3605";
            cout<<"ENTER USERNAME: ";
            cin>>username;
            if(username == hehe){
                string password;
                string haha = "123456";
                cout<<"ENTER PASSWORD: ";
                cin>>password;
                if(password == haha){
                    cout<<"ACCESS GRANTED"<<endl;}
                else{
                    cout<<"ACCESS DENIED"<<endl;
                }
            
                }
            else{
                string password;
                cout<<"ENTER PASSWORD: ";
                cin>>password;


                cout<<"INVALID USERNAME OR PASSWORD"<<endl;
            }

        
   }
