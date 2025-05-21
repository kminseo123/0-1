#include <stdio.h>
#include <string.h>
int main(){
    char a[101] = {};
    scanf("%s",a);
    int total = 0;
    int len = strlen(a);
    char c = 'A';
    for (int i = 0; i < len; i++){
        if (a[i] - c >= 0){
            if (a[i] - c >= 13){
                total = total + 26 - (a[i] - c);
            }
            else{
                total = total + (a[i] - c);
            }
        }      
        else {
            if (c - a[i] >= 13){
                total = total + 26 - (c - a[i]);   
            }
            else {
                total = total + (c - a[i]);
            }
        }
        c = a[i];
    }
    printf("%d",total);
    return 0;
}