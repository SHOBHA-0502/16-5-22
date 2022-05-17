#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 */

string appendAndDelete(string s, string t, int k) {
 int n = s.size();
 int m = t.size();
 int f=0;
 string ans ;
 if(n<m){
     f+=n-m;
     if(f%2==0){
         return "Yes";
     }
     return "No";
 }
 for(int i =0 ; i<max(m,n);i++){
     if(s[i]!=t[i]){
        //  cout<<"yes"<<"i"<<endl;
         f+=n-i;
         if(t[i]!='\0'){ 
         f+=m-i;
         }
         break;
     }
 }
  cout<<f<<"//"<<endl;
 if(f>k){
     
    ans = "No"; 
 }
 else{
     ans = "Yes";
 }
 return ans ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
