#include <stdio.h>

int main(int argc, char *argv[])
{
    char buf[102];
    fgets(buf, sizeof(buf), stdin);
    char *p = buf;
    char curr = 0;
    int count = 0;
    while (p < (buf + sizeof(buf)) && *p != 0) {
        if (*p != curr) {
            curr = *p;
            count = 1;
        } else {
            count += 1;
        }
        if (count == 7) {
            break;
        }
        p += 1;
    }
    printf("%s\n", count == 7 ? "YES" : "NO");
    return 0;
}
