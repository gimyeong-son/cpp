#include <iostream>
using namespace std;

void change_negative(int* _val) // 주소 값을 저장하기 위해서 포인터로 받는다.
{
    if(*_val > 0)
    {
        *_val = -(*_val);
    }
}

int main()
{
    int a = 3, b = -3;

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    change_negative(&a); // 주소 지정 연산자로 주소값 전달
    change_negative(&b);

    // 일반 지역 변수를 주소 값으로 넘기면 a, b와 전달받은 _val 매개변수가 같은 주로를 가지므로
    // 함수 내에서 값을 변경해도 메모리 주소 자체가 같으므로 a, b의 값도 영향을 받아 변경된다.
    cout << "change_negative(a) : " << a << endl;
    cout << "change_negative(b) : " << b << endl;

    return 0;
}