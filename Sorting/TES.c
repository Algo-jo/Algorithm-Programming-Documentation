#include <stdio.h>

void merge(long long int data[], int leftIdx, int midIdx, int rightIdx)
{
    int leftSetSize = midIdx - leftIdx + 1;
    int rightSetSize = rightIdx - midIdx;
    int leftSet[leftSetSize], rightSet[rightSetSize];

    for (int i = 0; i < leftSetSize; i++)
    {
        leftSet[i] = data[leftIdx + i];
    }

    for (int i = 0; i < rightSetSize; i++)
    {
        rightSet[i] = data[midIdx + i + 1];
    }

    int i = 0;
    int j = 0;
    int k = leftIdx;

    while (i < leftSetSize && j < rightSetSize)
    {
        if (leftSet[i] <= rightSet[j])
        {
            data[k] = leftSet[i];
            i++;
        }
        else
        {
            data[k] = rightSet[j];
            j++;
        }
        k++;
    }

    while (i < leftSetSize)
    {
        data[k] = leftSet[i];
        i++;
        k++;
    }

    while (j < rightSetSize)
    {
        data[k] = rightSet[j];
        j++;
        k++;
    }
}

void mergeSort(long long int data[], int leftIdx, int rightIdx)
{
    if (leftIdx < rightIdx)
    {
        int midIdx = (rightIdx + leftIdx) / 2;

        mergeSort(data, leftIdx, midIdx);
        mergeSort(data, midIdx + 1, rightIdx);

        merge(data, leftIdx, midIdx, rightIdx);
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    int peopleNum[5];
    int num[25];
    for (int i = 1; i <= t; i++){
        for (int j = 0; j < 25; j++){
            scanf("%d", &num[j]);
        }

        mergeSort(num, 0, 24);

        peopleNum[0] = num[0] / 2;
        peopleNum[4] = num[24] / 2;
        peopleNum[1] = num[1] - peopleNum[0];
        peopleNum[3] = num[23] - peopleNum[4];

        for(int j = 0; j < 5; j++){
            if(j == 2) continue;

            for(int k = 0; k < 5; k++){
                if(k == 2) continue;

                int total = num[k] + num[j];
                for(int l = 0; l < 25; l++){
                    if(total == num[l]){
                        num[l] = -1;
                        break;
                    }
                }
            }   
        }

        for(int i = 0; i < 25; i++){
            if(num[i] != -1){
                peopleNum[2] = num[i] - peopleNum[0];
                break;
            }
        }
        printf("Case #%d:", i);
        for (int j = 0; j < 5; j++){
            printf(" %d", peopleNum[j]);
        }
        puts("");
    }
    return 0;
}