#include <stdio.h>
#include "cs50.h"


float average(int length,int totalScore);
int main (void) 
{
    
    float averageScore;
    int totalScore;
    int n;
    int arraySize=get_int("How many exams have you taken?");
    int score[arraySize];
    for(n=0; n<arraySize; n++) 
    {

    score[n] = get_int("Score of your exam %i : \n", n);
    totalScore=score[n]+totalScore;
    }
    average(arraySize,totalScore);
    printf("total score is %i \n", totalScore);
    average;
    
    
}
    

float average(arraySize, totalScore)
{
    
    float averageScore = (float)totalScore/arraySize;
    printf("your average is: %f", averageScore);

    }