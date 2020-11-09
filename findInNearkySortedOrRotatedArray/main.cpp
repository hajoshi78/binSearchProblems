/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 8, 2020, 10:20 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


int getRotationCountInSortedArray(int arr[], int sizeOfArray){
    int start = 0;
    int end = sizeOfArray -1;
    int mid = 0;
    int retVal =0;
    int prev=-1;
    int next=-1;
    while(start <= end){
        mid = start + (end-start)/2; // found the smallest element. Return its index.
        if( arr[(mid+sizeOfArray-1)%sizeOfArray] >= arr[mid]  && arr[(mid +1)%sizeOfArray] > arr[mid]){
            return mid;
        }
        else if( arr[mid] < arr[end]){  // Right side is sorted
            end = mid -1;
        }
        else{ //left side is sorted
            start =  mid +1;
        }
    }
    return 0;
}

int binSearch(int arr[], int start, int end, int searchElem){
    int mid = 0;
    int retVal = -1;
    while(start <= end){
        mid = start + (end-start)/2; // 
        if( arr[mid] == searchElem){
            retVal= mid;
            break;
        }
        else if( arr[mid]> searchElem){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return retVal;
}

int findInNearlySortedArray(int arr[], int sizeOfArray, int searchElem){
    int minElementIndex = getRotationCountInSortedArray(arr,sizeOfArray);
    int retVal = -1;
    if( searchElem == arr[minElementIndex]){
        retVal = minElementIndex;
    }
    else{
        int indexIfExistsInFirstHalf = binSearch(arr,0,minElementIndex -1, searchElem);
        int indexIfExistsInsecondHalf = binSearch(arr,minElementIndex ,sizeOfArray -1, searchElem);
        if(indexIfExistsInFirstHalf!= -1){
            retVal= indexIfExistsInFirstHalf;
        }
        if(indexIfExistsInsecondHalf!= -1){
            retVal= indexIfExistsInsecondHalf;
        }
    }
    return retVal;
}
/*
 * 
 */
int main(int argc, char** argv) {
    int arr[]={14,56,78,2,5,7,8,9,12};
    cout <<"7 is at index  " << findInNearlySortedArray(arr,9,7);
    return 0;
}