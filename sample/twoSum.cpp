#include <bits/stdc++.h>


int main(){
    std::vector<int> v1 = { 1 , 2 , 3 , 4 , 5 , 6};
    std::map<int , int> m1;

    // we have to find the sum of two number which is equal to two digit of the v1 vector
    int sum = 7 ;

    for(int i = 0 ; i < v1.size() ; i++){
        int difference = sum - v1[i];
        
        auto it = m1.find(difference);

        if(it != m1.end()){
            std::cout<< "Element found at indexes : " << i  << it->second ;
            break;
        }else{
            // m1.insert(v1[i] , i);
            m1.insert(std::make_pair(v1[i], i));
        }
    }
    return 0;
}