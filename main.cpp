#include <iostream>
#include <vector>

using namespace std;

class maths {
public: //makes class accessible outside of the class

    int addNumbers(int number1, int number2) {
        return number1 + number2;
    }

    static int subtractNumbers(int number1, int number2) {
        return number1 - number2;
    }

    void console(int num1, int num2) {
        cout << "Enter first number to add together:" << "\n";
        cin >> num1;
        cout << "Enter second number:" << "\n";
        cin >> num2;
        cout << addNumbers(num1, num2) << "\n";
    };

    vector<int> myDynamicArray; //creates a dynamic array
    int myNonedynamicArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //Creates an array with 10 allocated slots in memory
};

int main() {
    maths num; // initialises the maths class as num within the main function
    int num1 = 0;
    int num2 = 0;
    int app = 0;
    string appState;

    cout << "hello world!" << "\n";

        while (app != 1) {
            cout << "Enter begin or exit to continue:" << "\n";
            cin >> appState;
            if (appState == "exit") {
                cout << "Exiting app" << "\n";
                app = 1;
            } else if (appState == "begin") {
                cout << "Enter first number to add together:" << "\n";
                cin >> num1;
                cout << "Enter second number:" << "\n";
                cin >> num2;
                cout << "Answer:";
                cout << num.addNumbers(num1, num2) << "\n";
            } else {
                cerr << "Invalid value: Please enter begin or exit." << "\n";
            }
        }

    return 0; //main must always return 0 - as a status code for success of main function
}
