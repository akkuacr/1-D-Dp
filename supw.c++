//Question link: https://www.codechef.com/ZCOPRAC/problems/ZCO14002


//idea :he can choose minimum of every three duties and ans can be one of the summation upto last three duties

//dp state : dp[i]=arr[i]+minimum of(dp[n-1],dp[n-2],dp[n-3])

//code:-



 #include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;
  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  
 
 int n;
 cin>>n;
 vector<int>arr;
 for(int i=0;i<n;i++)
 {
    int x;
    cin>>x;
    arr.push_back(x);
 }

 vector<int>dp(n,0);
 dp[0]=arr[0];
 dp[1]=arr[1];
 dp[2]=arr[2];

 for(int i=3;i<n;i++)
 {
    dp[i]=arr[i]+(min(dp[i-1],min(dp[i-2],dp[i-3])));

 }

 cout<<min(dp[n-3],min(dp[n-2],dp[n-1]))<<endl;




 
      return 0;
  }
