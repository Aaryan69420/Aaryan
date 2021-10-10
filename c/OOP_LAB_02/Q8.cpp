#include <iostream>
using namespace std;
class fact
{
    public :
    int n,i,f=1;
void input()
{
    cout <<"enter the number whose factorial is to be calculated "<< endl;
    cin >> n;
}
void calculate()
{
    for(i=n;i>=1;i--)
    {
    f = f*i;
    }
    cout << "the factorial of " << n << " is: " << f << endl;
}
};
int main()
{
    fact obj;
    obj.input();
    obj.calculate();
    return 0;
}