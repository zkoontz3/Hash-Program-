/*
Zach Koontz, Colin McCarrie, Stephen Binkley, Alex McClellan
Dr. Williams
CSC-2710
3 December 2021
Hashing Sorting Program
*/

#include<iostream>
#include<cstdlib>
#include<string>
#include<chrono>
#include<ctime>

using namespace std;

void merge(int arr[], int start, int mid, int end);
void mergeHash(int arr[], int start, int end, int &compares);
void mergeNonHash(int arr[], int start, int end, int &compares);

int main()
{
    //Variables and Array
    int array1[] = {1, 3, 2, 7, 5, 4, 8, 7}, array2[] = {1, 3, 2, 7, 5, 4, 8, 7}, m = 0, n = 7;
    int compares1, compares2;
    std::chrono::time_point<std::chrono::system_clock> start, end;

    //Hashed Sort
    start = std::chrono::system_clock::now();
    mergeHash(array1, m, n, compares1);
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << "Hashed Merge Sort Time: " << elapsed_seconds.count() << "s\n";

    //Non-Hashed Sort
    mergeNonHash(array2, m, n, compares2);

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

    //Hashing Algorithm
    for (int i = 0; i < n; i++)
    {
        if arr[i] >
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
     mergeHash(arr,start,mid,compares);
     mergeHash(arr,mid + 1,end,compares);
     merge(arr, start, mid, end);
  }
  compares++;
}

void mergeNonHash(int arr[], int start, int end, int &compares)
{
  if(start < end){
     int mid = start + (end - start)/2;
     mergeNonHash(arr,start,mid,compares);
     mergeNonHash(arr,mid + 1,end,compares);
     merge(arr, start, mid, end);
  }
  compares++;
}
