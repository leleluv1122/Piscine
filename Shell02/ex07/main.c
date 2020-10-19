#include "seupark.h"

int main(){
	ft_putnbr(-2147483648);
	char c = ' ';
	write(1, &c, 1);
	ft_putnbr(0);
	write(1, &c, 1);
	ft_putnbr(10);
	write(1, &c, 1);
	ft_putnbr(2147483647);
	return 0;
}
