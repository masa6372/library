//ax+by=gcd(a,b)
template <class T>
T extgcd(T a,T b,T &x,T &y){
	T d=a;
	if(b!=0){
		d=extgcd(b,a%b,y,x);
		y-=(a/b)*x;
	}else{
		x=1;
		y=0;
	}
	return d;
}

//usual gcd
ll gcd(ll x,ll y){return y?gcd(y,x%y):x;}
//lcm
ll lcm(ll a,ll b){return a*b/gcd(a, b);}
