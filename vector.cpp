#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int arr[10]={1,3,5,7,9,2,7,6,8,0};
    vector<int> vect(arr,arr+10);
    sort(vect.begin(),vect.end());
    reverse(vect.begin(),vect.end());
    //max
    cout<<max_element(vect.begin(),vect.end())<<endl;
    //similar for min
    //sum of elements
    cout<<accumalate(vect.begin(),vect.end(),0)<<endl;
    //count the frequency of number
    cout<<count(vect.begin(),vect.end(),7)<<endl;
    //find the element
    find(vect.begin(), vect.end(),5) != vect.end()?
                         cout << "\nElement found":
                     cout << "\nElement not found";
    //index of number lower than 6                 
    lower_bound(vect.begin(), vect.end(), 6);
    //index of number greater than 6
    upper_bound(vect.begin(), vect.end(), 6);
    vect.erase(4);//erase 4th index number
    vect.erase(unique(vect.begin(),vect.end()),vect,end());
}
