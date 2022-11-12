#include <iostream>

using namespace std;

int main()
{
    
    int year;
    cout<<"შეიყვანეთ წელი: ";
    cin >> year;
    
    if ((year%4==0) && (year%100!=0))
    cout << "ეს ნაკიანი წელიწადია";
    
    else if (year%400==0)
    cout << "ეს ნაკიანი წელიწადია";
    
    else
    cout << "ეს არარის ნაკიანი წელიწადი";
    

    return 0;
}
