#include <iostream>
using namespace std;

/**
 * 정적 변수와 상수 변수
 * - static과 const는 C++ 언어에서 자주 혼동하는 키워드이다.
 * 
 * 정적 변수 선언하기 - static
 * - 지역 변수는 선언된 지점에서 생성되고 해당 블록이 끝나면 소멸한다.
 *   이러한 특성을 자동 지속(auto duration)이라고 한다.
 * - 지역 변수(local variable)
 *  - 함수 내부에 선언된 변수로, 해당 블록 내에서만 효력이 있다.
 * - 전역 변수(global variable)
 *  - 전역 범위에 선언된 변수로, 해당 파일 전체에서 효력이 있다.
 * 
 * static 키워드
 * - static 키워드를 사용하면 자동 지속에서 정적 지속(static duration)으로 변수의 유효 범위가 바뀐다.
 * - 즉, static 키워드는 지역 변수를 정적 변수(static variable)로 바꾼다.
 * - 이렇게 생성된 정적 변수는 선언된 블록이 끝나더라도 값을 유지한다.
 */

void func()
{
    int a = 10;
    static int b = 10;

    a++;
    b++;
    
    cout << "a : " << a << " , b : " << b << endl;
}

int main()
{
    func();
    func();
    func();
    func();
    func();
    return 0;
}