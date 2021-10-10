#include <iostream>
using namespace std;
class st
{
    private :
    char name[20];
    int roll,marks=0,m[5];
    float p;

   public : 
   void input()
   {
       cout << "enter the name" << endl;
       cin >> name ;
       cout << "enter the roll number" << endl;
       cin >> roll;
       cout << "enter the total marks in 5 subjects" << endl;
       for(int i=0;i<5;i++)
       {
           cin >> m[i];
           marks = marks + m[i];
       }
           p= marks/5 ;
       
       
   }
     void output ()
     {
         cout << "Name : " << name << endl;
         cout << "roll number :" << roll << endl;
         cout << "total marks :" << marks << endl;
         cout << "percentage :" << p << endl;
     }
};
int main()
{
    st obj;
    obj.input();
    obj.output();
    return 0;

}