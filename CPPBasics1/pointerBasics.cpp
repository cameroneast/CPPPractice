#include <iostream>
using namespace std;

int main()
{
    int myInt = 15;
    int * myPointer = &myInt;

    cout << "Memory address of myInt: " << &myInt << '\n';
    cout << "Value in myPointer: " << myPointer << '\n';


    cout << "Value of myInt: " << myInt << '\n';
    cout << "Value pointed to by myPointer: " << *myPointer << '\n';

    myInt = 10;
    
    cout << "Memory address of myInt: " << &myInt << '\n';
    cout << "Value in myPointer: " << myPointer << '\n';

    cout << "Value of myInt: " << myInt << '\n';
    cout << "Value pointed to by myPointer: " << *myPointer << '\n';
    return 0;
}