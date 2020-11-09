/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 9, 2020, 11:10 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//ciel is the smallest element on the right greater than the given number
int ceilOfAnElementInSortedARrayUsingBinSearch(int arr[], int size, int num){
    int start =0;
    int end = size-1;
    int result = -1;
    int mid =-1;
    while(start<= end){
        mid = start + (end-start)/2;
        if( arr[mid]== num){
            result = arr[mid];
            break;
        }
        
        if( arr[mid]> num){
            result = arr[mid];
            end = mid -1;
        }
        if( arr[mid]<num){
            start = mid+1;
        }
    }
    
    return result;
}

/*
 * 
 */
int main(int argc, char** argv) {
    int arr[] ={1,2,3,4,6,7,9,10};
    cout << "ceil of 2 is " <<ceilOfAnElementInSortedARrayUsingBinSearch(arr,8,2)<<endl;
    cout << "ciel of 5 is " <<ceilOfAnElementInSortedARrayUsingBinSearch(arr,8,5)<<endl;
    cout << "ceil of 11 is " <<ceilOfAnElementInSortedARrayUsingBinSearch(arr,8,11)<<endl;
    cout << "ceil of 0 is " <<ceilOfAnElementInSortedARrayUsingBinSearch(arr,8,0)<<endl;
    return 0;
}

