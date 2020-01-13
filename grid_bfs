//sx,syはスタート地点の座標。gx,gyはゴール地点の座標。#は通れない。
//スタートからゴールまでの最短距離を求める関数

int bfs(){
	queue<P>que;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++)d[i][j]=INF;
	}
	que.push(P(sx,sy));
	d[sx][sy]=0;
	while(que.size()){
		P p=que.front();que.pop();
		if(p.first==gx&&p.second==gy)break;
		for(int i=0;i<4;i++){
			int nx=p.first+dx[i],ny=p.second+dy[i];
			if(0<=nx&&nx<H&&0<=ny&&ny<W&&s[nx][ny]!='#'&&d[nx][ny]==INF){
				que.push(P(nx,ny));
				d[nx][ny]=d[p.first][p.second]+1;
			}
		}
	}
	return d[gx][gy];
}
