vector<bool>isPrime(MAX,true);

void sieve(){
	for(ll i=2;i<MAX;i++){
		if(isPrime[i]){
			for(ll j=i+i;j<114514;j+=i)isPrime[j]=false;
		}
	}
	isPrime[0]=false;
	isPrime[1]=false;
}
