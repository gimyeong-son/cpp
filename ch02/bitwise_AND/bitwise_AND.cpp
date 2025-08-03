#include <iostream>
#include <bitset>  

using namespace std;

int main() {
  int a = 13;
  int b = 27;
  int c = a & b; //  비트 연산자 AND 사용

  // bitset<8>은 정수를 8비트 이진수로 변환하여 출력해 준다.
  cout << "a = " << bitset<8>(a) << " : " << a << endl;
  cout << "b = " << bitset<8>(b) << " : " << b << endl;
  cout << "c = " << bitset<8>(c) << " : " << c << endl;

  return 0;
}
/**
 * 비트 연산자 AND(&)
 * - 양쪽 비트가 모두 1일 때만 결과 비트를 1로 설정한다.
 * - 그 외에는 해당 비트를 0으로 설정한다.
 * a    b   a & b
 * 0    0     0
 * 0    1     0
 * 1    0     0
 * 1    1     1
 */