#include <iostream>
#include <bitset>

using namespace std;

int main() {
  int a = 13;
  int b = 27;
  int c = a ^ b; // 비트 연산자 XOR 사용 

  cout << "a = " << bitset<8>(a) << " : " << a << endl;
  cout << "b = " << bitset<8>(b) << " : " << b << endl;
  cout << "c = " << bitset<8>(c) << " : " << c << endl;

  return 0;
}

/**
 * 비트 연산자 XOR(^)
 * - 피 연산자가 서로 다를 때에만 1로 설정된다.
 * - 같을 때는 0으로 설정된다.
 * a    b   a ^ b
 * 0    0     0
 * 0    1     1
 * 1    0     1
 * 1    1     0
 */