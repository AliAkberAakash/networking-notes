/*
============================================================================
* Author       : Ali Akber Aakash
* Email        : ali852609@gmail.com
* Problem Name :
* Source       :
* Time Limit   :
============================================================================
*/

#include<bits/stdc++.h>

using namespace std;

//typedef
typedef long double ld;
typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pld;
typedef queue<int> qi;
typedef priority_queue<int> pqi;
typedef priority_queue< int, vector<int> , greater<int> > rpqi;
typedef stack<int> si;
typedef vector <pii> vpii;

//short names
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define pf printf
#define sf scanf
#define um unordered_map

//bitwise
#define BIT(n) (1<<(n))
#define AND(a,b) ((a) & (b))
#define OR(a,b) ((a) | (b))
#define XOR(a,b) ((a) ^ (b))
#define sqr(x) ((x) * (x))

//loop
#define FOR(i,n) for (i = 0; i < n; i++)
#define DFOR(n,i) for (i = n; i >= 0; i--)
#define RFOR(a,b,i) for (i = a; i < = b; i++)
#define DRFOR(a,b,i) for (i = a ; i >= 0; i--)
#define RRFOR(a,b,i,j) for(i=a; i<=b; i+=j);
#define DRRFOR(a,b,i,j) for(i=a; i>=b; i-=j);
#define foreach(it, ar) for ( typeof(ar.begin()) it = ar.begin(); it != ar.end(); it++ )
#define CLR(x) memset(x,0,sizeof(x))
#define SET(ar,n, val) for(int i=0; i<n; i++) ar[i]=val;

//constants
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 10000000
#define MOD 1000000007
#define inf 1<<30

//debug
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define bin(x) cout<<(#x)<<" "<<(x)<<" = "<<bitset<16>(x)<<endl
#define LINE puts("\n---------------------------------------------\n")


int main()
{
    freopen("input(1.2.0).txt","r",stdin);

    int i=0;
    string write_to_file;


    while(getline(cin,write_to_file))
    {
        string filename = "chapter1/qs";
        stringstream ss;
        ss << (i+1);
        string str = ss.str();
        filename+=str;
        filename+=".html";
        FILE* fp = freopen(filename.c_str(), "w", stdout);
        cout<<"<html>\n<head>\n<link href=\"style.css\" rel=\"stylesheet\">\n</head>"<<endl;
        cout<<"<body>"<<endl;
        cout<<"<div class=\"qs\"><h1>"<<write_to_file<<"</h1></div>"<<endl;
        cout<<"<div class=\"ans\"><p>"<<endl<<endl<<"</p></div>"<<endl;
        cout<<"</body>"<<endl;
        cout<<"</html>"<<endl;
        fclose(fp);
        i++;
    }

    return 0;
}
