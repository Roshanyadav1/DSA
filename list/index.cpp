#include<bits/stdc++.h>
using namespace std;


int main(){
    list<int> ll;
    ll.push_front(11);
    ll.push_front(22);

    ll.push_back(21);
    ll.push_front(3);
    ll.push_back(31);
   cout	<<	"Contents	of	Linked	List:	";
    for	(auto	var	:	ll){
       cout	<<	var	<<	"	";
    }
   cout	<<	std::endl;
    ll.pop_front();
    ll.pop_back();
   cout	<<	"Contents	of	Linked	List:     ";
    for	(auto	var	:	ll){
       cout	<<	var	<<	"	";
    }
    return 0;
}