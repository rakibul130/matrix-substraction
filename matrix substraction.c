#include<stdio.h>
int main(){
       int i=3,j=3;
       int a[i][j];
       int b[i][j];
       int c[i][j];
       printf("enter rows of matrix a\n");
       for(i=0;i<3;i++){
           for(j=0;j<3;j++){
               scanf("%d",&a[i][j]);
           }
       }
       printf("enter rows of matrix b\n");
       for(i=0;i<3;i++){
          for(j=0;j<3;j++){
               scanf("%d",&b[i][j]);

          }
      }
      for(i=0;i<3;i++){
         for(j=0;j<3;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
     }
     printf("result of subtraction matrix \n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           printf("%d  ",c[i][j]);
        }
        printf("\n");
     }
 }
