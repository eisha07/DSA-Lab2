#include <iostream>
using namespace std;

int main() {
    int size;    
    int *salArray = new int [size];

    cout << "enter the size of the array";
  cin >> size; 

    // Input salaries
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i+1) << ": ";
        cin >> salArray[i];
    }


    for (int i = 0; i < size; i++) {
        salArray[i] = salArray[i] + salArray[i] / (i + 1);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << salArray[i] << " ";
    }
    cout << endl;

    return 0;
}
