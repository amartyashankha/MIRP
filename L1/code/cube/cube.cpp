#include<iostream>

using namespace std;

int main() {

    double N, cube;
    
    cout << "Enter a number: ";
    cin >> N;       //Take input from user
    cube = N*N*N;   //Compute cube
    cout << "The cube of " << N << " is " << cube << endl;

    return 0;

}
