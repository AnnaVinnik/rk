#include <unistd.h>
#include <stdio.h>

int rk_readkey(int *c){
	read(2, c, 2);
return *c;
}

int main()
{
int c;
rk_readkey(&c);
//read(2, &c, 2);
printf("c = %d\n", c);
printf("%c\n", c);
	return 0;
}
