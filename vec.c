#include<stdio.h>
int main()
{
    float a[3][3],b[3][1];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%f", &a[i][j]);
        }
        scanf("%f", &b[i][0]);
    }
    float det;
    for(i=0;i<3;i++){
         det = det + (a[0][i] * (a[1][(i + 1) % 3] * a[2][(i + 2) % 3] - a[1][(i + 2) % 3] * a[2][(i + 1) % 3]));
    }
    float inverse[3][3];
    float inverse2[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            inverse[i][j]=((a[(i + 1) % 3][(j + 1) % 3] * a[(i + 2) % 3][(j + 2) % 3]) - (a[(i + 1) % 3][(j + 2) % 3] * a[(i + 2) % 3][(j + 1) % 3]));
        }
    }
    //for transpose
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            inverse2[i][j]=inverse[j][i];    
        }
    }
    //inverse(A)=AX+B
    float B[3][1];
    //
    float ans[3];
    for(i = 0; i < 3; i++){
        ans[i]=0;
    }
    for(j = 0; j < 3; j++){
        if(a[i][j]==0){
            ans[i]++;
        }
    }
    for(i=0;i<3;i++){
        B[i][0] = 0;
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            B[i][0]=B[i][0]+(inverse2[i][j]*b[j][0]);
        }
        B[i][0]=B[i][0]/det;
    }
    for(i=0;i<3;i++){
        printf("%f ", B[i][0]);
    }
    return 0;
}