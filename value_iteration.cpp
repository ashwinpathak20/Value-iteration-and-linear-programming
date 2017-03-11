#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	double p[6][6];
	double x=49;
	int q[6][6]={
				{0,0,0,0,0,0},
				 {0,0,0,0,0,0},
				 {0,1,1,2,-1,0},
				 {0,2,0,0,2,0},
				 {0,1,1,1,2,0},
				 {0,0,0,0,0,0},
				};
	for(int i=0;i<6;i++)
		for (int j=0;j<6;j++)
			p[i][j]=0;
	for(int i=0;i<6;i++)
	{
			p[i][0]=50000;
			p[i][5]=50000;
			p[0][i]=50000;
			p[5][i]=50000;
	}
	p[1][1]=50000;
	p[1][2]=50000;
	p[1][4]=50000;
	p[3][3]=50000;
	double t=-x/20.0;
	double y[6][6];
	double res[6][6];
	p[3][2]=-x;
	p[1][3]=x;
	float delta=0;
		for(int i=0;i<6;i++)
		for (int j=0;j<6;j++){
			res[i][j]=0;
			y[i][j]=0;
		}
	do{
		delta=0;
	for(int i=0;i<6;i++)
		for (int j=0;j<6;j++)
			res[i][j]=y[i][j];
	for(int i=1;i<5;i++)
	{
		for (int j=1;j<5;j++)
		{
			if(q[i][j]!=0)
			{
				int x1=i,x2=i,x3=i,y1=j,y2=j,y3=j;
				

				y[i][j]=1;
				double z1=p[i-1][j],z2=p[i+1][j],z3=p[i][j+1],z4=p[i][j-1];
				if(z1==50000)
					z1=p[i][j];
				if(z2==50000)
					z2=p[i][j];
				if(z3==50000)
					z3=p[i][j];
				if(z4==50000)
					z4=p[i][j];
				double g1=t+0.8*z2+0.1*z3+0.1*z4;
				
				if(z1>=z2){
						g1=t+0.8*z1+0.1*z4+0.1*z3;
						y[i][j]=-1;
					}
				double d=2;
				double g3=t+0.8*z3+0.1*z2+0.1*z1;
				if(z4>=z3){
					g3=t+0.8*z4+0.1*z1+0.1*z2;
					d=-2;
				}
				if(g3>g1){
					y[i][j]=d;
					g1=g3;
				}
				if(delta<abs(g1-p[i][j])){
					delta=abs(g1-p[i][j]);
				}
				p[i][j]=g1;
			}
		}
	}
	cout<<setprecision(3)<<fixed<<'\n';
	for(int i=1;i<5;i++)
	{
		for (int j=1;j<5;j++)
			cout<<res[i][j]<<" | ";
		cout<<"\n\n";
	}
	for(int i=1;i<5;i++)
	{
			for (int j=1;j<5;j++)
			cout<<p[i][j]<<" | ";
		cout<<"\n\n";
	}
	
	}
	while(delta>=x/20);
	return 0;
	
}
