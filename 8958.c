#include <stdio.h>
#include <string.h>

int main(){
    int n; 
    scanf("%d",&n);
    for (int j = 0; j<n; j++){
        int score = 0;
        int total = 0;
        char s[81] = {};
        scanf("%s",s);
        for (int i =0; i<strlen(s);i++){
            if (s[i] == 'X'){
                score = 0;
            }
            else {
                score = score + 1;
            }
            total = total + score;
        }
        printf("%d\n",total);
    }
    return 0;
}