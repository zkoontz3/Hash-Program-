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
void hashSort(int arr[], int n);

int main()
{
    //Variables and Array
    int array1[] = {1, 3, 2, 7, 5, 4, 8, 7}, array2[] = {1, 3, 2, 7, 5, 4, 8, 7}, m = 0, n = 7;
    int compares1, compares2;
    std::chrono::time_point<std::chrono::system_clock> start, end, start2, end2;

    //Hashed Sort
    start = std::chrono::system_clock::now();
    mergeHash(array1, m, n, compares1);
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "Hashed Merge Sort Time: " << elapsed_seconds.count() << "s\n";

    //Non-Hashed Sort
    start2 = std::chrono::system_clock::now();
    mergeNonHash(array2, m, n, compares2);
    end2 = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds2 = end2 - start2;
    std::cout << "Non-Hashed Merge Sort Time: " << elapsed_seconds2.count() << "s\n";

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

void hashSort(int arr[], int n)
{
    int max = *max_element(arr, arr + n);
    int min = abs(*min_element(arr, arr + n));
    
    int posNum[max + 1] = { 0 };
    int negNum[min + 1] = { 0 };
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            posNum[arr[i]] += 1;
        else
            negNum[abs(arr[i])] += 1;
    }
    
    for (int i = min; i > 0; i--)
    {
        if (negNum[i])
        {
            for (int j = 0; j < negNum[i]; j++)
            {
                cout << (-1) * i << " ";
            }
        }
    }
    
    for (int i = 0; i <= max; i++)
    {
        if (posNum[i])
        {
            for (int j = 0; j < posNum[i]; j++)
            {
                cout << i << " ";
            }
        }
    }
}         
