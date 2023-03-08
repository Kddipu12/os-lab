#include<stdio.h> 
#include<stdlib.h> 
struct sp
{
int pid;
int btime;
int wtime;
int ttime;
}
p[10];
int main()
{
int i,j,n;
 int towtwtime=0,totttime=0;
 struct sp tmp;
printf("\n sjf schaduling ..\n"); 
printf("enter the no of process "); 
scanf("%d",&n); 
for(i=0;i<n;i++)
{
printf("enter process id :P"); 
scanf("%d",&p[i].pid); 
printf("enter burst time ");
scanf("%d",&p[i].btime); 

}
p[0].wtime=0;
p[0].ttime=p[0].btime;

 
for(i=0;i<n-1;i++){

for(j=i+1;j<n;j++)
{
if(p[i].btime>p[j].btime)
{
tmp=p[i];
p[i]=p[j];
p[j]=tmp;
}}}

for(i=0;i<n;i++)
{
    p[i].wtime=p[i-1].wtime+p[i-1].btime;
    p[i].ttime=p[i].wtime+p[i].btime;
    totttime+=p[i].ttime;
    towtwtime+=p[i].wtime;



}

printf("\n total waiting time :%d\n", towtwtime );
printf("\n average waiting time :%f\n",(float)towtwtime/n); 
printf("\n total turn around time :%d",totttime);
printf("\n average turn around time: :%f",(float)totttime/n); }
