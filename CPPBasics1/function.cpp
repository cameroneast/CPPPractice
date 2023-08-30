/*
written by Cameron East as a part of Exercise 2-1-3: C++ Functions and Structs
*/
#include <iostream>
using namespace std;

//Swap integers using their pointers
void swapInts(int* int1, int* int2){
    int temp = *int1;
    *int1 = *int2;
    *int2 = temp;
}

int main()
{
    int int1;
    int int2;

    //User input
    cout << "\nEnter the first integer: ";
    cin >> int1;

    cout << "\nEnter the second integer: ";
    cin >> int2;

    cout << "\nYour numbers before swapping: int1: " << int1 << " int2: " << int2;

    //Call the swapInts method
    swapInts(&int1, &int2);

    cout << "\nYour numbers after swapping: int1: " << int1 << " int2: " << int2 << '\n';

    return 0;
}