/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 9, 2020, 9:29 PM
 */

#include <cstdlib>
#include <iostream>
//arr[] = 1,2,3,4,8,5,7,10
// floor of 5 if 5 is present is 5
// Floor of 5 if 5 is not present will be 4 
//i.e greatest Element smaller than 5
using namespace std;

int floorOfANumberInSortedArrayUsingBinSearch(int arr[], int size, int num){
    int start = 0;
    int end = size -1;
    int mid = 0;
    int retVal =-1;
    int result = -1;
    while(start <= end){
        mid = start + ( end - start)/2;
        if( arr[mid] == num){
            result = mid;
            break;
        }
        
        if( num < arr[mid]){  
            end = mid -1;
        }
        //while moving to right side store the result. IT will get updated....
        if( num > arr[mid]){ 
            result = arr[mid];
            start = mid + 1;
        }
    }
    return result;
}
/*
 * 
 */
int main(int argc, char** argv) {
    int arr[] ={1,2,3,4,6,7,9,10};
    cout << "Floor of 2 is " <<floorOfANumberInSortedArrayUsingBinSearch(arr,8,2)<<endl;
    cout << "Floor of 5 is " <<floorOfANumberInSortedArrayUsingBinSearch(arr,8,5)<<endl;
    cout << "Floor of 11 is " <<floorOfANumberInSortedArrayUsingBinSearch(arr,8,11)<<endl;
    cout << "Floor of 0 is " <<floorOfANumberInSortedArrayUsingBinSearch(arr,8,0)<<endl;
    return 0;
}

