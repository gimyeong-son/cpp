#include <iostream>
#include <bitset>

using namespace std;

int main() {
  int a = 13;
  int b = a >> 1;     // 1bit 오른쪽으로 시프트 
  int c = a << 1;     // 1bit 왼쪽으로 시프트 
  // int d = a >> -1;    // 시프트 수행 오류 (warning C4293)
  // int e = a << 32;    // 시프트 수행 오류 (warning C4293)

  cout << "a = " << bitset<8>(a) << " : " << a << endl;
  cout << "b = " << bitset<8>(b) << " : " << b << endl;
  cout << "c = " << bitset<8>(c) << " : " << c << endl;
  // cout << "d = " << bitset<8>(d) << " : " << d << endl;
  // cout << "e = " << bitset<8>(e) << " : " << e << endl;

  return 0;
}
/**
 * 시프트 연산
 * 1. 비트 연산자인 오른쪽 시피트(>>)와 왼쪽 시프트(<<)는 이름 그대로 방향만 차이가 있을 뿐, 동작 방식은 같다.
 * 2. 시프트 연산은 변수 >> 이동 비트 수, 변수 << 이동 비트 수 형식으로 사용한다.
 * 3. >>는 오른쪽 <<는 왼쪽으로 지정한 숫자만큼 비트를 이동시키며 모자라는 비트는 0으로 채운다.
 * 4. 밀려나는 비트는 버린다.
 * 5. 이동할 비트 수가 음수이거나, 너무 크면 시프트 연산은 제대로 수행되지 않는다.
 */