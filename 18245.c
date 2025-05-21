#include <stdio.h>
#include <string.h>
int main(){
    char a[10001];    
    for (int i = 1; i <= 100; i++) {
        scanf(" %[^\n]", a);          
        if (strcmp(a, "Was it a cat I saw?") == 0){
            break;
        }
        int read = 0;
        int len = strlen(a);          
        while (read < len){
            printf("%c", a[read]);
            read = read + i + 1; 
        }
        printf("\n");
    }
    return 0;
}
