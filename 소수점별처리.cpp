#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double x = 1237234.1235;
    cout << fixed << setprecision(2) << showpos << setfill('*');
    // setprecision(2) = 소수점을 두 자리까지만 사용
    // showpos = 양수/음수 부호 둘 다 출력
    // sethill(*) = 빈칸을 *로 채운다

    cout << setw(15) << left << x << endl;
    cout << setw(15) << internal << x << endl;
    cout << setw(15) << right << x;
    // left = 숫자를 왼쪽 정렬
    // internal = 부호 왼쪽,    , 오른쪽 숫자
    // right = 부호 오른쪽 정렬
    return 0;
}