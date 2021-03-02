#include<iostream>
#include<string>

using namespace std;
string getString(int num, string s){
    int index = 0;
    int direction = 1;
    string arr[50];
    string str = "";
    for(int i=0; i<num; i++){
        arr[i] = "";
    }
    for(int j=0; j<s.length(); j++){
        arr[index]+=s[j];
        if (index == num-1){
            direction = -1;
        }
        if (index == 0){
            direction = 1;
        }
        index += direction;        
    }
    for(int k=0; k<num; k++){
        str += arr[k];
    }
    return str;
}
int main(){
    int n;
    string str;
    cin>>str;
    cin>>n;
    cout<<getString(n, str);  
    return 0;
}
