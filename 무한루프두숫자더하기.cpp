#include <iostream>

int main(){
    using std::endl;
    using std::cin;
    using std::cout;

    int a;
    int sum = 0;

    while(true)
    { 
        cin >> a;
        if(a <= 0)
        break;
        cout << "input: " << endl;
        
        sum += a;
        cout << "sum: " << sum << endl;
        cout << "=====" << endl;
        
    }
}