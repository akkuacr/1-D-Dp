//problem link:https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/ZCO14004

//again this is the follow up problem of supw jisme woh lgatar 3 match ni khel skta so usse jyada se jyada match khel k score lane honge toh optimize toh yrh h ki total m se minimu 3 ko hta ke khele
//solution:
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
 int s=0;
 for(int i=0;i<n;i++)
 {
    int x;
    cin>>x;
    arr.push_back(x);
    s+=x;
 }

 vector<int>dp(n,0);
 dp[0]=arr[0];
 dp[1]=arr[1];
 dp[2]=arr[2];

 for(int i=3;i<n;i++)
 {
    dp[i]=arr[i]+(min(dp[i-1],min(dp[i-2],dp[i-3])));

 }

 cout<<s-min(dp[n-3],min(dp[n-2],dp[n-1]))<<endl;




 
      return 0;
  }
