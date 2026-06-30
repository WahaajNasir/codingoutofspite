#include <stdio.h>

union myData
{
    int DataValue;
    char DataName[5];
    float DataFloat;
};

int main()
{
    union myData myData1;

    myData1.DataValue = 10;
    printf("DataValue: %d\n", myData1.DataValue);
    myData1.DataName[0] = 'A';
    printf("DataName: %c\n", myData1.DataName[0]);
    printf("DataValue after changing DataName: %d\n", myData1.DataValue);
    return 0;
}