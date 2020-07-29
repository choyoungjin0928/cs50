#include <stdio.h>
#include <string.h>
#include <cs50.h>



int main(){
    int Score[9] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
    string Grade[9] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};

        printf("학점 프로그램\n");
        printf("종료를 원하면 %d를 입력\n",-1);
        printf("[학점 테이블]\n");
        
        printf(" 점수 : 95 90 85 75 70 60 0\n");
        printf(" 학점 : A+ A  B+  B  C+ C F\n");

    while(true){
        int score = get_int("학점을 입력하세요 : ");
        if(score > 100 || score < 0){
            printf("성적을 올바르게 입력하세요(0~100)\n");
        }
        if (score == -1 ){
            printf("학점 프로그램을 종료합니다.\n");
            break;
        }else if (score>=95 && score<=100){
            printf("학점은 %s입니다.\n", Grade[0]);
        }else if (score>=90 && score<95){
            printf("학점은 %s입니다.\n", Grade[1]);
        }else if (score>=85 && score<90){
            printf("학점은 %s입니다.\n", Grade[2]);
        }else if (score>=80 && score<85){
            printf("학점은 %s입니다.\n", Grade[3]);
        }else if (score>=75 && score<80){
            printf("학점은 %s입니다.\n", Grade[4]);
        }else if (score>=70 && score<75){
            printf("학점은 %s입니다.\n", Grade[5]);
        }else if (score>=65 && score<70){
            printf("학점은 %s입니다.\n", Grade[6]);
        }else if (score>=60 && score<65){
            printf("학점은 %s입니다.\n", Grade[7]);
        }else{
            printf("학점은 %s입니다.\n", Grade[8]);
        }
    }
       
    return 0;
}
