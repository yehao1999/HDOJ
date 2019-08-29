#include <stdio.h>
#include <string.h>
void p2734()
{
    char in[255] = { 0 };
    int sum;
    while (gets_s(in, 255) && in[0] != '#') {
        sum = 0;
        for (short i = 0; i < strlen(in); i++) {
            'A' <= in[i] && in[i] <= 'Z' ? sum += (i + 1)*(in[i] - 'A' + 1) : 1;
        }
        printf("%d\n", sum);
    }
}