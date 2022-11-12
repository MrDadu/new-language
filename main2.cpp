#include <iostream>

using namespace std;

int main()
{
    float F, C, FartoCel, CeltoFar;
    cout << "ცელსიუსის გადაყვანა ფარენჰაიტში" << endl;
    cout << "შეიყვანეთ ცელსიუსი : "<< endl;
    
    cin >> C;
    CeltoFar = C*9/5+32;
    cout << C << "ცელსიუსი ტოლია : " << CeltoFar << "ფარენჰაიტის" <<  endl;
    
    cout << "ფარენჰაიტის გადაყვანა ცელსიუსში " << endl;
    cout << "შეიყვანეთ ფარენჰაიტი : " << endl;
    
    cin >> F;
    FartoCel = (F-32)*5/9;
    cout << F << "ფარენჰაიტი ტოლია : " << FartoCel << "ცელსიუსის" << endl;
    
    
    
    
    return 0;
}