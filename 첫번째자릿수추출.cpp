#include <iostream> 
using namespace std;

int main(){
    unsigned int givenInt, firstDigit;

    cout << "양의 정수 입력: " << endl;
    cin >> givenInt;

    firstDigit = givenInt % 10;
 
    cout << "입력한 정수: " << givenInt;
    cout << "첫 번째 자릿수 추출: " << firstDigit << endl;
    return 0;
}