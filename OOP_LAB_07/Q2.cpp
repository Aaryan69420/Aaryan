#include <iostream>
#include <string>
using namespace std;
class student 
{
    protected :
    int roll,age;
    string name;
    public :
    void input1(int r,int a,string n)
    {
        roll=r;
        age = a;
        name = n;
    }
};
class test : public student 
{
    protected:
    int m1,m2,m3,m4,m5;
    public:
    void input2(int marks1,int marks2, int marks3, int marks4, int marks5)
    {
        m1=marks1;
        m2=marks2;
        m3=marks3;
        m4=marks4;
        m5=marks5;
    }
    void display();
};
void test :: display()
{
    cout << "the name of the student :" << name << endl;
    cout << "the roll number is : " << roll << endl;
    cout << "the age of student is:" << age << endl;
    cout << "the marks in subject 1:" << m2 << endl;
    cout << "the marks in subject 2:" << m3 << endl;
    cout << "the marks in subject 3:" << m4 << endl;
    cout << "the marks in subject 4:" << m5 << endl;
    cout << "the marks in subject 5:" << m5 << endl;
}
int main()
{
    test ob;
    ob.input1(1704,20,"Aaryan");
    ob.input2(90,92,94,96,98);
    ob.display();
    return 0;
}