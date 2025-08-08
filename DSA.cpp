/* 
These notes will be different from the ones in basicSyntax since I will start writing about the usage of different data structures and algorithms in C++.

A data structure is a way of organizing and storing data so that it can be accessed and modified efficiently. An algorithm is a step-by-step procedure for solving a problem or performing a task.

An alogorithm is a sequence of steps that can be followed to solve a problem or perform a task. It is a set of instructions that can be executed to achieve a specific goal. Algorithms can be implemented in various programming languages, including C++.

Time complexity is a measure of the amount of time an algorithm takes to complete as a function of the size of the input. It is usually expressed in terms of Big O notation, which describes the upper bound of the time complexity in the worst case scenario.
*/
#include <string>
#include <iostream>
using namespace std;

double getTotal(double prices[], int size); // Function prototype for a function that calculates the total price of an array of prices

int main() {

    /* Arrays */
    // Arrays are a collection of elements of the same type, stored in contiguous memory locations.
    // They can be used to store a fixed-size sequential collection of elements.

    int arr[5] = {1, 2, 3, 4, 5}; // To declare an array you must first specify the type and size of the array
    // Here, we declare an array of integers with 5 elements and initialize it with values


    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " "; // To iterate through an array, you can use a for loop of size n, where n is the size of the array (O(n) time complexity ) 
    }

    // Example 2:

    string names[3] = {"Alice", "Bob", "Charlie"}; // Declare an array of strings with 3 elements
    cout << "\nNames in the array: ";
    for (int i = 0; i < 3; i++) {
        cout << names[i] << " "; // Output each name in the array
    }

    /* For Each loop: An easier way to iterate through an array of unknown size is to use a for each loop */
    
    cout << "\nUsing for each loop: ";
    for (string name : names) { // You can specify the type of the elements in the array or use auto to let the compiler deduce the type
        cout << name << " "; // Output each name in the array
    }

    // Passing arrays to functions:
    double prices[] = {10.99, 20.49, 5.99};
    double total = getTotal(prices, 3); // Call the function to calculate the total price of the array
    cout << "\nTotal price: $" << total << endl; // Output the total price

        return 0;
}

double getTotal(double prices[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; i++) {
        total += prices[i]; // Add each price to the total
    }
    return total; // Return the total price
}