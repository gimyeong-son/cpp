#include <iostream>
using namespace std;

/**
 * 동적 메모리 할당
 * - 배열은 고정된 크기를 가지기 때문에 적게 쓰거나 많이 쓸 때 메모리가 낭비되거나 오버플로우가 발생한다.
 * - 동적 메모리 할당은 프로그램 실행 중에도 필요한 크기의 메모리를 운영체제에 요청하여 사용할 수 있는 방법이다.
 * 
 * 동적 메모리 할당과 해제
 * - 자료형* 변수_이름 = new 자료형
 * - delete 변수_이름;
 */
int main()
{
    // 정수를 저장할 메모리 주소를 동적 할당하고 해당 메모리의 시작 주소를 pt_int_value가 가리키도록 선언한다.
    int* pt_int_value = new int;    // 동적 메모리 할당

    // 해당 메모리에 100을 저장
    *pt_int_value = 100;

    // 출력
    cout << *pt_int_value << endl;

    delete pt_int_value; // 동적 메모리 해제
    
    return 0;
}