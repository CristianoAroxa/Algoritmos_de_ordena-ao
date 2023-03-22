#include <stdio.h>
#include <stdlib.h>
void selection_sort(int * v, int n){
    int i,j,min,aux;
    for(i=0; i <(n-1);i++){
        min = i;
        for(j = (i+1);j<n;j++){
            if(v[j]<v[min])
                min = j;
        }
        if(v[i]!=v[min]){
            aux=v[i];
            v[i]=v[min];
            v[min]=aux;
        }
    }
}



int main(){
    int v[7] = {7,9,2,1,3,4,8}, i;
for(i=0;i<7;i++){
    printf("%d ", v[i]);


}
printf("\n");
selection_sort(v,7);
for(i=0;i<7;++i){
    printf("%d ", v[i]);
}
}
