#include <iostream>
using namespace std;

int main()
{
    cout << "아스키 코드 출력하기 [32 ~ 126]:\n";
    for(char i = 32; i < 127; i++) 
    {
        cout << i << ((i % 16 == 0) ? '\n' : ' ');
    }

    return 0;
}
/**
 * 문자를 표현하는 데 char를 사용하는 이유는 아스키 코드가 7bit 형태의 체계를 따르고 있어서 이다.
 * 나머지 1bit는 통신 확인용 패리티 비트이다.
 * 즉, char가 아스키 문자를 저장할 때는 0~127 사이의 값을 가진다.
 */