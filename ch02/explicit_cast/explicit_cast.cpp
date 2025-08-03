#include <iostream>
using namespace std;

/**
 * 명시적 형 변환 외에 C++ 언어에서는 다양한 방법으로 명시적 형 변환을 지원한다.
| 형변환 연산자                     | 용도                                       | 안전성      | 사용 예                              | 비고                               |
| --------------------------- | ----------------------------------          | -------    | --------------------------------- | ----------------------------       |
| `static_cast<T>(expr)`      | 일반적인 타입 변환 (상호 호환되는 타입끼리)           | ✅ 안전      | `static_cast<float>(x)`           | 정수 → 실수, 상속 관계 다운캐스트 등       |
| `dynamic_cast<T>(expr)`     | **런타임 타입 체크를 포함한** 형변환 (주로 포인터/참조) | ✅ 가장 안전  | `dynamic_cast<Derived*>(basePtr)` | RTTI 필요, 반드시 **가상 함수** 있어야 함 |
| `const_cast<T>(expr)`       | `const`, `volatile` 속성 제거 또는 추가          | ⚠️ 위험      | `const_cast<char*>(str)`          | 원본이 진짜 const이면 **UB 발생**       |
| `reinterpret_cast<T>(expr)` | **비트 수준의 해석 변경** (포인터, 정수 간 변환 등)    | ❌ 매우 위험  | `reinterpret_cast<int*>(p)`       | 포인터 타입 바꾸기 등. **최후의 수단**     |

 */

int main()
{
    int int_a = 10;
    int int_b = 5;

    int int_avg = (int_a + int_b) / 2;
    float float_avg_1 = (int_a + int_b) / 2;  // 암시적 형변환: 데이터 유실
    double float_avg_2 = (float)(int_a + int_b) / 2; // 명시적 형변환 

    cout << "int_avg: " << int_avg << endl;
    cout << "float_avg_1: " << float_avg_1 << endl;
    cout << "float_avg_2: " << float_avg_2 << endl;
    return 0;
}