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
    //num is user input for amount of times program will be looped
    cout << "Input a number: ";
    cin >> num;
    for(int i = 0; i < num; i++){
    //for loop is used because we know how many times we want to loop
        cout << "I love C++" << endl;
    }

    return 0;
}
