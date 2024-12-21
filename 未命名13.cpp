#include <bits/stdc++.h>
using namespace std;
int main(){
	long double a=3.14;
	int b,c,d,w=10;
	while(w>8){
	cout<<"请输入你需要的模式"<<"   1.π的倍数。 2.平方表。 3.立方表"<<endl;
	cin>>d;
	if(d==1){
		cout<<"你要从几π开始？"<<endl;
		cin>>b;
		cout<<"你要在几π结束？"<<endl;
		cin>>c;
		for(int i=b;i<=c;i++){
		cout<<i<<"π="<<i*a<<endl;
		}
	}
	else if(d==2){
		cout<<"你要从几的平方开始？"<<endl;
		cin>>b;
		cout<<"你要从几的平方结束？"<<endl;
		cin>>c;
		for(int i=b;i<=c;i++){
		cout<<i<<"*"<<i<<"="<<i*i<<endl;
		}
	}
	else if(d==3){
		cout<<"你要从几的立方开始？"<<endl;
		cin>>b;
		cout<<"你要从几的立方结束？"<<endl;
		cin>>c;
		for(int i=b;i<=c;i++){
		cout<<i<<"*"<<i<<"*"<<i<<"="<<i*i*i<<endl;
		}
	}
	else cout<<"你输入的模式编号不正确"<<endl; 
}	
	return 0;
}
