#include <iostream>
using namespace std;

void change_negative(int _val)
{
    if(_val > 0)
    {
        _val = -_val;
    }
}

int main()
{
    int a = 3, b = -3;

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    change_negative(a);
    change_negative(b);

    // 일반 지역 변수를 주소 값이 아닌 해당 변수의 값을 함수로 넘기면 값이 매개변수의 값으로 복사된다.
    // 즉 전달 받은 매개변수는 전달한 변수와 값만 같을 뿐 전혀 다른 변수이다.
    // 그래서 함수 내에서 _val 변수의 값을 조작해도 함수를 빠져나오면 끝이다.
    // 함수 내에서만 의미가 있고 다시 빠져 나온 메인 함수의 a, b는 _val과 상관없으므로 영향을 받지 않는다.
    cout << "change_negative(a) : " << a << endl;
    cout << "change_negative(b) : " << b << endl;

    return 0;
}