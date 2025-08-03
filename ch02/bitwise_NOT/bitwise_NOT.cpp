#include <iostream>

using namespace std;

int main() {
  unsigned int value = 0x00000000;   // 0을 16진수(hex)로 표현한 값

  value = ~value; // 비트 반전 => 1의 보수
  cout << hex << value << endl; // 16진수로 출력

  return 0;
}

/**
 * 모든 비트를 반전하면 1의 보수가 된다.
 * 1의 보수에서 1을 더하면 2의 보수를 구할 수 있다.
 */