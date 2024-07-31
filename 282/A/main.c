#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char buf[sizeof("150\n")];
    fgets(buf, sizeof(buf), stdin);
    int n;
    sscanf(buf, "%d\n", &n);
    int x = 0;
    for (int i = 0; i < n; i++) {
        fgets(buf, sizeof(buf), stdin);
        buf[strcspn(buf, "\n")] = 0;
        if (strstr(buf, "--")) {
            x -= 1;
        } else {
            x += 1;
        }
    }
    printf("%d\n", x);
    return 0;
}
