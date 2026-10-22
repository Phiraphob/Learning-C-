#include <iostream>
using namespace std;

int main(){

    float weight, height;

    cout << "Enter weight: ";
    cin >> weight;

    cout << "Enter height: ";
    cin >> height   ;

    if(weight > 0 && height > 0){
        double bmi = weight / (height * height );
        cout << "Youur BMI is " << bmi <<endl;
        if (bmi > 30.0){
            double bad_bmi = bmi;
            cout << "YOU ARE FATTTTTT!"<< endl;
        }else if (bmi >= 22.9 && bmi <= 24.9){
            double good_bmi = bmi;
            cout << "CONGRATULATIONS! YOU ARE NOT FATTT!"<< endl;
        }else if (bmi < 18.5){
            double low_bmi = bmi;
            cout << "YOU ARE UNDERWEIGHT!"<< endl;
        }
    }

    return 0;
}
