/* This is a practice project to find the hypotenuse of a user inputed triangle using Leg 1 and leg 2*/

#include <iostream> // For input and output operations
#include <cmath> // For mathematical functions like sqrt and power

using namespace std;

int main() {
    double x, y, z;

    cout << "Welcome to the hypotenuse calculator." <<endl;
    cout << "Enter Leg 1" <<endl;
    cin >> x;
    cout << "Enter Leg 2" <<endl;
    cin >> y;

    double temp = pow(x, 2) + pow(y, 2);
    z = sqrt(temp);

    cout << "The Hypotenus is " << z << endl;



    return 0;
}