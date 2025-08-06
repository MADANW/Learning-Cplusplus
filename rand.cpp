/* Random number generator: Will generate numbers based on a n-side dice */
/* Note: This program generates psuedo-random numbers. No computer program actually generates random numbers.*/

#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()    
using namespace std;

int main() {

    srand(time(NULL)); // Seed the random number generator with the current time
    int n, dice; // Declare a variable to hold the number of sides of the dice and the dice itself
    cout << "Enter the number of sides of the dice: ";
    cin >> n; // Take input from the user for the number of sides

    dice = (rand() % n) + 1; // Generate a random number between 1 and n (inclusive)
    cout << dice << endl; // Output the generated random number





}