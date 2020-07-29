#include <stdio.h>
#include <cs50.h>

float average(int count, int array[]);

int main(){
    //사용자로부터 점수의 갯수 입력받음
    int count = get_int("count of scores : ");

    int scores[count];
    for (int i=0; i < count; i++){
        scores[i] = get_int("Scores %i : ", i + 1);
    }

    printf("Average : %.1f\n", average(count, scores));

}

float average(int count, int array[]){
    int sum = 0;

    for (int i = 0; i < count; i++){
        sum += array[i];
    }
    float avg = (float)sum / (float)count;
    return avg;
}