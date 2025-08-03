#include <iostream>
using namespace std;

int main()
{
    // 네임스페이스
    // - 소속을 지정해 주는 역할을 한다.
    // - 내부 식별자(형식, 함수, 변수 등)에 범위를 부여해 여러 라이브러리를 포함할 때 이름이 충돌하는 것을
    //   방지하려고 사용한다.
    // std는 C++ 표준 라이브러리에 정의된 네임스페이스로 cout, cin, string 등 자주 사용하는 함수와 객체가 포함되어 있다.
    // cout => 콘솔에 출력할 때 사용하는 표준 출력 스트림 객체
    // endl => 스트림을 비우고 줄을 바꾸는 조작자(manipulator)
    // cin  => 사용자의 입력을 읽을 때 사용하는 표준 입력 스트림 객체
    int i, j;
    cout << "Enter num_1: ";
    cin >> i;

    cout << "Enter num_2: ";
    cin >> j;

    cout << "num_1 + num2 = " << i + j << endl;
    return 0;
}
