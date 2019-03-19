/*
 *        File: extra_credit.cc
 *      Author: Drew Edmonds
 *        Date: March 18, 2019
 * Description: Array example
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

void printArray(const int numbers[], int size);
void countEven(int numbers[], int size);
void sumArray(int numbers[], int size);

int main(int argc, char const *argv[]) {

    int numbers[8] = {3, 5, 19, 6, 7, 8, 55};
    int size = 7;
    printArray(numbers, size);
    cout << numbers[0] << endl;
    countEven(numbers, size);
    sumArray( numbers, size);

return 0;
}// main

void printArray(const int numbers[], int size) {
    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }
}

void countEven(int numbers[], int size){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (numbers[i] % 2 == 0){
            count++;
        }
    }
    cout << endl << "There are " << count << " even numbers in the array." << endl;
    return;
}

void sumArray(int numbers[], int size){
    int sum = 0;
     for (int i = 0; i < size; i++){
         sum = sum + numbers[i];
         
     }
     cout << "The sum of the array is: " << sum << endl << endl;
}

/*
 * Extra Credit:
 *     Add the following two functions:
 *     1. A function called countEven that counts and returns the number
 *        of evan values in the array numbers.
 *     2. A function to find and return the total of all the values in the array numbers.
 *
 *     Test your functions by calling them in the main function. These functions should work for
 *     any array size.
 *
 * To submit the extra credit, you must create a public repository on GitHub and tag me (@nasseef) when
 * you are done.  This extra credit is due at 11:59 PM Monday 3/18/2019.
 *
 */