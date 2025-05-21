#include <stdio.h>
#include <string.h>
int main(){
    int n;
    int total;
    char s[1001] = {};    
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        total = 0;
        char s2[91] = {};
        scanf("%s",s);
        for (int i = 0; i<strlen(s); i++){
            s2[s[i]] = 1;
        }
        for (int i = 65; i<91; i++){
            if (s2[i] == 0){
                total = total + i;
            }
        }
        printf("%d\n",total);
    }
    return 0;
}