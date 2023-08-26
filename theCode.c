#include <stdio.h>
#include <math.h>

int main(){
    int cells[4][4] = {{17, 18, 19, 20},{21, 22, 23, 24}, {31, 32, 33, 34},{41, 42, 43, 44}};
    int absM = sizeof(cells)/ sizeof(cells[0]);//Rows size
    int absN = sizeof(cells[0])/ sizeof(cells[0][0]);//Cols size
    int i, j;
    int cp = 32; //Take input of the Current Point
    int cpM = 0, cpN = 0;
    int isPresent = 0;

    //acquire the current point CP
    for(i=0;i<absM;i++){
        for(j=0;j<absN;j++){
            if(cp == cells[i][j]){
                isPresent = 1;
                cpM = i;
                cpN = j;
            }
        }
    }
    //check if right, left, top, bottom index is present
    int isRight = 0, isLeft = 0, isTop = 0, isBot = 0;
    if(isPresent == 1){
        printf("Present Neighbours:\n");
        if(cpN > 0){
            isLeft = 1;
            printf("Left: %d\n", cells[cpM][cpN-1]);
            }
        if(cpN < absN-1){
            isRight = 1;
            printf("Right: %d\n", cells[cpM][cpN+1]);
            }
        if(cpM != 0){
            isTop = 1;
            printf("Top: %d\n", cells[cpM-1][cpN]);
            }
        if(cpM < absM-1){
            isBot = 1;
            printf("Bottom: %d\n", cells[cpM+1][cpN]);
            }
    }

}
