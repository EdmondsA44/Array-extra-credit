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

