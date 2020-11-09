/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 9, 2020, 9:09 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int binSearchInNearlySortedArray(int arr[], int size , int searchElem){
    int start=0;
    int end = size-1;
    int mid =0;
    int retVal =-1;
    while(start <= end){
        mid = start + (end-start)/2;
        
        //Nearly Sorted Array is one in which ith index element can be at index i or i+1 or i-1
        //Hence while checking the mid element we check for mid+1, mid and mid-1
        if( arr[mid] == searchElem){
            retVal= mid;
            break;
        }
        if( start <= (mid -1)){
            if( arr[mid-1]== searchElem){
                retVal =   mid -1;
                break;
            }
        } 
        if( end>= mid+1){
            if(arr[mid+1]==searchElem){
                retVal =  mid+1;
                break;
            }
        }
        //Since mid-1 is already checked in the previous step, we make end as mid -2
        if( searchElem < arr[mid]){
            end = mid -2;
        }
        //Since mid+1 is already checked in the previous step, we make end as mid +2
        if( searchElem > arr[mid]){
            start = mid+2;
        }
    }
    return retVal;
}
/*
 * 
 */
int main(int argc, char** argv) {
    
    int arr[]={5,10,30,20,40,50,49};
    cout <<" 49 is at index " << binSearchInNearlySortedArray(arr,7,49)<<endl;
    return 0;
}

