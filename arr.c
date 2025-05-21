// #include <stdio.h>
// int main() {
//     int n;
//     int arr[31] = {};
//     for (int i=1; i<=28; i++){
//         scanf("%d" ,&n);
//         arr[n] = 1;
//     }
//     for (int j = 1; j<=30; j++){
//         if  (arr[j] == 0) {
//             printf("%d\n",j);
//         }
//     }
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int arr[43] = {};
//     int n;   
//     int c = 0; 
//     for (int i = 1; i <= 10; i++){
//         scanf("%d",&n);
//         arr[n%42] = 1;        
//     }
//     for (int j = 0 ; j<=42; j++){
//         if (arr[j]==1){
//             c = c+1;
//         }
//     }    
//     printf("%d",c);
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int arr[6];
//     int s1,s2,s3,s4;
//     int maxs = 0;
//     int maxn = 0;
//     for (int j = 1; j <=5; j++){
//         scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
//         arr[j] = s1 + s2 + s3 + s4;
//     }
//     for (int i = 1; i<= 5; i++){
//         if (maxs <= arr[i]){
//             maxs = arr[i];
//             maxn = i;
//         }
//     }
//     printf("%d %d",maxn,maxs);
//     return 0;
// }


#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max = 0;
    double total = 0 ;
    int score ;
    
    for (int i = 0; i<n; ++i){
        scanf("%d",&score);
        arr[i] = score;
    }

    for (int i = 0; i <n ; ++i){
        if (max<arr[i]){
            max = arr[i];
        }
    }
    for (int i = 0; i < n; ++i){        
        total += (double)arr[i]/max*100;
    }   
    printf("%.2f",total/n);
    

    return 0;
}
