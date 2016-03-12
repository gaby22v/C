#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
	int i,j,n,x;
	FILE *in,*out;
	in=fopen("in.txt","r");
	out=fopen("out.txt","w");
	fscanf(in,"%d",&n);
	fscanf(in,"\n");
	int c[n][n],ni[n];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			fscanf(in,"%d",&c[i][j]);
		fscanf(in,"\n");
	}
	cout<<"Date initiale:"<<endl;
	fprintf(out,"Date initale:\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(c[i][j]>0)
			{
				cout<<i<<"--"<<j<<" cost ="<<c[i][j]<<endl;
				fprintf(out,"%d--%d cost=%d\n",i,j,c[i][j]);
			}
			int nr[n];
			for(i=1;i<=n;i++)
			{
				nr[i]=0;
				for(j=1;j<=n;j++)
					if(c[i][j]!=0)
						nr[i]++;
			}
			int max=ni[1],init;
			cout<<"Nodul de plecare:";cin>>init;
			for(i=1;i<=n;i++)
				if(nr[i]>max)
				{
					init=1;
					max=nr[i];
				}
				cout<<endl<<"Nodul initial:"<<init<<endl;
				fprintf(out,"Nodul initial:%d\n",init);
				ni[1]=init;
				int nrn=1,cf=0;
				cout<<endl<<"Arborele de cost minim:"<<endl;
				fprintf(out,"Arborele de cost minim:\n");
				do
				{
					int min=0,x=0,y=0;
					for(i=1;i<=nrn;i++)
					{
						for(j=1;j<=n;j++)
						{
							if(c[ni[i]][j]!=0 && min==0)
							{
								min=c[ni[i]][j];
								y=j;
								x=i;
								continue;
							}
							if(c[ni[i]][j]!=0 && c[ni[i]][j]<min)
							{
								min=c[ni[i]][j];
								y=j;
								x=i;
								
							}
						}
					}
					if(min>0)
					{
						cout<<ni[x]<<"--"<<y<<" cost="<<c[ni[x]][y]<<endl;
						fprintf(out,"%d--%d cost=%d\n",ni[x],y,c[ni[x]][y]);
						cf+=c[ni[x]][y];
						for(i=1;i<=nrn;i++)
						{
							c[ni[i]][y]=0;
							c[y][ni[i]]=0;
						}
						nrn++;
						ni[nrn]=y;
					}
				}while(nrn<n);
				cout<<"Cost final="<<cf;
				fprintf(out,"cost final=%d",cf);
				fclose(in);
				fclose(out);
				getch();
				return 0;
}