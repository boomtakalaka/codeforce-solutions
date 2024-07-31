#include <stdio.h>

struct friendship {
    int a;
    int b;
};

struct house {
    int id;
    friendship friendships[20000];
};

house houses[20000];

int main(int argc, char* argv[])
{
    int t;
    scanf("%d\n", &t);
    
    for(int i = 0; i < t; i++) {
        int n, m;
        scanf("%d%d\n", &n, &m);
        for (int j = 0; j < m; j++) {
            
        }
    }
}