#include <iostream>
using namespace std;

/**
 * 배열과 포인터가 같을까?
 * - 배열 변수가 가리키는 주소는 배열의 첫 번쨰 원소의 주소이기도 하고, 배열 인덱스와
 *   포인터 연산이 같아서 배열과 포인터가 같다고 생각할 수 있지만, 이 엄연히 둘은 다르다.
 */
int main()
{
    int array[5] = { 1, 2, 3, 4, 5 };
    int *pointer_array = array;

    // array와 pointer_array가 같은 주소를 가리키고 있지만, sizeof로 크기를 비교해 보면 완전히 다르다.
    cout << "array: " << array << endl; // 0x7ff7b2992010
    cout << "pointer_array: " << pointer_array << endl << endl; // 0x7ff7b2992010

    cout << "sizeof(array): " << sizeof(array) << endl; // 20byte
    cout << "sizeof(pointer_array): " << sizeof(pointer_array) << endl; // 8byte

    // 배열과 포인터의 관계에서 핵심은 배열의 원소에 접근할 때 포인터 연산으로 가능하다는 것이다.
    return 0;
}