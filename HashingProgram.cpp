/*
Zach Koontz, Colin McCarry, Stephen Binkley, Alex McClellan
Dr. Williams
CSC-2710
3 December 2021
Hashing Sorting Program
*/

#include<iostream>
#include<cstdlib>
#include<string>
#include<sys/time.h>

using namespace std;

void merge(int arr[], int start, int mid, int end);
void mergeHash(int arr[], int start, int end, int &compares);
void mergeNonHash(int arr[], int start, int end, int &compares)

int main()
{
    //Variables and Array
    int array1[] = {1, 3, 2, 7, 5, 4, 8, 7}, int array2[] = {1, 3, 2, 7, 5, 4, 8, 7}, m = sizeof(a) / sizeof(a[0]), n = sizeof(a) / 2, o = sizeof(a);
    int compares1, compares2;

    mergeHash(array1, m, o, compares1);
    mergeNonHash(array2, m, o, compares2)

    return 0;
}

void merge(int arr[], int start, int mid, int end)
{
   int length1 = mid - start + 1;
   int length2 = end - mid;  

    int leftArr[length1], rightArr[length2];

  for (int i = 0; i < length1; i++)
    leftArr[i] = arr[start + i];
  for (int j = 0; j < length2; j++)
    rightArr[j] = arr[mid + 1 + j];

  int a, b, c;
  a = 0;
  b = 0;
  c = start;

  while (a < length1 && b < length2) {
    if (leftArr[a] <= rightArr[b]) {
      arr[c] = leftArr[a];
      a++;
    } else {
      arr[c] = rightArr[b];
      b++;
    }
    c++;
  }

  while (a < length1) {
    arr[c] = leftArr[a];
    a++;
    c++;
  }

  while (b < length2) {
    arr[c] = rightArr[b];
    b++;
    c++;
  }
}

void mergeHash(int arr[], int start, int end, int &compares)
{
  if(start < end){
     int mid = start + (end - start)/2;
     mergeSort(arr,start,mid,compares);
     mergeSort(arr,mid + 1,end,compares);
     merge(arr, start, mid, end);
  }
  compares++;
}

void mergeNonHash(int arr[], int start, int end, int &compares)
{
  if(start < end){
     int mid = start + (end - start)/2;
     mergeSort(arr,start,mid,compares);
     mergeSort(arr,mid + 1,end,compares);
     merge(arr, start, mid, end);
  }
  compares++;
}
