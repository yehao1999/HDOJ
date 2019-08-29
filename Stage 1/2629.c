#include <stdio.h>
void main()
{
	int n;
	char c[19];
	char add[8][10] = { "Zhejiang","Beijing","Taiwan","Hong Kong","Macao","Tibet","Liaoning","Shanghai" };
	char* p;
	scanf("%d", &n);
	getchar();
	while (n--) {
		gets_s(c, 19);
		if (c[0] == '1') p = add[1];
		else if (c[0] == '7') p = add[2];
		else if (c[0] == '8' && c[1] == '1') p = add[3];
		else if (c[0] == '8' && c[1] == '2') p = add[4];
		else if (c[0] == '5') p = add[5];
		else if (c[0] == '2') p = add[6];
		else if (c[0] == '3' && c[1] == '1') p = add[7];
		else p = add[0];
		printf("He/She is from %s,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",
			p, c[10], c[11], c[12], c[13], c[6], c[7], c[8], c[9]);
	}
}