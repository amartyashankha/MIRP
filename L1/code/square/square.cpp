#include<iostream>

using namespace std;

int main() {

    double N, square;
    
    cout << "Enter a number: ";
    cin >> N;       //Take input from user
    square = N*N;   //Compute Square
    cout << "The square of " << N << " is " << square << endl;

    return 0;

}
