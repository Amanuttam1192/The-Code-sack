#include<bits/stdc++.h>

using namespace std;

int main(){
    string line;
    string result = "";
    bool check = true;
    while(getline(cin,line)){
        if(line.length()==0){
            break;
        }
        if(line.length()>=1 && line[0] == ' '){
            result += " ";
            check = true;
        }else{
            if(check){
                result += tolower(line[0]);
            }else{
                result += toupper(line[0]);
            }
            check = false;

            for(int i=1;i<line.length();i++){
                result += tolower(line[i]);
            }
        }
    }
    cout<<result<<endl;
    return 0;
}
