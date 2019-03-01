#include <stdio.h>
#include <stdlib.h>
//Deklarasi struct 
struct data{
    int nim;
    char nama[20];
} mhs[100];
typedef struct data data;
  
void swap (struct data *a,struct data *b){
    data tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
  
void cetak(data mhs[100],int n){
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", mhs[i].nim);
    }
    printf("\r\n");
}
 
 
void InsertionSort(struct data mhs[100], int n) 
{ 
   int i, key, j; 
   for (i = 1; i < n; i++) 
   { 
       key = mhs[i].nim; 
       j = i-1; 
 
       while (j >= 0 && mhs[j].nim > key) 
       { 
           mhs[j+1].nim = mhs[j].nim; 
           j = j-1;
       } 
       cetak(mhs,n);
       mhs[j+1].nim = key; 
   } 
} 
 
  
void BubbleSort(data mhs[100], int n){  
    int i, j; 
    int swapped; 
    for (i = 0; i < n-1; i++) { 
        swapped = 0;
        for (j = 0; j < n-i-1; j++){ 
            if(mhs[j].nim > mhs[j+1].nim){ 
                swap(&mhs[j],&mhs[j+1]);
                swapped = 1; 
            }
            cetak(mhs,n);
        }
          
    if (swapped == 0) 
        break; 
    }
}
  
int main(){
   
    int n;
    char s[8];
  
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%s %s",s,mhs[i].nama);
        mhs[i].nim = atoi(s);
    }
  
    BubbleSort(mhs,n);
     printf("Hasil akhir :\r\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d - %s\r\n", mhs[i].nim, mhs[i].nama);
          
    }
  
    return 0;
}
