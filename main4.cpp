#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1, y1, x2, y2; 
    
    cout << "შეიყვანეთ x1 და y1 მნიშვნელობები:" << endl;
    cin >> x1 >> y1;
    
    cout << "შეიყვანეთ x2 და y2 მნიშვნელობები:"<< endl;
    cin >> x2 >> y2;
    
    float distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    cout << "მანძილი ორ წერტილს შორის = " << distance << endl;
    
    
    

    return 0;
}