#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "შეიყვანეთ a b c მნიშვნელობები" << endl;
    float a, b, c, x1, x2;
    cin >> a >> b >> c;
    
    int discriminant;
    discriminant = sqrt(pow(b,2)-4*a*c);
    
    if (discriminant>0)
    {
        x1 = (-b+discriminant)/(2*a);
        x2 = (-b-discriminant)/(2*a);
        cout << "x1 = " << x1 << " x2 = " << x2;
    }
    
    else if (discriminant<0)
    {
        cout << "ამ კვადრატულ განტოლებას არ აქვს ამონახსნი";
    }

    return 0;
}