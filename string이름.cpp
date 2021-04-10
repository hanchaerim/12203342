#include <iostream>
#include <string>
using namespace std;

int main(){
    string first;
    string initial;
    string last;
    string space = " ";
    string dot = ".";
    string fullName;

    cout << "이름 입력하기: ";
    cin >> first;
    cout << "이니셜 입력하기: ";
    cin >> initial;
    cout << "성 입력하기: ";
    cin >> last;

    fullName = last + space + first + dot + initial;

    cout << "전체 이름 입력: " << fullName;
    return 0;
}