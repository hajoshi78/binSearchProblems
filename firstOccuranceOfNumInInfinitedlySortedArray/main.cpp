/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 10, 2020, 9:22 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int getFirstOccOfElemInInfSrtdArr( int arr[], int elem){
    int start =0;
    int end =1;
    int mid =0;
    int result =-1;
    while(elem> arr[end]){
        start = end;
        end = 2*end;
    }
    //Now lets search for the first Occurance
    
    while(start<=end){
        mid = start + (end- start)/2;
        if(arr[mid]==elem){
            result = mid;
            end = mid -1;
        }
        if(elem > arr[mid]){
            start = mid+1;
        }
        if(elem < arr[mid]){
            end = mid -1;
        }
    }
    return result; 
}

/*
 * 
 */
int main(int argc, char** argv) {
    int arr[]={0,0,0,0,0,1,2,2,2,2,2,2,4,4,4,4,4,4,4,4,4,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7};
    cout << "Index of first occurance of 1 is "<<getFirstOccOfElemInInfSrtdArr(arr, 1)<<endl;
    cout << "Index of first occurance of 2 is "<<getFirstOccOfElemInInfSrtdArr(arr, 2)<<endl;
    cout << "Index of first occurance of 3 is "<<getFirstOccOfElemInInfSrtdArr(arr, 3)<<endl;
    cout << "Index of first occurance of -1 is "<<getFirstOccOfElemInInfSrtdArr(arr, -1)<<endl;
    cout << "Index of first occurance of 7 is "<<getFirstOccOfElemInInfSrtdArr(arr, 7)<<endl;
    cout << "Index of first occurance of 8 is "<<getFirstOccOfElemInInfSrtdArr(arr, 8)<<endl;
    return 0;
}

