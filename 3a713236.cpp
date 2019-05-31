#include<stdio.h> 
#include<stdlib.h>
#include<string.h> 

#define MAX 10000
int main(void)
{

	char *str=(char*)malloc(sizeof(char)*MAX); 
    int m,p,num[128]={0}; 
    
    printf("請輸入一字串");
    scanf("%s",str);  
    
    p=strlen(str);
    
    for(m=0;m<p;m++){
    	num[(int)str[m]]++; 
	}
    for(m=0;m<128;m++){
    	
    	if(num[m]!=0){
    		
    		printf("字符%c出現%d次\n",(char)m,num[m]);
    		
		}
	
	}
    return 0;
    
    free(str);

}
