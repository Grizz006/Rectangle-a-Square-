#include <iostream>
using namespace std;

bool isSquare(unsigned width, unsigned height); //declaration

int main() {
    int height;
    int width;
    cout << "Enter height:" << endl;
    cin >> height;
    cout << "Enter width:"<< endl;
    cin >> width;
    if (isSquare(height, width)) { //calls function with formula
        cout << "The rectangle with width " << width << " and height "<< height << " is a square." << endl;
    }else {
        cout << "The rectangle with width " << width << " and height "<< height << " is not a square." << endl;
    }


    return 0;
}