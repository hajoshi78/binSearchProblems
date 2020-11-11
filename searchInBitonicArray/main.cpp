/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 11, 2020, 9:48 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int basicBinSearchAscending(int arr[], int start, int end, int searchElem){
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
int basicBinSearchDescending(int arr[], int start, int end, int searchElem){
    int mid = 0;
    int retVal = -1;
    while(start <= end){
        mid = start + (end-start)/2; // 
        if( arr[mid] == searchElem){
            retVal= mid;
            break;
        }
        else if( arr[mid]> searchElem){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
    }
    return retVal;
}
int getIndexOfElemInBitonicArray(int arr[], int size, int key){
    //Step 1 get the peak elem
    //Step2 if peak element is the key  then return the index of the peak elem
    //Step 3 if not,m now we have 2 sorted arrays to left and right of the peak elem
    //Step 4: left side is sorted in the increasing order & right side is sorted in the decreasing order
    //Step 5: perform binary search on either half ( 1st Half ascending binary search, 2nd half descending binary search
    //step 6: return the index
    
    int start =0;
    int end = size -1;
    int mid =0;
    int peakIndex =-1;
    
    while(start<=end){
        mid = start + (end-start)/2;
        if( mid >0 && mid < size -1){
            if(arr[mid]>arr[mid+1] && arr[mid]> arr[mid-1]){
                peakIndex = mid;
                break;
            }
            if( arr[mid]> arr[mid-1]){
                start = mid+1;
            }
            if(arr[mid]> arr[mid+1]){
                end = mid -1;
            }
        }
        else{
            if (mid ==0){
                if( arr[mid]> arr[mid+1]){
                    peakIndex = mid;
                }
                else{
                    peakIndex = mid +1;
                }
            }
            if( mid == size -1){
                if( arr[mid]> arr[size-2]){
                    peakIndex= size-1;
                    break;
                }
                else{
                    peakIndex = size -2;
                    break;
                }
            }
        }
    }
    int searchIndex =-1;
    if(arr[peakIndex]== key){
        searchIndex = peakIndex;
    }
    else{
        searchIndex = basicBinSearchAscending(arr, 0, peakIndex,key);
        if(searchIndex ==-1){
            searchIndex = basicBinSearchDescending(arr,peakIndex+1,size, key);
        }
    }
    return searchIndex;
}
/*
 * 
 */
int main(int argc, char** argv) {
    int arr[] = {1,2,4,6,8,100,50,45,33,32,21,11,10,5,3};
    cout <<"Elem 100 is present at index " << getIndexOfElemInBitonicArray(arr,15,100);
    cout <<"\nElem 2 is present at index " << getIndexOfElemInBitonicArray(arr,15,2);
    cout <<"\nElem 1 is present at index " << getIndexOfElemInBitonicArray(arr,15,1);
    cout <<"\nElem -1 is present at index " << getIndexOfElemInBitonicArray(arr,15,-1);
    cout <<"\nElem 3 is present at index " << getIndexOfElemInBitonicArray(arr,15,3);
    return 0;
}

