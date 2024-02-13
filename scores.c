#include <stdio.h>
#include "cs50.h"


public int totalScore;
float average(int length,int array[]);
int main (void) 
{
    
    int n;
    int arraySize=get_int("How many exams have you taken?");
    int score[];
    for(n=0; n<arraySize; n++) 
    {

    score[n] = get_int("Score of your exam %i : \n", score[n]);
    totalScore=score[n]+totalScore;
    }
    printf("total score is %i \n", totalScore);
    average;
}
    

float average(arraySize, score[])
{
    
    float averageScore = totalScore/arraySize;
    printf("Your average is: %f", averageScore);

    }