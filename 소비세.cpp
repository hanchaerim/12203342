#include <iostream>
using namespace std;

int main(){
    const double sobise = 0.09;

    double sale;
    double total;
    double nabbusobise;
   

    cout << "판매 금액을 입력하시오: " << endl;
    cin >> sale;
    
    nabbusobise = sale * sobise;
    total = sale + nabbusobise;

    cout << "소비세는: " << nabbusobise << "원입니다." << endl;
    cout << "전체 금액은: " << total;
}
