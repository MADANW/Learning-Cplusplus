#include <iostream> //Std in and out for C++ standard library
#include <vector> // vector library for dynamic arrays (using in typedef example)
#include <cmath> // cmath library for mathematical functions
using namespace std; // Use the standard namespace to avoid prefixing std:: (namespaces are used to organize code and prevent name conflicts)

int x = 10; // Global variable declaration, accessible in all functions below

void exampleFunction(); // Functions MUST ALWAYS be declared before they are used.
double math(double a, double b); // Function prototype for a function that takes two doubles and returns their sum
void bakepizza(); // Function prototype for a function that bakes pizza without toppings
void bakepizza(string topping); // Function prototype for a function that bakes pizza with a topping

typedef std::vector<long long> BigInt_t; // typedef is used to create a nickname for a very long or tedeous type, in this case, a vector of long long integers

int main() { // Main function to execute the program
    std::cout << "Hello, World!" << std::endl;// Output using std(standard)cout and endl(new line)


    const int x = 10; // Declare a constant integer variable x with value 10

    // Note: a Constant variable cannot be changed after its declaration
    // To declare a variable you must first specify its type (int, float, double, etc.)
    // Arithmetic operations: (+,-,*,/,%) are the same in all languages

    int y = 5; // Declare a variable y and assign it the value 5
    int sum = x + y; // Add x and y and store the result in sum
    std::cout << "Sum of " << x << " and " << y << " is: " << sum << std::endl; // Output the sum which is 15
    // To make stuff easier C++ allows you to put " = " and any arithmetic operator next to it, like +=, -=, *=, /=, %=

    /*
    Type Conversion: C++ automatically converts types when necessary, but you can also do it explicitly.
    For example, converting an int to a double:
    double d = static_cast<double>(x); // Convert x to double
    std::cout << "Converted x to double: " << d << std::endl;

    // Implicit conversion
    double e = y; // Convert y to double
    std::cout << "Converted y to double: " << e << std::endl;
    */
   
    std::cout <<"What's your name?"; //prints out "what's your name"
    std::string name; // Declare a string variable to hold the name
    std::cin >> name; // Take input from the user and store it in the name
    /*
    Note: That's all there is to IOstreams in C++. You can use cin for input and cout for output.
    */

   /*USEFULL MATH FUNCTIONS*/
   double x = 3.0;
   double y = 4.0;
   double z = 5.0;

   cout<< sqrt(x) << endl; // Calculates the square root of x
   cout<< pow(x, y) << endl; // Raises x to the power of y
   cout<< abs(-x) << endl; // Returns the absolute value of -x
   cout<< fmod(x, y) << endl; // Returns the remainder of x divided by y
   cout<< fmin(x, y) << endl; // Returns the minimum of x and y
   /* There a a lot of math functions in C++ since its made for math and physics.
    You can find the full list in the cmath library documentation.
   */
    
   /* Conditional Statements and Comparison operators*/

   if (x != y){
    cout << "correct! \n"; // If statement structure
   }

   switch (x) // Switch structure
   {
   case 1:
    cout << "correct! \n"; 
        break;

   default:
    break;
   }

   // Comparison operators: ==, !=, <, >, <=, >=
   // Logical operators: && (and), || (or), ! (not)

   /* Ternary Operator*/
   // The ternary operator is a shorthand for if-else statements

   // it follows; condition ? expression_if_true : expression_if_false;
   // Example:
   int a = 5, b = 10;
   int max = (a > b) ? a : b; // If a is greater than b, max is a, otherwise max is b
   // Example 2:
   x > 0 ? cout << "x is positive" : cout << "x is negative or zero"; // If x is greater than 0, print "x is positive", otherwise print "x is negative or zero"

   // Logical operators are the same as any programing language
   // && (and), ! (not), || (or)

   /* String methods (only useful ones):

   some useful string methods in C++ are:
   std::string str = "Hello, World!"; // to declare a string
   str.length(); // Returns the length of the string
   str.substr(0, 5); // Returns a substring from index 0 to index 5 (this is also known as slicing)
   str.find("World"); // Returns the index of the first occurrence of "World" in the string
   str.replace(0, 5, "Hi"); // Replaces the first 5 characters of the string with "Hi"
   str.append(" How are you?"); // Appends " How are you?" to the end of the string
   str.erase(0, 5); // Erases the first 5 characters of the string
   str.insert(0, "Hey "); // Inserts "Hey " at the beginning of the string
   str.clear(); // Clears the string
   str.empty(); // Returns true if the string is empty, false otherwise.   
   */

   // Loops:
   // C++ supports for, while, and do-while loops, similar to other languages.
   //examples
    for (int i = 0; i < 5; i++) {
         cout << "Loop iteration: " << i << endl; // For loop structure 
    } // Best use case for iterating over arrays or collections

    int j = 0;
    while (j < 5) { // While loop structure
        cout << "While loop iteration: " << j << endl;
        j++;
    }   // Best use case for when the number of iterations is not known beforehand

    j = 0;
    do { // Do-while loop structure
        cout << "Do-while loop iteration: " << j << endl;
        j++;
    } while (j < 5); // Best use case for when you want to execute the loop at least once, regardless of the condition

    // Nested loops:
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Nested loop iteration: i = " << i << ", j = " << j << endl; // Nested loop structure
        }
    } 
    // Note: nested loops usually have an O(n^2) time complexity, so use them wisely.
    // The only way to avoid nested loops is to use recursion or other algorithms like dynamic programming.
    // The only exeption to this is if you use binary search or other algorithms that have a logarithmic time complexity. In this case it would be O(n log n) time complexity.

    // Break and continue statements:
    for (int i = 0; i < 5; i++) {
        if (i == 2) {
            continue; // Skip the rest of the loop when i is 2
        }
        if (i == 4) {
            break; // Exit the loop when i is 4
        }
        cout << "Loop iteration: " << i << endl; // Output the value of i
    } // Break exits the loop, continue skips the current iteration and goes to the next one (Pretty simple, right?)



    /* Function usage examples (go down to see the functions) */

    exampleFunction(); // Call the example function to demonstrate function declaration and definition
    bakepizza(); // Call the bakepizza function to demonstrate function definition without parameters
    bakepizza("chicken"); // Call the overloaded bakepizza function with a topping parameter

    int myNum = 5;

    // Sizeof operator:
    cout << "Size of int: " << sizeof(int) << " bytes" << endl; // Outputs the size of an int in bytes
    cout << "Size of double: " << sizeof(double) << " bytes" << endl; // Outputs the size of a double in bytes
    cout << "Size of char: " << sizeof(char) << " bytes" << endl; // Outputs the size of a char in bytes
    cout << "Size of myNum: " << sizeof(myNum) << " bytes" << endl; // Outputs the size of myNum

    /* Ints have a size of 4 bytes, doubles have a size of 8 bytes, and chars have a size of 1 byte.
    A string is an array of characters, so its size is the size of the array plus 1 byte for the null terminator.
    The sizeof operator returns the size of a variable or data type in bytes.
    You can use it to determine the size of a variable or data type at runtime.
    */



   
    return 0;// Return 0 to indicate successful execution /same as exit(0);
    // Note: In C++, the main function must return an int, so we return 0 to indicate successful execution.
    // If you want to return an error code, you can return a non-zero value.
    // The return value of the main function is used by the operating system to determine if the program executed successfully or not.  
} // All functions in C++ must be closed with a closing brace


