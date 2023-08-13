#include <iostream>
using namespace std;

int main(){
    int score{};
   cout<<"ENTER THE SCORE OF THE STUDENT(OUT OF 100) :"<<endl;
   cin>>score;

   string grade{};
    
    if (score>=0 && score<=100)
        {if(score>=90)
            grade="A+";
        
        else if(score>=80)
            grade="A";

        else if(score>=70)
            grade="B+";

        else if(score>=60)
            grade="C";

        else if(score>=50)
            grade="D";
        else 
            grade="F";
        
        cout<<"YOUR GRADE IS : "<<grade<<endl;
            if (grade=="F")
                cout<<"YOU NEED TO TAKE THE EXAM AGAIN!!"<<endl;

            else
                cout<<"CONGRATULATIONS! YOU PASSED THE EXAM!!"<<endl;}

    else
    {cout<<"SORRY, "<<score<<" IS NOT WITHIN RANGE!"<<endl;}

    return 0;
}