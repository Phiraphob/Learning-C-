#include<iostream>
using namespace std;

int main(){

    int number = 10;
    const float Pi = 3.14;//const ค่าคงที่ ไม่สามารถเปลี่ยนเเปลงได้
    bool pass = true; 
    bool fail = false;
    cout << "Number: " << number <<endl;
    cout << "Pass:" << pass <<endl;
    cout << "Fail:" << fail <<endl;
    cout << "Pi: " << Pi <<endl;

    char Gender;
    string Name;
    int Age;
    float GPA;
    cout << "Input Gender (M/F): ";
    cin >> Gender;
    cout << "Input Name: ";
    cin >> Name;
    cout << "Input Age: ";
    cin >> Age;
    cout << "Input GPA: ";
    cin >> GPA;
    cout << "Name: " << Name <<endl;
    cout << "Gender: " << Gender <<endl;
    cout << "Age: " << Age <<endl;
    cout << "GPA: " << GPA <<endl;

    return 0;
}