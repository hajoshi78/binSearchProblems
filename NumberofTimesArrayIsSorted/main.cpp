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
/*
 * 
 */
int main(int argc, char** argv) {
    int arr[]={78,2,5,7,8,9,12,14,56};
    cout <<"Number of times this array is rotated is " << getRotationCountInSortedArray(arr,9);
    return 0;
}


