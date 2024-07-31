#include <stdio.h>

int main(int argc, char *argv[])
{
    char buf[10];
    fgets(buf, sizeof(buf), stdin);
    int m, n;
    sscanf(buf, "%d %d\n", &m, &n);
    int i = 0;
    int ismeven, isneven;
    ismeven = (m % 2) == 0;
    isneven = (n % 2) == 0;
    if (ismeven) {
        i = m / 2 * n;
    } else if (isneven) {
        i = n / 2 * m;
    } else {
        i = (m > n) ? 
            (m / 2 * n + n / 2) :
            (n / 2 * m + m / 2);
    }
    printf("%d\n", i);
    return 0;
}
