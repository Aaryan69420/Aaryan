#include <iostream>
using namespace std;
class st
{
    private :
    char name[20];
    int roll,marks;
   public : 
   void input()
   {
       cout << "enter the name" << endl;
       cin >> name ;
       cout << "enter the roll number" << endl;
       cin >> roll;
       cout << "enter the total marks" << endl;
       cin >> marks;
       
   }
     void output ()
     {
         cout << "Name : " << name << endl;
         cout << "roll number :" << roll << endl;
         cout << "total marks :" << marks << endl;
     }
};
int main()
{
    st obj;
    obj.input();
    obj.output();
    return 0;

}