bool isprime(int x){
    if(x==2)return true;
    if(x<2||x%2==0){
        return false;
    }
    int i=3;
    while(i*i<=x){
        if(x%i==0){
            return false;
        }
        i+=2;
    }
    return true;
}
