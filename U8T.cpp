

#include <iostream>
#include <fcntl.h>
#include <io.h>
#include <stdlib.h>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleTitleA("Sherlock");
	_setmode(_fileno(stdout), _O_U8TEXT);
	wchar_t p1 []  = L"░░░█░█░█░█░░█░█░█░░░█░█░█░░█░█░";
	wchar_t p2[] = L"░▄▀█░█░█░█░░█░█░█░▄▀█░█░█░░█░█░";
	wchar_t p3[] = L"░█▄█▄█▄█░█░▄█▄█░█░█▄█▄█░█░▄█▄█░ ";
	wchar_t p4[] = L"░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░";
	wchar_t p5[] = L"░░░░░░░░░░░░█▀▀▀░█░░░░░░░░█░░░█░█";
	wchar_t p6[] = L"░░░░█░░░█░░░▀▀▀█░█░░░█▀█░░█░░░█░█";
	wchar_t p7[] = L"░░░░█▀▀▀▀▀▀▀▀▀▀▀░▀░░░▀▀▀▀▀▀▀▀▀▀░▀";
	wchar_t p8[] = L"▀▀▀▀▀░░░▀░░░░░░░░░░░░░░░░░░░░░░░░";
	
	wchar_t str2[] = L"اللغة العربية";
	wchar_t str3[] = L"中国语言";
	wchar_t str4[] = L"Türkçe";
	wchar_t str5[] = L"русский язык";
	wchar_t str6[] = L"भारतीय भाषा";
	wchar_t str7[] = L"By s̾h̾e̾r̾l̾o̾c̾k̾";
	std::wcout << p1 << "\n" << p2 << "\n" << p3 << "\n" << p4 << "\n" << p5 << "\n" << p6 << "\n" << p7 << "\n" << p8  << std::endl;
	std::wcout  << str2 << "\n" <<str3 << "\n" << str4 << "\n" << str5 << "\n" << str6 << "\n" << str7<<std::endl;

}

