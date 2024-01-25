#include<stdio.h>
int main(){
    struct pokemon{//user defined dadtype
        int hp;
        int attack;
        int speed;
        char tier; //A,B,C,D,S
    };

    struct pokemon pikachu; //new pokemon added
    scanf("%d",&pikachu.attack);
    //pikachu.attack=60;
    pikachu.hp=100;
    pikachu.speed=150;
    pikachu.tier='A';

    struct pokemon chrizard;
    chrizard.hp=100;
    chrizard.speed=80;
    chrizard.attack=200;
    chrizard.tier='S';
    
    struct pokemon mewtwo;
    mewtwo.hp=100;
    mewtwo.speed=80;
    mewtwo.attack=200;
    mewtwo.tier='G';

    printf("%c \n", mewtwo.tier);
    printf("%d", pikachu.attack);
    
    

}