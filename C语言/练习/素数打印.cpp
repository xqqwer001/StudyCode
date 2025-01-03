#include<stdio.h>
#include<math.h>
int main(){
    int i,M,count=0;
    for(i=2;i<=1000;i++){
    	M=1;
        for(int k=2;k<=sqrt(i);k++){
            if(i%k==0){
            	M=0;
            break;
			}
        }
    if(M){
	    printf("%-5d",i);
        count++;
	    if(count%10==0)
	    printf("\n");
        }
    }
    return 0;
}

