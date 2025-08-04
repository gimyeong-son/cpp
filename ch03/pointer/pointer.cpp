#include <iostream>
using namespace std;

/**
 * 포인터 연산자
 * - 메모리 주소를 저장하는 변수
 * - 자료형 *(포인터_변수_이름);
 * 
 * 주소 연산자
 * - 피연산자의 주소를 읽어 오는 연산자
 * - &를 변수에 붙이면 된다.
 * - AND 연산자와 혼동하지 말자.
 * 
 * 다중 포인터
 * - 포인터가 차지하는 공간 역시 주소를 가지고 있다.
 * - 포인터를 가리키는 포인터를 의미하는 다중 포인터를 이용할 수 있다.
 */
int main()
{
    char char_value = 'A';
    int int_value = 123;
    double double_value = 123.456;

    char *char_pointer_value = &char_value;
    int *int_pointer_value = &int_value;
    double *double_pointer_value = &double_value;

    // 일반 변수의 데이터 출력
    cout << "char_value: " << char_value << endl;
    cout << "int_value: " << int_value << endl;
    cout << "double_value: " << double_value <<endl;
    cout << endl;    
    
    // 역참조 연산자로 포인터 변수가 가리키는 데이터 출력
    cout << "*char_pointer_value: " << *char_pointer_value << endl;
    cout << "*int_pointer_value: " << *int_pointer_value << endl;
    cout << "*double_pointer_value: " << *double_pointer_value << endl;
    cout << endl;

    // 역참조 연산자로 원본 데이터 덮어쓰기
    *char_pointer_value = 'Z';
    *int_pointer_value = 321;
    *double_pointer_value = 654.321;

    // 일반 변수의 데이터 출력 (업데이트 확인)
    cout << "char_value: " << char_value << endl;
    cout << "int_value: " << int_value << endl;
    cout << "double_value: " << double_value <<endl;
    cout << endl;

    // 다중 포인터
    int* int_pt_value = &int_value;
    int** int_pt_pt_value = &int_pt_value;
    int*** int_pt_pt_pt_value = &int_pt_pt_value;

    cout << "int_value: " << int_value << endl;
    cout << "*int_pt_value: " << *int_pt_value << endl;
    cout << "**int_pt_pt_value: " << **int_pt_pt_value << endl;
    cout << "***int_pt_pt_pt_value: " << ***int_pt_pt_pt_value << endl;
    return 0;
}