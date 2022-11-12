#include <iostream>

using namespace std;

int main()
{
    int firstNumber, secondNumber, thirdNumber;
    cout << "შეიყვანეთ რიცხვები: " << endl ;

    cout << "შეიყვანეთ პირველი რიცხვი: " <<  endl;
    cin >> firstNumber;
    
    cout << "შეიყვანეთ მეორე რიცხვი: " << endl;
    cin >> secondNumber;
    
    cout << "შეიყვანეთ მესამე რიცხვი" << endl;
    cin >> thirdNumber;
    
    if ((firstNumber>secondNumber) && (firstNumber>thirdNumber)) {
        cout << "პირველი რიცხვია მაქსიმალური";
    } else if ((secondNumber>firstNumber) && (secondNumber>thirdNumber)) {
        cout << "მეორე რიცხვია მაქსიმალური";
    } else {
        cout << "მესამე რიცხვია მაქსიმალური";
    }

    return 0;
}