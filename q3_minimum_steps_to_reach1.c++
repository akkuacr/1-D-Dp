/*
Problem Statement:
Given a positive integer ’n’, find and return the minimum number of steps that ’n’ has to take to get reduced to 1. You can perform any one of the following 3 steps:

1.) Subtract 1 from it. (n = n — ­1) ,

2.) If n is divisible by 2, divide by 2.( if n % 2 == 0, then n = n / 2 ) ,

3.) If n is divisible by 3, divide by 3. (if n % 3 == 0, then n = n / 3 ).

Input format :
The first and the only line of input contains an integer value, ‘n’.

Output format :
Print the minimum number of steps.

Sample Input 1 :

4
Sample Output 1 :

2
*/
/*******************************************************************************/
//ides
idea is pretty clear that if(i%2==0)check for dp[i/2],if(i%3==0) check for dp[i/3]  ,and check for dp[i-1]

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
  vector<int>dp(n+1,INT_MAX);
  dp[0]=0;
  dp[1]=1;
  dp[2]=1;
  dp[3]=1;
  for(int i=4;i<=n;i++)
  {
      dp[i]=dp[i-1]+1;
      if(i%2==0)
      {
        dp[i]=min(dp[i],dp[i/2]+1);

      }

      if(i%3==0)
      {
        dp[i]=min(dp[i],dp[i/3]+1);
      }
  }

  cout<<dp[n]<<endl;





 
      return 0;
  }


