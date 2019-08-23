#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
int n;
cin>>n;
map<int,int,greater<int> > m;

for(int i=0;i<n;i++)
{
int a;
cin>>a;
if(m.find(a)==m.end())
m[a]=1;
else m[a]++;
}
int num=0;
int total=0;
bool check=false;
for(auto it=m.begin();it!=m.end();++it)
{
if(check){
if(num>=it->second){
continue;
}else{
total+=(it->second-num)*(it->first);
num=it->second;
}
}
else{
total+=(it->second)*(it->first);
num=it->second;
check=true;
}

}
cout<<total<<endl;

}