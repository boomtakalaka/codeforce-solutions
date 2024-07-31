#include <stdio.h>

int main(int argc, char *argv[])
{
    char buf[50 * 4 + 1];
    int n, k;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d %d\n", &n, &k);
    fgets(buf, sizeof(buf), stdin);
    int curr;
    int chars;
    int count = 0;
    char *p = buf;
    int kscore = 0;
    while (sscanf(p, "%d %n", &curr, &chars) == 1) {
        if (curr > 0 && curr >= kscore) {
            count += 1;
            p += chars;
        }
        else {
            break;
        }
        if (count == k) {
            kscore = curr;
        }
    }
    printf("%d\n", count);
    return 0;
}
