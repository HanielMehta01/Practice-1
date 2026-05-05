#include <iostream>
using namespace std;
int main()
{
    int a, b, c ,d, e;
    cout << "Enter two of your selected numbers to find the area of rectangle: " << endl;
    cin >>a >> b;
    c=a*b;
    cout << "The area of rectangle is: " << c << endl;
    cout<< "Enter the radius of the circle to find the area of circle: " << endl;
    cin >> d;
    e= 3.14*d*d;
    cout << "The area of circle is: " << e << endl;
    return 0;
}