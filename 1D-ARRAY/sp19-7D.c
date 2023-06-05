#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n , i, j, temp;
    scanf("%d", &n);
    int arr[n];
    //mone kor n = 5, eibabe 5 size er ekta array create kora jai, int arr[n] kinto scanf er por likte hobe je , sabdan..
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //input newa sesh ekta array
    //sorting time
    for( i = 0; i< n; i++)//0 index, a[0] mane 1st position
    {
        for( j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])//ei sorting e 1st position shobceye coto number ashi jabe,eibae 2nd e 2nd coto...sort hoi jabe
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //sorting sesh
      for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    /*
    input :
        6
        2 1 9 8 4 7
        sort but how :
        1st position jokon i = 0 , jokon a[j] mane er tik porer ta aro coto number hobe tokon tader position swap hoi jabe
        2 1 er 2 > 1 , so ekn 1 2 hoi jabe
        1 2 9 8 4 7
        abr 1 er shate 9 er compare kinto 1 > 9 eta to hobe na , so swap hobe na
        eibabe colte takbe j er loop sesh hoile i ekn 1 mani 2nd position er jonno uporer process abar hobe, eibabe shob gula
        number sort hoi jabe...

        1 2 4 7 8 9 ans

        a[i] > a[j] er jaigai a[i] < a[j] likle 
        9 8 7 4 2 1 hobe ,
        eto kisu na bujle , icca hoile array sort er video deken naile ar ki korar skip for now.
        sort korar kinto aro onek way ase/
    
    */
    
    
    
    
    
    
    
    
    
    return 0;
}