#include <iostream>

using namespace std;

int value = 1;   // 전역 변수

int main() {
  int value = -1;   // 지역 변수

  cout << value << endl;     // 지역 변수 출력
  cout << ::value << endl;   // 전역 변수 출력

  return 0;
}

/**
 * 지역 변수가 전역 변수보다 우선권이 높지만 전역 범위 연산자 ::를 사용하면
 * 전역 변수에 접근할 수 있다.
 */