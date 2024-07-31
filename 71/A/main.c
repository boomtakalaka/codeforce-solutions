#include <stdio.h>
#include <string.h>

int
main(int argc, char *argv[])
{
    char str[200];
    int n;
    size_t strmax = sizeof(str);
    fgets(str, strmax, stdin);
    sscanf(str, "%d\n", &n);

    size_t len;
    for (int i = 0; i < n; i++) {
        fgets(str, strmax, stdin);
        str[strcspn(str, "\n")] = 0;
        len = strlen(str);
        if (len <= 10) {
            puts(str);
        } else {
            printf("%c%d%c\n", str[0], len - 2, str[len - 1]);
        }
    }
    return 0;
}