#include <unistd.h>

void ft_print_alphabet(void){
	char* c = "abcdefghijklmnopqrstuvwxyz";
	write(1, c, 26 * 2);
}
