#include <iostream>
#include <vector>

using namespace std;

class maths {
public: //makes class accessible outside of the class

    int addNumbers(int number1, int number2) {
        return number1 + number2;
    }

    int subtrackNumbers(int number1, int number2) {
        return number1 - number2;
    }
    vector<int> myDynamicArray; //creates a dynamic array
    int myNonedynamicArray[10]; //Creates an array with 10 allocated slots in memory
    myNonedynamicArray[0] = 10;
};

int main() {
    maths num; // initialises the maths class as num within the main function
//    std::cout << "Hello, World!" << std::endl;
    cout << "hello world!" << "\n";

    cout << num.addNumbers(1, 2) << "\n";
    cout << num.subtrackNumbers(5, 3);

    return 0; //main must always return 0 - as a status code for success of main function
}
