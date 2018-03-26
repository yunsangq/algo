#include <stdio.h>

int main(){
	char p[101];
	p[0] = '\0';

	while (fgets(p, 101, stdin)) {
		printf("%s", p);
		p[0] = '\0';
	}
	return 0;
}