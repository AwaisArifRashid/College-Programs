#include<iostream>

using namespace std;

void generateTriangle(int row){
   for (int i = 1; i <= row; i++){
       for (int x = 0; x < row - i; x++){
           cout << " ";
       }
       for (int y = 0; y < ((2*i)- 1); y++){
           cout << "*";
       }
       
       cout << "\n";
   }
}

int main()
{
    int rows = 0;
    cout << "Enter how many rows you would like the triangle to be: ";
    cin >> rows;
    
    if(rows > 0){
        generateTriangle(rows);
    }
    else cout << "Invalid Option.";
    
    return 0;
}
