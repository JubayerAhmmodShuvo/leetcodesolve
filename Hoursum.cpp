#include <stdio.h>
int main(){
    int arr[6][6];
    int i,j,hoursum=0,max=-100;
    for (i=0; i<6; i++) {
    for (j=0; j<6; j++) {
    scanf("%d",&arr[i][j]);
    
    }
    }
       for (i=0; i<4; i++) {
    for (j=0; j<4; j++) {
    hoursum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
    if(hoursum>max){
        max=hoursum;
    }
    
    }
    }
    printf("%d",max);
}