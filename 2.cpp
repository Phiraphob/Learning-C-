#include<iostream>
using namespace std;

int main(){

    int a = 10 , b = 3 , c = 5 , x = 5 , y = 9;
    string name = "Phiraphob ";
    string lastname = "Monthaisong";

    cout << name + lastname << endl;
    cout <<"a = "<< a <<" b = "<< b <<" c = "<< c <<endl;
    cout << ++a + b + c<<endl;
    cout << "a + b = " << a + b-- <<endl;
    cout << "a + b = " << a + b <<endl;
    cout << "a / c = " << a / c <<endl;
    cout << "a % b = " << a % b <<endl;

    x+= y;
    cout << "x + y = "<< x <<endl;
    cout << "x  = " << x << endl;

    bool result = x>y;
    bool result2 = x<y;
    cout << "x > y "<<result<<endl;
    cout << "x < y "<<result2<<endl;

    return 0;
}