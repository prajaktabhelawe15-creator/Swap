#include <iostream>
using namespace std;

void swap(int* firstNum, int* secondNum){
    *firstNum = *firstNum + *secondNum;
    *secondNum = *firstNum - * secondNum;
    *firstNum = *firstNum - *secondNum;
}

int main(){
    int firstNum, secondNum;
    cout << "Enter a:";
    cin >> firstNum;
    cout << "Enter b:";
    cin >> secondNum;
    cout << "Before swap:" << firstNum << ", secondNum " << secondNum; 
    swap(firstNum, secondNum);
    cout << "After swap:" << firstNum << ", secondNum " << secondNum; 
}
