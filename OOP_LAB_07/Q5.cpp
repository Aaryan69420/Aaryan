#include <iostream>
#include <string>
using namespace std;
class employee 
{
    public :
    string name[5];
    int num[5],sal[5];
};
class details :public employee
{
    public:
    void input()
    {
        cout << "enter employeee names :" << endl;
        for(int i=0;i<5;i++)
        {
            cin >> name[i];
        }
        cout << "enter employee numbers :" << endl;
        for(int i=0;i<5;i++)
        {
            cin >> num[i];
        }
        cout << "enter employee salary :" << endl;
        for(int i=0;i<5;i++)
        {
            cin >> sal[i];
        }
    }
    void display();
};
void details :: display()
{
    for(int i=0;i<5;i++)
    {
        cout << "employee names are:" << name[i] << endl;
        cout << "employee numbers are :" << num[i] << endl;
        cout << "employee salaries are :" << sal[i] << endl;
    }
}
int main()
{
    details ob;
    ob.input();
    ob.display();
    return 0;
}