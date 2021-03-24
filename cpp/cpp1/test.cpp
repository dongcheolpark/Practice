#include <cstdio>

int main()
{
    int n = 0,cnt[10000];
    scanf("%d",&n);
    for(int i = 0;i<10000;i++) {
        cnt[i] = 0;
    }
    for(int i = 0; i<n;i++) {
        int tmp = 0;
        scanf("%d",&tmp);
        cnt[tmp]++;
    }
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<cnt[i];j++) {
            printf("%d ",i);
        }
    }
    return 0;
}