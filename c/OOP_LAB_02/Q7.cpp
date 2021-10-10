#include <iostream>
#include <cmath>
using namespace std;
class dist
{
public :
int x1,x2,y1,y2;
double d1,d;
void input()
{
    cout << " enter the values" << endl;
    cout << "enter the x co-ordinate" << endl;
    cin >> x1;
    cin >> x2;
    cout << "enter the y co-ordinate" << endl;
    cin >> y1;
    cin >> y2;
}
void calculate()
{
   
    d1 = (x2-x1)*(x2-x1) - (y2-y1)*(y2-y1);
    d = pow(d1,0.5);
    cout << "the distance between two points is : " << d << endl;
}
};
int main()
{
    dist obj;
    obj.input();
    obj.calculate();
    return 0;

}