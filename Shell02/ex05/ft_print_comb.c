#include <unistd.h>

void ft_print_comb(void){
	char a = '0';
	while(1){
		char b = '1';
		while(1){
			char c = '2';
			while(1){
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if(c == '9')
					break; 
				int cc = (int)c + 1;
				char rc = (char)cc;
			}
			if(b == '8')
				break;
			int bb = (int)b + 1;
			b = (char)bb;
		}
		if(a == '7')
			break;
		int aa = (int)a + 1;
		a = (char)aa;
	}
}