void exampleFunction() { // Example function to demonstrate function declaration and definition
    std::cout << "This is an example function." << std::endl; // Output a message

    /* User Defined Functions */
    // Functions are declared with a return type, name, and parameters (if any).
    // Example:

    /* Note: This function is commented out, but you can uncomment it to use it.

    int add(int a, int b) { // Function to add two integers
        return a + b; // Return the sum of a and b
    } 
    */
} // This function's return type is void, meaning it does not return a value. You can also use int, float, double, etc. as return types.

double math(double a, double b) { // Example function to demonstrate function parameters
    double a = 5.0;
    double b = 10.0;
    return a + b; // Return the sum of a and b
} // This function takes two double parameters and returns their sum. You can also use int, float, etc. as parameter types.

void bakepizza() { // Example function to demonstrate function definition
    std::cout << "Baking pizza..." << std::endl; // Output a message
} 

void bakepizza(std::string topping) { // Overloaded function to demonstrate function overloading
    std::cout << "Baking pizza with " << topping << " topping..." << std::endl; // Output a message with the topping
} // This function takes a string parameter and outputs a message with the topping. Function overloading allows you to have multiple functions with the same name but different parameters.

void printNum(int myNum) { // Function to print a number
    std::cout << myNum; // myNum can't be seen by this function since functions can't view inside other functions. You can only pass variables to functions as parameters.
    // unless you use global variables, which is not recommended.

}