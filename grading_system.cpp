#include <iostream>

using namespace std;

int main(){

   int score{};
   cout<<"ENTER THE SCORE OF THE STUDENT(OUT OF 100) :"<<endl;
   cin>>score;

   string grade{};

   if (score>=0 && score<=100)
        {if (score>=90 && score<=100){
        grade="A+";
        cout<<"your grade is :"<<grade<<endl;}
   
         if (score>=80 && score<=89){
        grade="A";
        cout<<"your grade is :"<<grade<<endl;}

         if (score>=70 && score<=79){
        grade="B+";
        cout<<"your grade is :"<<grade<<endl;}

         if (score>=60 && score<=69){
        grade="B";
        cout<<"your grade is :"<<grade<<endl;}

         if (score>=50 && score<=59){
        grade="C";
        cout<<"your grade is :"<<grade<<endl;}
   
         if (score>=40 && score<=49){
        grade="D";
        cout<<"your grade is :"<<grade<<endl;}
   

        if (score>=0 && score<=39){
        grade="YOU NEED TO TAKE THE EXAM AGAIN!";
        cout<<grade<<endl;}}
   
   else{
    cout<<"SORRY, "<<score<<" IS OUT OF RANGE!"<<endl;
   }
    return 0;
   
}
