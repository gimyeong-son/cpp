#include <iostream>

using namespace std;

void func_throw() {
  cout << "func_throw()" << endl;
  cout << "throw -1" << endl;
  throw - 1;   // 정수 형식 예외 던지기, catch()문을 찾지만 없다.
  cout << "after throw -1" << endl;
}

int main() {
  try {
    func_throw();
  } // 함수에서 예외가 처리도지 않아서 함수를 호출한 쪽으로 전달되는 현상을 가리켜 스택 풀기라고 한다.
  catch (int exec) {   // 정수 형식 예외 받기
    cout << "catch " << exec << endl;
  }

  return 0;
}