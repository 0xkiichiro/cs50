 #include <stdio.h>
#include <cs50.h>

const int ARRAY_LENGTH = 3;
float average(int array[]);

int main(void)
{
    int scores[ARRAY_LENGTH];

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // to enable printing floats and not make the compiler angry
    // we can either use 3.0 instead of 3 since it is a float
    // or we can use <typecasting> to (float) using parantheses and the type inside before any value
    printf("Average: %f\n", average(scores));
}

float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        sum = sum + array[i];
    }
    return sum / (float) ARRAY_LENGTH;
}