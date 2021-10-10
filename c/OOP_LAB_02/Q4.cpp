#include <iostream>
using namespace std;
class complex
{

public :
int r[10], im[10];
void input()
{
for(int i=0;i<10;i++)
{
    cout << "real part of number:" << endl;
    cin >> r[i];
    cout << "imaginary part of the number:"  << endl;
    cin >> im[i];
}
}
void output()
{
    for(int i=0;i<10;i++)
    {
        if(im[i]>0)
        {
            cout << r[i] << "+" << im[i] << "i" << endl;

        }
        else 
        {
            cout << r[i] << "i" << im[i] << "i" << endl;
        }

    }
}
};
int main()
{
    complex obj;
    obj.input();
    obj.output();
    return 0;
}