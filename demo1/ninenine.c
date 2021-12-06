#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("ninenine.txt","w+");
    fprintf(fp,"九九乘法表:\n");
    for(int i = 1;i<=9;i++){
        for(int j = 1;j<=i;j++){
            fprintf(fp,"%d * %d = %d\t",i,j,i*j);
            if(i == j){
                fprintf(fp,"\n");
            }
        }
        
    }
    fclose(fp);
    return 0;
}