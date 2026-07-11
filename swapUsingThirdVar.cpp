#include <iostream>
using namespace std;

void swap(int* firstNum, int* secondNum){
    int temp = *firstNum;
    *firstNum = *secondNum;
    *secondNum = temp;
}

int main(){
    int firstNum, secondNum;
    cout << "Enter first number:";
    cin >> firstNum;

    cout << "Enter second number:";
    cin >> secondNum;

    cout << "Before Swapping: First Number =" << firstNum << " Second Number = " << secondNum << ".\n";
    swap(firstNum, secondNum);
    cout << "Before Swapping: First Number =" << firstNum << " Second Number = " << secondNum << ".";
}