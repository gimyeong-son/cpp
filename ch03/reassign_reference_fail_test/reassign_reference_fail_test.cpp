#include <iostream>

using namespace std;

int main() {
  int value = 10;
  int& ref_value = value;

  int value2 = 20;
  ref_value = value2;   // 참조하는 대상의 값 변경

  // value의 값은 10으로 유지하고 ref_value만 20으로 바꾸고 싶었지만
  // 이미 ref_value는 value와 같은 주소를 가지므로 둘 다 20으로 바뀐다.
  cout << "value: " << value << endl;
  cout << "ref_value: " << ref_value << endl;

  // 레퍼런스 변수는 상수를 참조할 수 없다.
  // 상수는 리터럴이고 리터럴이 있는 메모리 공간은 읽기만 가능하다.
  // int& ref_invalid_value = 50;
  return 0;
}