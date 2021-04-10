//소수로 받고 정수로 내보내기
#include <iostream>
using namespace std;

int main(){
    double a, b;
    int sum;

    cout << "실수로 입력받아 정수로 내보내기" << endl;
    cout << "첫 번째 실수 입력" << endl;
    cin >> a;

    cout << "두 번째 실수 입력" << endl;
    cin >> b;

    sum = a + b;
    cout << "그 합은 정수로" << sum << endl;
    return 0;
}

// 정수 두 개 더하기
// #include <iostream>
// using namespace std;

// int main(){
//     int num1, num2;
//     int sum;

//     cout << "두 숫자를 더하는 프로그램입니다." << endl;
//     cout << "첫 번째 숫자를 입력하세요." << endl;
//     cin >> num1;

//     cout << "두 번째 숫자를 입력하세요." << endl;
//     cin >> num2;
//     sum = num1 + num2;

//     cout << "두 숫자의 합은: " << sum << endl;
//     return 0;
// }

//소수까지 계산해서 더하기
// #include <iostream> 
// using namespace std;

// int main(){
//     double num1, num2, sum;

//     cout << "두 실수의 합을 계산하는 프로그램입니다." << '\n';
//     cout << "첫 번째 숫자를 입력하세요." << '\n';
//     cin >> num1;

//     cout << "두 번째 숫자를 입력하세요. " << '\n';
//     cin >> num2;
//     sum = num1 + num2;

//     cout << "두 실수의 합은: " << sum << endl;
//     return 0;

// }

