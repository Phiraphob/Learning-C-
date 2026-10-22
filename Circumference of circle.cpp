#include <iostream>
using namespace std;

int main(){

    int r;
    double Pi = 3.14;

    cout << "Enter radius: ";
    cin >> r;

    if ( r > 0){
        double circumference = 2 * Pi * r;
        cout << "Circumference of circle is "<< circumference << endl;
    }else if ( r == 0){
        cout << "Bro! that's point"<< endl;
    }else if ( r < 0){
        cout << "Bro! Invalid input"<< endl;
    }

    return 0;
}