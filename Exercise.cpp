#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

template<class T> T Max(T a, T b) {
	return a > b ? a : b;
}

template<>
char* Max(char* a, char* b) {
	return strlen(a) > strlen(b) ? a : b;
}
int main() {
	std::cout << Max(5, 8) << '\n';
	std::cout << Max(6.6, 99.9) << '\n';
	std::cout << Max("Hello", "Hi");
	return 0;
}