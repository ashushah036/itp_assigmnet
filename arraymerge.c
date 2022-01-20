#include <stdio.h>
int main(){
int m,n,k;           // lenth of arr1 is m nd lenth of arr2 is n
scanf("%d %d %d", &m ,&n, &k);
int arr1[m],arr2[n];
for(int i=0;i<m;i++){                    // input of array 1
    scanf("%d",arr1[i]);
}
for(int j=0;j<n;j++){                     // input of array 2
    scanf("%d",arr2[j]);                     
}
//task 1 now we have to sort nd then merge nd then sort again
//task2  we have to find pair (arr3[i]+arr3[j]=k) k is given sum
    return 0;
}