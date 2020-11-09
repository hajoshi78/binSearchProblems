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

int binSearchIterativeInDescendingSortedArray(int arr[], int sizeOfArray, int searchElem){
    int start = 0;
    int end = sizeOfArray -1;
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
/*
 * 
 */
int main(int argc, char** argv) {
    int arr[]={204,105,78,58,49,32,24,16,8};
    cout <<"204 exists at Index " << binSearchIterativeInDescendingSortedArray(arr,9,204);
    return 0;
}

