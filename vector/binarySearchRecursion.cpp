#include <bits/stdc++.h> 

int binarySearch (std::vector<int> & v1 , int key , int left , int right){
    int mid = (left + right ) / 2;
    if(v1[mid] == key){
        return mid;
    }
    if(v1[mid] > key){
        // if mid element is greater than key 
        binarySearch(v1 ,key , 0,mid);
    }
    if(v1[mid] < key){
        // if mid element is less than the key
        binarySearch(v1 ,key , mid , right);
    }
}

int main(){
    std::vector<int> v1;
    int size ;

    std::cout << "Enter the size of the vector :" << std::endl;
    std::cin >> size;

    // stored the value in vector
    for(int i = 0 ; i < size ; i++){
        int temp ;
        std::cin >> temp ;
        v1.push_back(temp);
    }

    int key = 5 ;
    sort(v1.begin(),v1.end());
    int founded = binarySearch(v1 ,key , 0,size);
    if(founded){
        std::cout<<"Element found in : " << founded << std::endl;
    }else{
        std::cout<<"Not found ! " << std::endl;
    }

    return 0;
    
}