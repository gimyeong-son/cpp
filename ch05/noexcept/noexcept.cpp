#include <iostream>
using namespace std;

/**
 * 예외 처리 생략 - noexcept
 * - 문제가 발생할 때 반드시 예외를 발생시켜야 하는 것은 아니다.
 * - 때로는 예외를 발생시키는 것이 득보다 실이 더 클 때도 있다.
 * - 값이나 실행 흐름을 충분히 예측할 수 있을 때는 if 문으로 처리하는 것이 성능 면에서 훨씬 이득이다.
 */

void real_noexcept() noexcept // 예외를 던지지 않음을 명시
{
    cout << "real_noexcept" << endl;
}

// noexcept로 명시된 함수 안에서 예외 발생
void fake_noexcept() noexcept
{
    cout << "fake_noexcept" << endl;
    throw 1; // 정수 형식 예외 발생 => 즉 noexcept를 붙였다고 해서 예외를 던지지 못하는 것은 아니다.
    // 경고는 발생하지만 어쩃든 실행 파일은 만들어진다.
    // 컴파일러는 noexcept 키워드가 붙은 함수는 예외를 던지지 않을 것으로 간주하고 그대로 컴파일한다.
    // 하지만 실행해 보면 런타임 오류 메시지가 발생하며 프로그램은 강제로 종료된다.
}

int main()
{
    real_noexcept();

    try
    {
        fake_noexcept();
    }
    catch (int exec)
    {
        cout << "catch " << exec << endl;
        throw 1;
    }

    return 0;
}