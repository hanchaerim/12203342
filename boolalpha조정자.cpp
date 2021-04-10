#include <iostream>
using namespace std;

int main(){
    bool x = true;
    bool y = false;

    cout << "기본 x: " << x << endl;
    cout << "기본 y: " << y << endl;

    cout << "조정 x: " << boolalpha << x << endl;
    cout << "y값: " << y << endl;
    cout << noboolalpha;
    cout << "조정 안 한 y: " << y << endl;

    if(y == 1)
    {
        cout << "참";
    }
    else{
        cout << "거짓";
    }
    return 0;
}