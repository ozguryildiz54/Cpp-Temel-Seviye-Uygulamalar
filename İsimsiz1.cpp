#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b)
{
int gecici;
gecici=*a;
*a=*b;
*b=gecici; 
}
void bsort(int list[], int n)
{
int count,j;
for(count=0;count<n-1;count++)
for(j=0;j<n-1-count;j++)
if(list[j] > list[j+1])
swap(&list[j],&list[j+1]);
}
void Exchange_sort(int arr[], int n)
{
int i,j;
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(arr[i] > arr[j])
swap(&arr[i],&arr[j]);
}
void insertionSort(int arr[], int n){
int j, key;
for(int i = 1; i < n; i++){
key = arr[i];
j = i - 1;
while(j >= 0 && arr[j] > key)
{ arr[j + 1] = arr[j];
j = j - 1;
}
arr[j + 1] = key;
}
}
void selectionSort(int arr[], int n)
{int i, j, min;
for (i = 0; i < n - 1; i++)
{
min = i;
for (j = i+1; j < n; j++)
{ if (arr[j] < arr[min]) min = j; }
swap(&arr[i],&arr[min]);
}
}
void quickSort(int Arr[], int lower, int upper)
{
int x = Arr[(lower + upper) / 2];
int i = lower; int j = upper;
do{
while(Arr[i] < x) i ++;
while (Arr[j] > x) j --;
if (i <= j)
{
swap(&Arr[i], &Arr[j]);
i ++; j --; }
}while(i <= j);
if (j > lower)
quickSort(Arr, lower, j);
if (i < upper)
quickSort(Arr, i, upper);
}
void display(int list[], int n)
{
int count,j;
for(j=0;j<n;j++)
printf("%d ",list[j]);
}
int main()
{
int dizi[]={5,2,3,1,6,7,8,4};
printf("Siralama algoritmasi oncesi\n");
display(dizi,8);
bsort(dizi,8);
printf("\nSiralama algoritmasi (Bubble sort) sonrasi\n");
display(dizi,8);
Exchange_sort(dizi,8);
printf("\nSiralama algoritmasi (Exchange sort) sonrasi\n");
display(dizi,8);
insertionSort(dizi,8);
printf("\nSiralama algoritmasi (Insertion sort) sonrasi\n");
display(dizi,8);
selectionSort(dizi,8);
printf("\nSiralama algoritmasi (Selection sort) sonrasi\n");
display(dizi,8);
quickSort(dizi,0,7);
printf("\nSiralama algoritmasi (Quick sort) sonrasi\n");
display(dizi,8);
getch();
return 0; 
}
