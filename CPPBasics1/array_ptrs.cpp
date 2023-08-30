#include <iostream>
using namespace std;

int main()
{
    int my_ints[4];
    cout << "First number: ";
    cin >> my_ints[0];
    cout << "Second number: ";
    cin >> my_ints[1];
    cout << "Third number: ";
    cin >> my_ints[2];
    cout << "Fourth number: ";
    cin >> my_ints[3];

    int * my_ptrs[4];
    for(int i = 0; i < sizeof(my_ints) / sizeof(my_ints[0]); i++){
        my_ptrs[i] = &my_ints[i];
    }

    // Bubble sort pointer values not addresses
    for (int i = 0; i < sizeof(my_ptrs) / sizeof(my_ptrs[0]) - 1; i++) {
        for (int j = 0; j < sizeof(my_ptrs) / sizeof(my_ptrs[0]) - i - 1; j++) {
            if (*my_ptrs[j] > *my_ptrs[j + 1]) {
                // Swap pointers
                int *temp = my_ptrs[j];
                my_ptrs[j] = my_ptrs[j + 1];
                my_ptrs[j + 1] = temp;
            }
        }
    }

    cout << "Sorted values using pointers: ";
    for (int i = 0; i < sizeof(my_ptrs) / sizeof(my_ptrs[0]); i++) {
        cout << *my_ptrs[i] << " ";
    }

    cout << "\nmy_ints is still the same: ";
    for (int i = 0; i < sizeof(my_ints) / sizeof(my_ints[0]); i++){
        cout << my_ints[i] << " ";
    }
    cout << '\n';

    return 0;
}