#include<stdio.h>

int main(){
    float x,y,new_x,new_y,distance;
    char direction;

    printf("Enter current coordinate (x and y positions):");
    scanf("%f %f",&x,&y);
    printf("Enter No. units towards direction :");
    scanf("%f",&distance);
    printf("Enter Direction:");
    scanf(" %c",&direction);

    new_x = x;
    new_y = y;

    switch (direction){
        case 'N':
            new_y += distance;break;
        case 'S':
            new_y -= distance;break;
        case 'E':
            new_x += distance;break;
        case 'W':
            new_x -= distance;break;
    }
    printf("New coordinte:(%.f,%.f)",new_x,new_y);
}