#include<stdio.h>
int main(){
    char arr1[100];
    char arr2[100];
    scanf("%s",&arr1);
    scanf("%s",&arr2);

    int i=0;
    while(arr1[i]>=97 && arr1[i]<=122)i++;

    int j=0;
    while(arr2[j]>=97 && arr2[j]<=122){
       //printf("%c",arr2[j++]);
       arr1[i]=arr2[j];
       i++;j++;
    }
    printf("Merged strings:\n");
    for(int k=0;k<i;k++)printf("%c",arr1[k]);

    for(int k=0;k<i/2;k++){
        char temp;
        temp=arr1[k];
        arr1[k]=arr1[i-k-1];
        arr1[i-k-1]=temp;
    }
        printf("\nMERGED AND REVERSED STRINGS:");
    for(int k=0;k<i;k++)printf("%c",arr1[k]);
    
    


}

