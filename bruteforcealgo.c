#include <stdio.h>
int main(){
int m,n,k;           // lenth of arr1 is m nd lenth of arr2 is n
scanf("%d %d %d", &m ,&n, &k);
int arr1[m],arr2[n];
for(int i=0;i<m;i++){                    // input of array 1
    scanf("%d",&arr1[i]);
}
for(int j=0;j<n;j++){                     // input of array 2
    scanf("%d",&arr2[j]);                      
}
//creating 3rd array to store other to arrays
int arr3[m+n];
for(int h=0;h<m+n;h++){
    if(h<m){
        arr3[h]=arr1[h];
    }
  else {
      arr3[h]=arr2[h-m];
  }  
}
//sorting the merged array
for(int j=0;j<m+n-1;j++){
    for(int k=j+1;k<m+n;k++){
        if(arr3[k]<arr3[j]){
            int temp;
            temp=arr3[j];
            arr3[j]=arr3[k];
            arr3[k]=temp;

        }
    }
}
printf("the merged array: \n" );
for(int i=0;i<m+n;i++){
   printf("%d ",arr3[i]);
}
int no_of_pairs=0;
// getting the pair sum equal to k
for(int x=0;x<m+n;x++){
    for(int y=x+1;y<m+n;y++){
        if(arr3[x]+arr3[y]==k){
            printf("(%d,%d)",arr3[x],arr3[y]);
            no_of_pairs++;
        }
        
        }
    }
    printf("\n");
    if(no_of_pairs>0){
    printf("above were the pairs");
}
else{
    printf("no such pairs exist");
}
    return 0;

}