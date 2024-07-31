#include <stdio.h>

int main(int argc, char *argv[])
{
    char buf[sizeof("1 1 1\n")];
    fgets(buf, sizeof(buf), stdin);
    int n;
    sscanf(buf, "%d\n", &n);
    int a, b, c;
    int problems = 0;
    for (int i = 0; i < n; i++) {
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d %d %d\n", &a, &b, &c);
        if ((a + b + c) >= 2) {
            problems++;
        }
    }
    printf("%d\n", problems);
    return 0;
}
