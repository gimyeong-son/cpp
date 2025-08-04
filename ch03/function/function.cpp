#include <iostream>
using namespace std;

// 반환 형식 | 함수 이름 | 매개변수             | 함수 몸체
// int       add      (int _x, int _y)     { }

/**
 * 1. 반환 형식
 * - 함수가 반환할 값이 자료형이다.
 * - 반환할 값이 없을 때는 void로 표기한다.
 * 2. 함수 이름
 * - 함수를 호출할 때 사용할 이름이다.
 * - 함수의 이름은 문자나 밑줄(_)로 시작하며, 숫자나 공백으로 시작할 수는 없다.
 * 3. 매개변수
 * - 함수가 호출될 때 전달받은 값을 저장하는 변수로, 함수 내부에서만 사용할 수 있는 지역 변수이다.
 * - 전달받을 값이 없을 때는 비워 두거나, void로 매개변수가 없음을 표기할 수 있다.
 * 4. 함수 몸체
 * - 함수의 기능을 정의하는 부분이다.
 */

int add(int _x, int _y) // add 함수 정의
{ // 함수 몸체
    int result = _x + _y;
    return result;
}

int main()
{
    int add_result = add(2, 3); // add 함수 호출
    cout << "add 함수 결과: " << add_result << endl; // 함수 실행 결과
    return 0;
}