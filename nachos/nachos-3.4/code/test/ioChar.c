#include "syscall.h"

int main() {

	PrintString("Moi thay nhap thu 1 ki tu bat ki:");
	char n = ReadChar();
	PrintChar('\n');
	PrintString("Ki tu thay vua nhap la: ");
	PrintChar(n);
	PrintChar('\n');
	Halt();
}