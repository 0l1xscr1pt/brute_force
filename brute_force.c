#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(char *str) {
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

char *brute_force(char *str) {
	int a;
	int i;
	size_t len;
	char *stock_str;

	len = ft_strlen(str);
	stock_str = malloc(sizeof(char) * (len + 1));
	i = 0;
	a = '!';
	while (str[i] && (a >= '!' && a <= '~')) {
		if (str[i] == a) {
			printf("%s%c\n", stock_str, a);
			stock_str[i] = a;
			a = '!';
			i++;
		}
		else
			printf("%s%c = %d\n", stock_str, a, a);
		a++;
		
	}
	printf("stock_str = %s\n", stock_str);
}

int main(int argc, char **argv) {
	brute_force(argv[1]); 
	return 0;
}
