#include <stdio.h>

int main(){
	char nama[110];
	scanf("%[^\n]", nama); //supaya bisa ngambil nama kita sampai enter
	printf("Congrats \"%s\" for joining the CS department at BINUS.\n", nama); //supaya outputnya ada tanda petik, dikasi \"
}
