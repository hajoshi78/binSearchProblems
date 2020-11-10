/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 10, 2020, 11:04 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int getIndexOfMinDiffElemInSortedArray(int arr[], int size, int key){
    int start =0;
    int end = size -1;
    int mid =0;
    int result = -1;
    
    while(start <=end){
        mid = start + (end-start)/2;
        if(arr[mid]== key){
            return mid;
        }
        
        if(key < arr[mid]){
            end = mid -1;
        }
        if(key> arr[mid]){
            start = mid+1;
        }
    }
    //at this point of time start would be greater than end.
    int rightNeigbour;
    int leftNeigbour;
    if(end<0){
        end =0;
    }
    if(start >size -1){
        start = size -1;
    }

    rightNeigbour = arr[start]; 
    leftNeigbour = arr[end];
      
    //In other words we need to find the floor and ceil of the key
    //The one which returns minim diff should be returned
    result = abs(leftNeigbour -key)<= abs(rightNeigbour-key) ? end:start;
    return result;
}
/*
 * 
 */
int main(int argc, char** argv) {

    int arr[] ={2,4,5,6,7,8,9,16,20};
    cout <<"Index of the minimum diff element for 4 is " <<getIndexOfMinDiffElemInSortedArray(arr,9,4)<<endl;
    cout <<"Index of the minimum diff element for 11 is " <<getIndexOfMinDiffElemInSortedArray(arr,9,11)<<endl;
    cout <<"Index of the minimum diff element for 1 is " <<getIndexOfMinDiffElemInSortedArray(arr,9,1)<<endl;
    cout <<"Index of the minimum diff element for 0 is " <<getIndexOfMinDiffElemInSortedArray(arr,9,0)<<endl;
    cout <<"Index of the minimum diff element for 20 is " <<getIndexOfMinDiffElemInSortedArray(arr,9,20)<<endl;
    cout <<"Index of the minimum diff element for 21 is " <<getIndexOfMinDiffElemInSortedArray(arr,9,21)<<endl;
    return 0;
}

