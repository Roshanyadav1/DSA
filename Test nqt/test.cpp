// // Add element to an array in an specific position;

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n ;
//     cout << "Enter the total number of element in an array : " << endl;
//     cin >> n;

//     vector<int> v1 , v2;
//     while(n--){
//         int temp;
//         cin >> temp;
//         v1.push_back(temp);
//     }

//     cout << "Enter the index number that you want to enter your element" << endl;
//     int indexed , num ;
//     cin >> indexed;

//     cout << "Enter the digit you want to enter "<<endl;
//     cin >> num;

//     for(int i = 0 ; i < v1.size() ; i++){
//         if(i == indexed){
//             v2.push_back(num);
//         }
//         v2.push_back(v1.at(i));
//     }

//     for(int x : v2){
//         cout << x << endl;
//     }
//     return 0;
// }


// average number of an array 
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n , sum = 0 , totalElements ; 
//     float average;
//     cout << "Enter total number of elements :" << endl;
//     cin >> n ;
//     vector<int> v1;
//     totalElements = n;

//     while(n--){
//         int temp;
//         cin >> temp;
//         v1.push_back(temp);
//         sum = sum+temp;
//     }

//     average = sum/totalElements;

//     cout << "The average element is : " << average << endl;
//     return 0;
// }


// circular rotation of an array 
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n , circulation , size ;
//     vector<int> v1;

//     cout <<"Enter the total number of elemets : " << endl;
//     cin >> n;
//     size = n;

//     while(n--){
//         int temp ;
//         cin >> temp;
//         v1.push_back(temp);
//     }

//     cout << "Enter the number of rotation you want to do : " << endl;
//     cin >> circulation;
 

//     cout << "After circulation element is : " << endl;
//     for(int i = 0; i < size; i++){
//         cout << "Element at " << i << " : " << v1.at(circulation%size) << endl;
//         circulation++;
//     }

//     return 0;
// }


// find non - repeating elements
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n , size = 0; 
//     cout << "Enter the number of element you want to enter : " << endl;
//     cin >> n ;
//     size = 0;
//     vector<int> v1;
//     while(n--){
//         int temp;
//         cin >> temp;
//         v1.push_back(temp);
//     }

//     set<int> s1;
//     for(int x :  v1){
//         s1.insert(x);
//     }
 
//     cout << "After the element is like over :: -----------------" << endl;
//     for(int x : s1){
//         cout << x << endl;
//     }

//     return 0;
// }

// find the repeating elements
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     unordered_set<int> repeating_ele;
//     int totalNumber , size;
//     vector<int> v1;

//     cout << "Enter the total number of elements : " << endl;
//     cin >> totalNumber;

//     while(totalNumber--){
//       int temp ; 
//       cin >> temp;
//       v1.push_back(temp);
//     }

//     sort(v1.begin() , v1.end());

//     for(int i = 0 ; i < v1.size() - 1; i++){
//         if(v1.at(i) == v1.at(i+1)){
//             repeating_ele.insert(v1.at(i));
//         }
//     }

//     cout << "After calculation : " << endl;
//     for(int x : repeating_ele){
//         cout << x << endl;
//     }
//     return 0;
// }



// Frequency of an array 
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
    int n ;
    cout << "Enter the total number of elements : " << endl;
    cin >> n ;
    vector<int> v1;

    while(n--){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }

    map<int,int> m1;
}