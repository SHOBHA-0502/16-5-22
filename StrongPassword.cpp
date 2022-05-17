#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    int ans ;
    int ch1=0;
    int ch2=0;
    int ch3=0;
    int ch4=0;
    int ch5=0;
    int ch6=0;
    for(int i =0 ; i<n ;i++){
        if(password[i]>=65 && password[i]<=90){
            if(ch1==0){
                // cout<<"1"<<endl;
                ch1++;
            }
            else{
                continue;
            }
        }
        else if(password[i]>=48 && password[i]<=57){
            if(ch2==0){
                // cout<<"2"<<endl;
                ch2++;
            }
            else{
                continue;
            }
        }
        else if(password[i]>=97 && password[i]<=122){
            if(ch3==0){
                // cout<<"3"<<endl;
                ch3++;
            }
            else{
                continue;
            }
        }
      
        
         else if((password[i]>=32 && password[i]<=47) ||(password[i]>=58 && password[i]<=64)||(password[i]>=91 && password[i]<=98) ||(password[i]>=123 && password[i]<=126)){
            if(ch4==0){
                // cout<<"4"<<endl;
                ch4++;
            }
            else{
                continue;
            }
        }
    }
        int k = 4-ch1-ch2-ch3-ch4;
        // cout<<"k"<<k<<endl;
        if(k+n<6){
            // cout<<"//"<<endl;
            
            int f = 6 -(k+n) ;
            ans =f+k;
        }
        else{
            // cout<<"??";
            ans = k;
        }
        
    
   return ans ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

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
