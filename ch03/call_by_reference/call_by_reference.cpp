#include <iostream>
using namespace std;

/**
 * 레퍼런스
 * - 레퍼런스 변수는 다음처름 변수 이름 앞에 &기호로 선언한다.
 * - 주소 연산자와 같은 기호지만 의미는 완전히 다르다.
 * - 레퍼런스로 사용할 때는 메모리 주소가 아닌 원본 변수를 참조하겠다는 의미
 * 자료형& 레퍼런스_변수_이름 = 대상_변수_이름
 * 
 * 레퍼런스를 사용할 때 주의점
 * 1. 레퍼런스 변수는 선언 후 반드시 참조할 원본 변수를 지정해야 한다.
 * - 즉, 레퍼런스 변수는 다른 변수에 종속적이며 독립적으로 존재할 수 없다.
 * 2. 참조할 대상이 지정된 레퍼런스 변수는 다른 변수를 참조하도록 변경할 수 없다.
 * 3. 레퍼런스 변수는 상수를 참조할 수 없다.
 */

// 매개변수를 레퍼런스 변수로 선언
// a, b 변수에 별칭 ref_a, ref_b를 설정해 즉 하나의 변수에 이름이 2개가 되는것
// 이러한 호출을 참조에 의한 호출이라고 한다.
void swap(int& ref_a, int& ref_b) {
  // 교환 전 a, b 값
  cout << "[swap func] before swap, ref_a: " << ref_a << "  ref_b : " << ref_b << endl;

  int temp = ref_a;
  ref_a = ref_b;
  ref_b = temp;

  // 교환 후 a, b 값
  cout << "[swap func] after swap, ref_a: " << ref_a << "  ref_b : " << ref_b << endl;
}

int main() {
  int a = 5;
  int b = 10;

  // swap 함수 호출 전 a, b 값
  cout << "[main] before swap, a: " << a << "  b: " << b << endl << endl;

  swap(a, b);

  // swap 함수 호출 후 a, b 값
  cout << endl << "[main] after swap, a: " << a << "  b: " << b << endl;

  return 0;
}