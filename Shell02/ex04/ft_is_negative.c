#include <unistd.h>

void ft_is_negative(int n){
	if(n < 0){
		char c = 'N';
		write(1, &c, 1);
	}
	else{
		char c = 'P';
		write(1, &c, 1);
	}
}
