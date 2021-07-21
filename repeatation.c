/*
Replace the given character by its cummulative repeatations in a string. 
input: taste the thunder, t
output: 1as2e 3he 4hunder

input: taste the thunder, z
output: (empty string)
*/
#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char input[]={"taste the thunder, t"};
    char temp[10]={'1','2','3','4','5','6','7','8'};
    printf("input:\t%s\n",input);
    int len= sizeof(input)/sizeof(char);
    char output[len-4];
    int j=0;
    for(i=0;i<len-4;i++){
        
        if(input[i]==input[len-2])
        {
        output[i]= temp[j++];
        }
        else{
            output[i]=input[i]; 
        }
        }
    if(j==0)
        printf("output:\t(empty string)\n");
    else
    printf("output:\t%s\n",output);
    
}