#include <iostream>
using namespace std;

const long double km_per_mile = 1.609344L;

long double operator"" _km(long double val) // _km 사용자 리터럴 정의
{
    return val; // 아무런 작업 없이 그대로 반환
}

long double operator"" _mi(long double val) // _mi 사용자 리터럴 정의
{
    return val * km_per_mile; // 마일을 킬로미터로 변환하여 반환
}

int main()
{
    long double distance_1 = 1.0_km; // 킬로미터는 그대로 저장
    long double distance_2 = 1.0_mi; // 마일은 킬로미터 단위로 변환해서 저장

    cout << distance_1 + distance_2 << " km" << endl; // 킬로미터로 출력

    return 0;
}
/**
 * 사용자 정의 리터럴
 * - 기본적으로 제공되는 리터럴 외에 개발자가 리터럴을 직접 정의할 수도 있다.
 * - 리터럴을 나타내는 접미사를 함수 이름으로 만들면 된다.
 * - 사용자 정의 리터럴 연산자 operator""를 사용한다.
 * 
 * 반환_타입 operator"" 리터럴_접미사(매개변수_구성)
 */