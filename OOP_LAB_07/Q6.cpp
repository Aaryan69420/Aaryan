#include <iostream>
#include <string>
using namespace std;
class student
{
    protected :
    int roll;
    string name;
    public :
    void input1()
    {
        cout << "enter the student name :" << endl;
        cin >> name;
        cout << "enter the student roll number :" << endl;
        cin >> roll;
    }
};
class fees : public student
{
    protected:
    double fees,amt;
    public :
    void input2()
    {
        cout << "enter the fees " << endl;
        cin >> fees;
        cout << "the tax is 0.1 times of fees"<< endl;
    }
    void generate()
    {
        amt = fees + (fees*0.1);
        cout << "the total amount in the receipt is :" << amt << endl;
    }
};
class result : public student
{
    protected:
    int m;
    public :
    void input3()
    {
        cout << "enter the marks of student" << endl;
        cin >> m;
    }
    void display()
    {
        if (m>=90)
        {
            cout << "grade is A" << endl;
        }
        else if(m<90 || m>=80)
        {
            cout <<"grade is B" << endl;
        }
        else if(m <80 || m>=70)
        {
            cout <<"grade is C" << endl;
        }
        else if(m<70 || m>=60)
        {
            cout << "grade is D" << endl;
        }
        else if(m<60 || m>=40)
        {
            cout <<"grade is E" << endl;
        }
        else 
        {
            cout <<"the student has failed and the grade is F" << endl;
        }
    }
};
int main()
{
    fees ob1;
    result ob2;
    ob1.input1();
    ob1.input2();
    ob2.input3();
    ob1.generate();
    ob2.display();
    return 0;
}