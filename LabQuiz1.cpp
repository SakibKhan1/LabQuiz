/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 1
This program will make you input a number (integer) and will print out "I love C++" given the number inputted. 
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Input a number: ";
    cin >> num;
    for(int i = 0; i < num; i++){
        cout << "I love C++" << endl;
    }

    return 0;
}
