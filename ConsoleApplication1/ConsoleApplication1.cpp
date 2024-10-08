#include <iostream>
#include "linear.hpp" // Include the correct header file for linearSearch

using namespace std;

int main() {
    cout << "in the main function" << endl;

    int arr[] = { 4, 2, 7, 1, 9, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = linearSearch(arr, size, target); // Call linearSearch function

    if (result != -1) {
        cout << "Target " << target << " found at index " << result << endl;
    }
    else {
        cout << "Target " << target << " not found in the array" << endl;
    }

    return 0; // End of the main function

} 
