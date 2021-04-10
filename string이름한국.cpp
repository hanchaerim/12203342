#include <iostream>
#include <string>
using namespace std;

int main(){
    string first;
    string last;
    string space = " ";
    string Fullname;

    cout << "성을 입력하세요" << endl;
    cin >> first;

    cout << "이름을 입력하세요" << endl;
    cin >> last;

    Fullname = first + space + last;
    cout << "전체 이름 출력: " << Fullname;
    return 0;

}