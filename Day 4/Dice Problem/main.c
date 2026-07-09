#include <stdio.h>

int oppFace(int n)
{
    return (7 - n);
}

int main()
{
    int diceFace;
    printf("Enter the dice face: ");
    scanf("%d", &diceFace);

    printf("Opposite Dice Face to %d is: %d\n", diceFace, oppFace(diceFace));
}