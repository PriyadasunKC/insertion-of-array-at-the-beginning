#include <stdio.h>

int main()
{

    int arr[5] = {1,2,3,4,5};
    
    for(int i = 4; i >= 0;i--){
        arr[i+1] = arr[i]; 
    }
    arr[0] = 10;
    
    for(int k = 0; k< 6; k++){
        printf("%d ",arr[k]);
    }
    return 0;
}
