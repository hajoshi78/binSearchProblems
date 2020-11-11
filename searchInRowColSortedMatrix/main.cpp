/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 11, 2020, 11:08 AM
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;



pair<int,int> searchInSortedMatrix(int arr[4][4], int rowSize, int colSize, int key){
    int i=0;
    int j= colSize -1;
    pair<int,int> pos;
    while(i <rowSize && j>= 0){
        if(arr[i][j] == key){
            pos=  make_pair(i,j);
            break;
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    if( i>=rowSize || j<0){
        pos= make_pair(-1,-1);
    }

    return pos;
}

/*
 * 
 */
int main(int argc, char** argv) {
    int arr[4][4]={
                    {10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}
                };


    pair<int,int> pos;
    pos = searchInSortedMatrix(arr,4,4,29);
    cout <<"element 29 is present at pos  [" << pos.first<<"," <<pos.second<<"]"<<endl;
    pos = searchInSortedMatrix(arr,4,4,9);
    cout <<"element 9 is present at pos  [" << pos.first<<"," <<pos.second<<"]"<<endl;
    pos = searchInSortedMatrix(arr,4,4,31);
    cout <<"element 31 is present at pos  [" << pos.first<<"," <<pos.second<<"]"<<endl;
    
    pos = searchInSortedMatrix(arr,4,4,51);
    cout <<"element 51 is present at pos  [" << pos.first<<"," <<pos.second<<"]"<<endl;
    
    pos = searchInSortedMatrix(arr,4,4,50);
    cout <<"element 50 is present at pos  [" << pos.first<<"," <<pos.second<<"]"<<endl;
    
    pos = searchInSortedMatrix(arr,4,4,29);
    cout <<"element 29 is present at pos  [" << pos.first<<"," <<pos.second<<"]"<<endl;
    
    pos = searchInSortedMatrix(arr,4,4,40);
    cout <<"element 40 is present at pos  [" << pos.first<<"," <<pos.second<<"]"<<endl;
    
    pos = searchInSortedMatrix(arr,4,4,10);
    cout <<"element 10 is present at pos  [" << pos.first<<"," <<pos.second<<"]"<<endl;
    return 0;
}

