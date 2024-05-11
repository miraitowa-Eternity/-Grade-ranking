#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    int n,value;
    cin>>n;
    unordered_map<string,int> student;
    string name;
    for(int i=0;i<n;i++){
        cin>>name>>value;
        student[name]=value;
    }
  	vector<pair<string,int>> stu(student.begin(),student.end());
  	sort(stu.begin(),stu.end(),[](const pair<string,int>&a,const pair<string,int>&b){
  		return a.second>b.second;//自定义函数，降序排序 
	  });
  	for(const auto& index:stu)
  		cout<<index.first<<" "<<index.second<<endl;
  	return 0;
}
