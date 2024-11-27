#include <iostream>
using namespace std;

int main() {
    int number1 , number2 , sum;
    
    //Ask the user to input two digits
    cout<< "Enter the first digit: " ;
    cin>> number1 ;

    cout<< "Enter the second digit: " ;
    cin>> number2;

    // Calculate the sum
    sum = number1 + number2 ;

    // Display the result
    cout<<" The sum of " << number1 <<" and "<< number2 <<" is " << sum << endl;

    return 0;
}