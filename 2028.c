#include <stdio.h>
#define MAX(X,Y) ((X)>(Y)?(X):(Y))
#define MIN(X,Y) ((X)<(Y)?(X):(Y))
void main()
{
	int n;
	while (~scanf("%d", &n)) {
		long long a, res;
		scanf("%lld", &a);
		res = a;
		n--;
		while (n--) {
			scanf("%lld", &a);
			long long i = MIN(res, a);
			while (i != 1 && (a % i != 0 || res % i != 0))
				i--;
			if (i == 1)
				res *= a;
			else if (i == MIN(res, a))
				res = MAX(res, a);
			else
				res = MIN(res, a) / i * MAX(res, a);
		}
		printf("%lld\n", res);
	}
}