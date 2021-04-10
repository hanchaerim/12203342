#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double number;
    int intPart;
    double fracPart;

    cout << "부동 소수점 입력: " << endl;
    cin >> number;

    intPart = static_cast<int>(number);
    // 정수 부분만 보겠다. 명시적 형변환
    fracPart = number - intPart;

    cout << fixed << showpoint << setprecision(2);
    // 소수점 두 자리까지만 보여 줘라
    cout << "원래 값: " << number << endl;
    cout << "정수 부분: " << intPart << endl;
    cout << "소수 부분: " << fracPart;
    
    return 0;
}