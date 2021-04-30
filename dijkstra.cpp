ll v, e, r; //v:頂点数 e:辺の数 
ll s[514514], t[514514], d[514514]; //s:頂点の始点 t:頂点の終点 d:重み
ll dist[114514];  //dist:重み
vector<pair<int, ll>> G[114514];  //G:グラフ

void dijkstra(int stt) {
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> Q; //降順
    rep(i, v) dist[i] = 1145141919;
    dist[stt] = 0;
    Q.push(make_pair(0, stt));
    while(!Q.empty()) {
       int pos = Q.top().second; Q.pop();
        rep(i, G[pos].size()) {
            ll to = G[pos][i].first;
            ll cost = G[pos][i].second;
            if(dist[to] > dist[pos] + cost) {
                dist[to] = dist[pos] + cost;
                Q.push(make_pair(dist[to], to));
            }
        }
    }
}
