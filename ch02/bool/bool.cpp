#include <iostream>
using namespace std;

int main() 
{
    // bool은 참(true:1)과 거짓(false:0)만 가질 수 있는 형식이다.
    // bool형 변수에 true나 false 값을 초기화하거나 할당할 수 있지만, 실제로는 키워드가 아닌
    // 정수로 저장된다.
    bool value;

    value = true;   // 1
    cout << value << endl;

    value = false;  // 2
    cout << value << endl;

    return 0;
}