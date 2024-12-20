/*#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    int x;
    int y;
    
}POINT;

int main(){
    POINT* points;
    int count;
    scanf("%d", &count);
    
    points=(POINT*)malloc(sizeof(POINT)*count);
    
    for(int i=0; i<count;i++){
        points[i].x=rand()%100;
        points[i].y=rand()%100;
    }
    for(int i=0;i<count;i++){
        printf("x- %d, y- %d\n",points[i].x, points[i].y);
    }
    
    free(points);
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    int x;
    int y;
    
}POINT;

int inputMenu(void){
    int input;
    printf("메뉴 입력(1. 구조체 만들기, 2. 구조체 출력하하기, -1. 종료) : ");
    scanf("%d", &input);
    return input;
}
POINT* makePoint(void){
    POINT* p=(POINT*)malloc(sizeof(POINT));
            p->x=rand()%100;//points에 count번째 있는 것은 주소값이다.
            p->y=rand()%100;
            return p;
}
void printPoint(POINT* p[], int size){
    for(int i=0; i<size;i++) {
        printf("x:%d,y:%d\n", p[i]->x, p[i]->y);
    }
}
void freePoints(POINT* p[], int size){
    for(int i=0;i<size;i++){
        free(p[i]);
    }
}
    int main(){
    int menu;
    int count=0;
    POINT* points[100];//주소값을 받는 배열100개
    
    do{
        menu=inputMenu();
        if(menu==1){
            //구조체 만들기
            points[count]=makePoint();
            count++;
            printf("잘 생성되었습니다");
            
        }else if(menu==2){
            //구조체 출력하기
            printPoint(points, count);
        }else if(menu==-1){
            freePoints(points, count);
            printf("프로그램을 종료합니다.");
        }
    }while(menu>0);
    
    return 0;
}
