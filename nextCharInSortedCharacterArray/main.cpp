/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 9, 2020, 11:55 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//char[] ={'b','c','f','g','h','i','k','m'}
//Next of f = g
//Next of l = m
//next of n = # -> not found

char getNextCharOfKeyUsingBinSearch( char arr[], int size, char key){
    int start =0;
    int mid =0;
    int end = size-1;
    char result = '#';
    
    while(start<= end){
        mid = start + (end-start)/2;
        if(arr[mid]== key){
            start = mid +1;
        }
        
        if(key < arr[mid]){
            result = arr[mid];
            end = mid -1;
        }
        if( key > arr[mid]){
            start = mid +1;
        }
    }
    return result;
}

/*
 * 
 */
int main(int argc, char** argv) {
    
    char arr[] ={'b','c','f','g','h','i','k','m'};
    cout <<"next Char of h is " << getNextCharOfKeyUsingBinSearch(arr,8,'h')<<endl;
    cout <<"next Char of m is " << getNextCharOfKeyUsingBinSearch(arr,8,'m')<<endl;
    cout <<"next Char of l is " << getNextCharOfKeyUsingBinSearch(arr,8,'l')<<endl;
    cout <<"next Char of b is " << getNextCharOfKeyUsingBinSearch(arr,8,'b')<<endl;
    
    
    return 0;
}

