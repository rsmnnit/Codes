			/* Radheshyam Lodhi
			radheshyamlodhi64@gmail.com
			CSE-MNNIT Allahabad */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sfi(i) scanf("%d",&i)
#define sfid(a,b) scanf("%d%d",&a,&b)
#define sfl(i) scanf("%lld",&i)
#define sfld(a,b) scanf("%lld%lld",&a,&b)
#define pfl(a) printf("%lld\n",a)
#define pfi(a) printf("%d\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define pf printf
#define sf scanf
#define gc() getchar_unlocked()
#define mod (1e9+7)

int main()
{
 string s;
 char p;
 ll i,j,k,an=0;
 cin>>s;
 stack<char>st;
 p=s[0];
 f(i,0,s.length()){
 st.push(s[i]);
 }


 while(1){
 	ll ch=0;
 	stack<char>s1;
 	p=st.top();
 	st.pop();
 	if(st.top()=='a' && p=='b'){
 		an++;
 		st.pop();
 		s1.push('a');
 		s1.push('b');
 		s1.push('b');
 		ch++;
 	}
 	else {s1.push(p);
 	s1.push(st.top());
 	st.pop();}
 	if(!ch)
 		break;
 	while(!st.empty())
 	st.pop();
 	while(!s1.empty()){
 		st.push(s1.top());
 		s1.pop();

 	}

 }
 pfl(an);
return 0;
}
