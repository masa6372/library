/*繰り返し２乗法 (nのp乗 mod m)*/
ll func(ll n,ll m,ll p){
        if(p==0)return 1;
        if(p%2==0){
                ll t=func(n,m,p/2);
                return t*t%m;
        }else{
                return n*func(n,m,p-1)%m;
        }
}
