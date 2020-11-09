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

int binSearchIterative(int arr[], int sizeOfArray, int searchElem){
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
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return retVal;
}
/*
 * 
 */
int main(int argc, char** argv) {
    int arr[]={2,5,7,8,9,12,14,56,78};
    cout <<"7 exists at Index " << binSearchIterative(arr,9,7);
    return 0;
}

