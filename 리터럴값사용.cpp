#include <iostream>
using namespace std;

int main(){
    int x;
    unsigned long int y;
    // long int = int의 범위를 넘는 경우; 뒤에 'ㅣ' 이나 'L' 시용 
    // unsigned long int= 부호 없이 만들고 싶을 때; 뒤에 'u'나 'U' 사용

    x= 1456;
    y= -14567;
    // long int 인데 음수 값이라 출력 결과 오류가 날 것

    cout << x << endl;
    cout << y << endl;
    cout << 1234 << endl;
    cout << 143267L << endl;
    return 0;
}