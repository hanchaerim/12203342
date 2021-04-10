#include <iostream>
using namespace std;


int main(){
    //상수 정의 'Value' = 값
    const unsigned int cheonwonValue = 1000;
    const unsigned int ocheonwonValue = 5000;
    const unsigned int manwonValue = 10000;

    // 변수 정의 unsigned= 부호가 없는 정수(+값만
    unsigned int cheonwon;
    unsigned int ocheonwon;
    unsigned int manwon;

    unsigned long totalValue;

    cout << "천 원의 수: ";
    cin >> cheonwon;
    cout << "오천 원의 수: ";
    cin >> ocheonwon;
    cout << "만 원의 수: ";
    cin >> manwon;

    totalValue = cheonwon * cheonwonValue + ocheonwon * ocheonwonValue + manwon * manwonValue;

    cout << "전체 값은" << totalValue << "원";
    return 0;
}
