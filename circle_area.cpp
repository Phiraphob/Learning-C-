#include<iostream>
using namespace std;

int main(){

    int r;
    double Pi = 3.14;

    cout << "Enter radius: ";
    cin >> r;

    if (r > 0){
        double area = Pi * (r * r);
        cout << "Area of circle is "<< area << endl; 
    }else if ( r == 0){
        cout << "Bro! that's point"<< endl;
    }else if ( r < 0){
        cout << "Bro! Invalid input"<< endl;
    }

    return 0;
}