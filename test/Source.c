#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

int main()
{
	int length = 50;
	int para = 32;
	int delay = 1;
	char background = 'g';
	char border = 'h';
	char fill = '1';
	while (1) {
		for (int i = 0;i < length;++i) {
			for (int o = 0;o < length+para;++o) {
				if (o == i || o == i+para) {
					printf("%c",border);
				}
				else if(o>i&&o<i+para){
					printf("%c", fill);
				}
				else {
					printf("%c", background);
				}
			}
			printf("\n");
			Sleep(delay);
		}
		for (int i = length-1;i >= 0;--i) {
			for (int o = 0;o < length+para;++o) {
				if (o == i || o == i + para) {
					printf("%c", border);
				}
				else if (o > i && o < i + para) {
					printf("%c", fill);
				}
				else {
					printf("%c", background);
				}
			}
			printf("\n");
			Sleep(delay);
		}
	}


	return 0;
}