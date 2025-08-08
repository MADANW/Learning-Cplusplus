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
int searchArray(int arr[], int size, int target); // Function prototype for a function that searches for a target value in an array and returns its index

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

    /* Searching an array for an element */
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array
    int index;
    int target;

    cout << "Enter a number to search for: ";
    cin >> target; // Take input from the user to search for a number
    index = searchArray(numbers, size, target); // Call the function to search for the target number in the array
    cout << "Index of " << target << ": ";
    if (index != -1) {
        cout << index << endl; // Output the index if the target is found
    } else {
        cout << "Not found" << endl; // Output a message if the target is not found
    }

    /* Sorting elements in an array:
    There are many sorting algorithms, but the most common ones are bubble sort, selection sort, insertion sort, merge sort, quick sort, and heap sort.
    Each algorithm has its own time complexity and space complexity.
    The most efficient sorting algorithms are merge sort and quick sort, which have a time complexity of O(n log n) in the average and worst case scenarios.
    Bubble sort, selection sort, and insertion sort have a time complexity of O(n^2) in the worst case scenario, which
    makes them inefficient for large arrays. However, they are simple to implement and can be used
    for small arrays or when the array is already sorted.
    */

    // In this case we will be using bubble sort, which is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the

    int nums2[] = {5, 3, 8, 4, 2, 1, 6, 7};

        return 0;
}

double getTotal(double prices[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; i++) {
        total += prices[i]; // Add each price to the total
    }
    return total; // Return the total price
}

int searchArray(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if the target is found
        }
    }// this is a linear search algorithm with O(n) time complexity
    // Note: If the array is sorted, you can use binary search for O(log n) time complexity
    // Binary search is more efficient for large arrays, but requires the array to be sorted
    return -1; // Return -1 if the target is not found
}
