#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdbool.h>
bool gameOver;
const int width=10;
const int height=10;
void Setup(){
    gameOver=false;
}
void Draw(){
    int i, j;
    system("cls");
    for(i=0;i<width;,i++){
        printf("#");
    }
    for(i=0;i<height;i++){
        for(j=0;j<width;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
void Input(){

}
void Logic(){

}
int main(){
    Setup();
    While(gameOver==false){
    Draw();
    Input();
    Logic();
    sleep(20);
    }
    return 0;
}