#include<iostream>
#include<string.h>
using namespace std;
class employee
{
protected:
int empno;
char name[40];
char designation[10];
char qualification[10];
};
class date:protected employee
{
string dob;
string doj;
public:
void input()
{
fflush(stdin);
cout<<"Enter employee number, Name, DOB, Designation, Qualification, and DOJ:";
cin>>empno>>name>>dob>>designation>>qualification>>doj; }
void output()
{
fflush(stdout);
cout<<"Empno:"<<empno<<endl;
cout<<"Name:"<<name<<endl;
cout<<"DOB:"<<dob<<endl;
cout<<"Designation:"<<designation<<endl;
cout<<"Qualification:"<<qualification<<endl;
cout<<"DOJ:"<<doj<<endl; }
};
int main()
{
date d; d.input();
d.output();
return 0;
}
