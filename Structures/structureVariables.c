#include<stdio.h>
int main(){
    struct pokemon{
        int attack;
        int hp;
        int defense;
        char tier;
        char name[15];
    }/*we can also define variable names here*/ ;

    struct bookDetails{
        float price;
        int pages;
        char name[50];
    }a,b,c;
    //char ch[50]="Hello world";
    a.pages=100;
    a.price=405;
    strcpy(a.name,"Secret seven");

    printf("%s",a.name);

//nested structures
    struct legendaryPokemon{
        int specialattack;
        struct pokemon x;
    };

    //typedef 
    
   








}