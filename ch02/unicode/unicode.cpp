#include <iostream>
// #include <io.h>
// #include <fcntl.h>

using namespace std;

int main()
{
    std::wcout.imbue(std::locale("")); // 현재 시스템 로케일 설정 (Mac에서는 보통 UTF-8)
    wchar_t message_korean[] = L"반갑다 세계야!";      // 한국어 
    wchar_t message_chinese[] = L"你好，世界!";        // 중국어 
    wchar_t message_japanese[] = L"ハロー・ワール!";   // 일본어 
    wchar_t message_russian[] = L"Привет мир!";        // 러시아어

    //_setmode(_fileno(stdout), _O_U16TEXT); // 윈도우 콘솔 창 유니코드 출력 모드 설정

    wcout << message_korean << endl;
    wcout << message_chinese << endl;
    wcout << message_japanese << endl;
    wcout << message_russian << endl;

    return 0;
}

/**
 * 구분             char                                                wchar_t
 * ================================================================================================
 * 인코딩 방식      멀티 바이트(MBCS)                                       유니코드(UNICODE)
 * ================================================================================================
 * 단일 문자 크기   1byte 또는 2byte(영문, 숫자 등의 아스키 코드는 1byte,         2byte(GCC에서는 기본 4byte)
 *               한글, 한자 등은 2byte로 표현)
 * ================================================================================================
 * 문자열          유니코드를 제외한 문자열 (ANISI, UTF-8)                     와이드 문자, UTF-16으로 인코딩된 문자열
 * ================================================================================================
 * 
 * #include <io.h>와 #include <fcntl.h>를 사용하려는 이유
 * - Windows에서 wcout 등을 사용할 때, 콘솔에 한글(유니코드) 출력을 위해 
 *   _setmode(_fileno(stdout), _O_U16TEXT); 같은 코드를 쓰기 위함입니다.
 * - 하지만 맥에서는 UTF-8이 기본이므로 이런 설정이 필요없고 위의 헤더파일은 윈도우 전용이다.
 */