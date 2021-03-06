const long long MAX = 200000;
const long long MOD = 1000000007
long long fac[MAX],finv[MAX],inv[MAX];

//テーブルを作る前処理
template<class T>
T com(){
	fac[0]=fac[1]=1;
	finv[0]=finv[1]=1;
	inv[1]=1;
	for(int i=2;i<MAX;i++){
		fac[i]=fac[i-1]*i%MOD;
		inv[i]=MOD-inv[MOD%i]*(MOD/i)%MOD;
		finv[i]=finv[i-1]*inv[i]%MOD;
	}
}

//二項計算 nCk
template<class T>
T com(T n, T k){
	if(n<k)return 0;
	if(n<0||k<0)return 0;
	return fac[n]*(finv[k]*finv[n-k]%MOD)%MOD;
}
