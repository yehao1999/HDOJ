#include <stdio.h>
void main()
{
    for (short i = 2992; i < 10000; i++)
    {
        short s10, s12, s16;
        s10 = s12 = s16 = 0;
        s10 = i % 10 + i / 10 % 10 + i / 100 % 10 + i / 1000;
        s12 = i % 12 + i / 12 % 12 + i / 144 % 12 + i / 1728 % 12;
        s16 = i % 16 + i / 16 % 16 + i / 256 % 16 + i / 4096 % 16;
        if (s10 == s12 && s10 == s16) {
            printf("%hd\n", i);
        }
    }
}