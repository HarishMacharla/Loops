#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a;
    int b, c, e;
    int str[50], ch, len = 0, sum = 0;
    for (int i = 0; (ch = getchar()) != ' '; i++)
    {
        str[i] = ch;
        len++;
    }
    scanf("%d %d", &e, &b);
    for (int j = (len - 1); j = 0; j--)
    {
        for (int k = 0; k <= len; k++)
        {
            a = (double)pow(e, k);
            sum += (str[j] * a);
        }
    }
    do
    {
        c = sum % b;
        printf("%d", c);
        sum /= b;
    } while (c != 0);
}
