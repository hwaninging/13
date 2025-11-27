#include <stdio.h>
#include <stdlib.h>
#include <string.h> //string 쓰려면 추가해줘야돼 
//실습 13 : 구조체 
//1. 구조체 정의 및 활용 

//학번, 이름 학점 멤버 정의 
struct student{
       int ID;
       char name[20];
       double grade;
       };

int main(int argc, char *argv[])
{
    //변수 선언, 적절한 값으로 초기화
    struct student stud = {10, "hwanhee", 4.3};
    struct student *stdPtr;
    
    stdPtr = &stud;
    
    //학번, 이름, 학점 다른 값으로 변경 
    stdPtr->ID = 23;
    strcpy(stdPtr->name, "HONG");
    stdPtr->grade = 2.0; 
    
    //학번, 이름, 학점 각각 출력 
    printf("ID : %d, name: %s, grade : %lf\n", stdPtr->ID, stdPtr->name, stdPtr->grade);
  
  system("PAUSE");	
  return 0;
}
