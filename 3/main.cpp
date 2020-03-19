#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	float sum(0);
	cin>>n;
	if(n==0){
		printf("-\n-\n-\n-\n0\n");
		return 0;
	}
	vector<int> v, c;
	//map<int, int> m;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
		c.push_back(a);
		sum+=(float)a;
	}
	cout<<sum/(float)n<<endl;
	sort(v.begin(), v.end());
	int maks(v[0]), cur(v[0]),cnt(1), frek(1);
	for(int i=1;i<n;i++){
		if(v[i]==cur)
			cnt++;
		else{
			if(cnt> frek){
				maks = cur;
				frek = cnt;
			}
			cur = v[i];
			cnt = 1;
		}
	}
	if(cnt> frek){
		maks = cur;
		frek = cnt;
	}
	/*for(int i=0;i<n;i++){
		m[v[i]]++;
		if(frek < m[v[i]]){
			frek = m[v[i]];
			maks = v[i];
		}
		else if(frek == m[v[i]] && v[i]<maks){
			frek = m[v[i]];
			maks = v[i];
		}
	}*/
	if(n%2==1){
		cout<<v[n/2]<<endl;
	}
	else{
		cout<<((float)v[n/2]+(float)v[n/2-1])/(float)2<<endl;
	}
	cout<<maks<<endl;
	for(int i=0;i<frek;i++){
		c.push_back(maks);
	}
	for(int i=0;i<c.size();i++){
		cout<<c[i];
		if(i!=c.size()-1)
			cout<<' ';
	}
	cout<<endl;
	cout<<c.size()<<endl;
}
