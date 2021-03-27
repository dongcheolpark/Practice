#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

class pt{
    public:
    int x;
    int y;
};

int main() {
    char ch[21];
    scanf("%s",ch);
    sort(ch,ch+strlen(ch),greater<char>());
    printf("%s",ch);
}