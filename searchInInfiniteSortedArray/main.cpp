/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 10, 2020, 8:50 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

 int getIndexOfElement( int arr[],  int start,  int end,  int elem){
     int result=-1;
     int mid =0;
    while(1){
        if( elem == arr[start]){
            return start;
        }
        else if(elem == arr[end]){
            return end;
        }
        else if( elem > arr[start] && elem >arr[end] ){
            start = end;
            end = 2*end;
        }
        else{
            if( elem > arr[start] && elem <arr[end]){
                break;
            }
        }
    }
     while( start <=end){
        mid = start + ( end-start)/2;
        if( arr[mid]== elem){
            result = mid;
            break;
        }
        if( elem > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return result;
}

/*
 * 
 */
int main(int argc, char** argv) {
    int arr[]={1,2,3,4,5,7,8,9,10,11,12,13,14,15,16,18,19,21,25,30,35,134,234,345,345};
    cout << "Index of 19 is "<<getIndexOfElement(arr, 0,1,19)<<endl;
    cout << "Index of 1 is "<<getIndexOfElement(arr, 0,1,1)<<endl;
    cout << "Index of 3 is "<<getIndexOfElement(arr, 0,1,3)<<endl;
    cout << "Index of 6 is "<<getIndexOfElement(arr, 0,1,6)<<endl;
   
    return 0;
}

