#include <cstdio>
using namespace std;

int main(){
    int k;
    scanf("%d", &k);
    printf("%d:%02d", 21 + k / 60, k % 60);
    return 0;
}