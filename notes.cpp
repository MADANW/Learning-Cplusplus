#include <iostream> //Std in and out for C++ standard library
#include <vector> // vector library for dynamic arrays (using in typedef example)
#include <cmath> // cmath library for mathematical functions


using namespace std; // Use the standard namespace to avoid prefixing std:: (namespaces are used to organize code and prevent name conflicts)

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





   
    return 0;// Return 0 to indicate successful execution /same as python


} // All functions in C++ must be closed with a closing brace

