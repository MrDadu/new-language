#include <iostream>

using namespace std;

int main()
{
    float firstNumber, secondNumber;
    char opInput;
    
    cout << "შეიყვანეთ პირველი ციფრი: "<< endl;
    cin >> firstNumber;
    
    cout << "შეიყვანეთ მეორე ციფრი: "<< endl;
    cin >> secondNumber;
    
    cout << "აირჩიეთ მოქმედება: '+', '-', 'x', '%'"<< endl;
    cin >> opInput;
    
    switch(opInput) 
    {
        case '+':
            cout << "ჯამი = " << firstNumber + secondNumber << endl;
            break;
        case '-':
            cout << "სხვაობა =  " << firstNumber - secondNumber << endl;
            break;
        case 'x':
            cout << "ნამრავლი =  " << firstNumber * secondNumber << endl;
            break;
        case '%':
            cout << "განაყოფი = " << firstNumber / secondNumber << endl;
            break;
        default:
            cout << "შეიყვანეთ ზევით მოცემული ოპერატორიდან რომელიმე" << endl;
            break;
    }

    return 0;
}