#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ifstream ifile("input.txt");
	if(ifile) freopen("input.txt","rt",stdin);
	#ifdef ONLINE_JUDGE
		if(ifile) freopen("output.txt","wt",stdout);
	#endif
 
  string a, b, c; cin >> a >> b >> c;
  string d = a + b;
  sort(d.begin(), d.end());
  sort(c.begin(), c.end());
 
  if (c == d) cout << "YES";
  else cout << "NO";
  cout << endl;
 
	return 0;
}