#include <stdio.h>
#include <string.h>
int main(){
    char s[101];
    scanf("%s",s);
    int len = strlen(s);
    printf("%c",s[0]);
    for (int i = 0; i < len; i++){
        int hp = 0 ;
        if (s[i] == 45){
            hp = i;
            printf("%c",s[hp+1]);
        }
    }
    return 0;
}


