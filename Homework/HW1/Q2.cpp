// Description:
//Write a program that takes an integer n as input and prints:
//  n number of '1' characters if n is positive.
//  If n is negative, print the number of '1' characters corresponding to the 2's complement representation of the absolute value of n (i.e., how many bits it would take to represent the number in 2's complement form).

//For negative numbers, the program should compute the bit-length of the number and print that many '1' characters.

#include<iostream>
#include <cmath>

using namespace std;

int twosComplement(int c){
    int i = 0;
    while(true){
        if (pow(2,0) == c){ //if the value is 1 then it will just need oen bit
            return 1;
        }
        i++;
        if (pow(2,i) > c){
            return i;
            }
    }
}

void checkValue(int val){
    
    if (val == 0){
        cout << "Invalid Option";
    }
    else if (val > 0){ //If value is positive it will just print 1 that many times
        for(int i = 0; i < val; i++){
            cout << 1;
        }
    }
    else{ //Will run if the value is not positive or zero (meaning it is negative)
        for(int i = 0; i < twosComplement(val * -1); i++){
            cout << 1;
        }
    }
}


int main()
{
    int check;
    cout << "Input a value to be checked: ";
    cin >> check;
    checkValue(check);
    
    return 0;
}
