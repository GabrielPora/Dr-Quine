#include <stdio.h>
int main()
{
	char	*c = "#include <stdio.h>	int main(){char	c* = %c%s%c;printf(c, 34, c, 34);}";
	printf(c,34,c,34);
}