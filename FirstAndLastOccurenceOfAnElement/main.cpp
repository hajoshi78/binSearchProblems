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


//DOnt Stop after finding1st occurance. Continue wth the binary search...
//to get the left most index of the element
int firstOccuranceInSortedArray(int arr[], int sizeOfArray, int searchElem){
    int start = 0;
    int end = sizeOfArray -1;
    int mid = 0;
    int retVal = -1;
    int firstOccurance = -1;
    while(start <= end){
        mid = start + (end-start)/2; // 
        if( arr[mid] == searchElem){
            firstOccurance= mid;
            end = mid -1;
        }
        else if( arr[mid]> searchElem){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return firstOccurance;
}

int lastOccuranceInSortedArray(int arr[], int sizeOfArray, int searchElem){
    int start = 0;
    int end = sizeOfArray -1;
    int mid = 0;
    int retVal = -1;
    int lastOccurance = -1;
    while(start <= end){
        mid = start + (end-start)/2; 
        if( arr[mid] == searchElem){
            lastOccurance= mid;
            start = mid +1;
        }
        else if( arr[mid]> searchElem){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return lastOccurance;
}
/*
 * 
 */
int main(int argc, char** argv) {
    int arr[]={2,7,7,7,7,12,14,56,78};
    int firstOcc=-1;
    int lastOcc =-1;
    firstOcc=firstOccuranceInSortedArray(arr,9,33);
    lastOcc=lastOccuranceInSortedArray(arr,9,33);
    
    cout <<"\nFirst Coccurance of 7 is " << firstOcc;
    cout <<"\nLast occurance for 7 is " << lastOcc;
    if(firstOcc!=-1){
        cout <<"\nCount of number of 7s in the array = " << lastOcc-firstOcc +1;
    }
    else {
        cout <<"\nCount of number of 7s in the array = 0";
    }
    return 0;
}

