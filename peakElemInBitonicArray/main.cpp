/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 11, 2020, 9:01 AM
 */

#include <cstdlib>
#include <iostream>


using namespace std;

int getPeakElemInBitonicArray(int arr[], int size){
    int start = 0;
    int end = size -1;
    int mid =0;
    
    
    while(start <=end){
        mid = start + ( end - start)/2;
        
        if( mid >0 && mid <size -1){
            if( arr[mid]> arr[mid-1]  && arr[mid]> arr[mid+1]){
                return mid;
            }
            if( arr[mid-1]> arr[mid]){
                end = mid -1;
            }
            if( arr[mid+1]> arr[mid]){
                start = mid +1;
            }
        }
        if( mid ==0){
            if( arr[mid+1]> arr[mid]){
                return mid+1;
            }
            else{
                return mid;
            }
        }
        if( mid == size -1){
            if( arr[mid]>arr[size -2]){
                return size-1;
            }
            else{
                return size -2;
            }
        }
    }
}

/*
 * 
 */
int main(int argc, char** argv) {

    int arr[]={1,2,3,4,5,10,15,20,17,13,12,6};
    cout << "peak element in the bitonic array  is " << arr[getPeakElemInBitonicArray(arr,12)];
    return 0;
}

