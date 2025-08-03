#include <iostream>
#include <iomanip>

using namespace std;

/**
 * std::setprecision은 cout에서 출력되는 기본 정밀도를 조절하는 함수이다.
 * - std::setprecision(std::numeric_limits<데이터_형식>::digits10 + 1); 코드는
 *   특정 데이터 형식이 표현할 수 있는 유효 자릿수만큼 정밀도를 조절하겠다는 의미이다.
 * 
 * setprecision를 왜 쓰는가?
 * - 기본적으로 cout은 6자리 정밀도까지만 출력합니다.
 * - float/double/long double 차이를 비교하려면 명시적으로 지정해야 함
 * - 왜 float은 값이 달라 보이나요? => 정밀도가 낮아서 소수점 끝부분이 짤림 (float는 약 7자리만 정확)
 
    std::numeric_limits<T>::digits10은 그 타입이 정확하게 표현할 수 있는 최대 10진 자릿수입니다.
    타입	         크기 (sizeof)	      digits10 의미
    float	        4 bytes	6~7	        최대 6자리까지만 정확히 표현
    double	        8 bytes	15	        최대 15자리까지 정확히 표현
    long double	    보통 16 bytes        (mac은 16, windows는 8) 18~21 정도	플랫폼 따라 다름

    +1을 하는 이유
 * - 정확하게 표현 가능한 최대 자리수보다 살짝 더 출력 해서 어디까지가 정확하고 어디부터가 부정확한지 차이를 보여주기 위함입니다.
 * - +1까지는 부정확한 값이 나타날 수 있음
 * - 부동소수점 오차가 어디서부터 생기는지 확인할 수 있음
 * 
 * - std::numeric_limits는 C++에서 자료형의 특성(최댓값, 최솟값, 정밀도 등)을 알려주는 템플릿 클래스입니다.
 * - std::numeric_limits<T>를 사용하면 타입 T에 대한 다양한 정보를 얻을 수 있습니다.
 * 
    | 멤버 함수/상수     | 설명                                   | 예시 (`float`)    |
    | ------------ | ---------------------------------------- | --------------- |
    | `max()`      | 표현 가능한 최댓값                           | `3.40282e+38`   |
    | `min()`      | **0에 가까운 양의 최소값** (음수 아님)          | `1.17549e-38`   |
    | `lowest()`   | 표현 가능한 가장 작은 수 (음수)                 | `-3.40282e+38`  |
    | `epsilon()`  | 1과 구별 가능한 가장 작은 값 (부동소수점 오차 확인) | `1.19209e-07`   |
    | `digits`     | **이진수 비트 정밀도** (부호 제외)              | `24`            |
    | `digits10`   | **10진수로 정확하게 표현 가능한 자릿수**          | `6`             |
    | `is_signed`  | 부호가 있는지 여부                            | `true`          |
    | `is_integer` | 정수형인지 여부                              | `false` (float) |
    | `is_exact`   | 정확한 수인지 (부동소수점은 false)              | `false`         |

 */

int main()
{
    float float_value = 9.87654321f;
    double double_value = 9.87654321987654321;
    long double long_double_value = 9.87654321987654321l;

    cout << "float : " << sizeof(float) << " bytes" << endl;
    cout << "float_value : " << setprecision(numeric_limits<float>::digits10 + 1) 
        << float_value << endl <<endl;

    cout << "double : " << sizeof(double) << " bytes" << endl;
    cout << "double_value : " <<
    setprecision(numeric_limits<double>::digits10 + 1) <<
    double_value << endl << endl;

    cout << "long double : " << sizeof(long double) << " bytes" << endl;
    cout << "long_double_value : " <<
    setprecision(numeric_limits<long double>::digits10 + 1) <<
    long_double_value << endl << endl;

    return 0;
}