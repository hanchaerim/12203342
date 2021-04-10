// 초단위 양의 정수만 가능
#include <iostream>
using namespace std;

int main(){
    unsigned long fullTime, hour, second, min;

    cout << "초 단위를 입력하세요: " << endl;
    cin >> second;
    
    hour = second/3600L;
    min = (second - (hour * 3600L))/60;
    second = second - (hour * 3600L) - (min * 60);

    cout << "입력된 초 단위 시간: " << second << endl;
    cout << "결과: ";
    cout << hour << "시 ";
    cout << min << "분 ";
    cout << second << "초";
    return 0;
}



// 시간을 초인데 각각 단위별로&마이너스도 가능
// #include <iostream> 
// using namespace std;

// int main(){
//     double second;
//     double min;
//     double hour;
//     double fullTime;

//     cout << "시간을 입력하시오: " << endl;
//     cin >> hour;
//     cout << "분을 입력하시오: " << endl;
//     cin >> min;
//     cout << "초를 입력하시오: " << endl;
//     cin >> second;

//     fullTime = 3600 * hour + 60 * min + second ;

//     cout << "총 시간은: " << fullTime << endl;
// }
