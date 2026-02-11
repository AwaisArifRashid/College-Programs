// HW 1 Problem 1
// Description:
// Write a program that takes three integers a, b, and c representing the sides of a
// triangle and determines whether they can form a valid triangle.

#include<iostream>

using namespace std;

bool checkValidTraingle(int a, int b, int c){
    if ((a+b > c) && (a+c > b) && (b+c > a)) return true;
    else return false;
}




int main()
{
    bool flag = true;
    
    while(flag){    
        int a = 0, b = 0, c = 0;
        
        //Welcome Statement
        cout << "This program will check the inputs from the user and determine if it makes a correct traingle.\n";
        cout <<"\n\nConditions: \n-Two sides added together must be greater then the third for it to be a valid traingle.\n";
        cout <<"-The values inputted into the program must be positive integers for the program to run properly.\n";
        
        cout <<"\n-------------------------------------------------\n"; //Filler
        
        while(true){
            cout << "Input a value for side A: ";
            cin >> a;
            
            if (a > 0){
                break;
            }
            else cout << "Invalid option try again.\n";
        }
        
        while(true){
            cout << "Input a value for side B: ";
            cin >> b;
            
            if (b > 0){
                break;
            }
            else cout << "Invalid option try again.\n";
        }
        
        while(true){
            cout << "Input a value for side C: ";
            cin >> c;
            
            if (c > 0){
                break;
            }
            else cout << "Invalid option try again.\n";
        }
        
        if (checkValidTraingle(a, b, c)){
            cout <<"Your traingle with sides: A = " << a <<" B = " << b << " C = " << c << ", is valid.\n";
            
        }
        else cout << "Your triangle is invalid.\n";
        
        cout << "Would you like to play again? (Y/N)\n";
        
        char check = 'Y';
        
        cin >> check;
        
        if (check == 'N' || check == 'n') flag = false;
        
        cout <<"\n-------------------------------------------------\n"; //Filler
    }
    
    cout << "\nProgram Voided :)";
    return 0;
}
