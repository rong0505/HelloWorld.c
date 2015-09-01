#include <stdio.h>
#define MAX 100

void InitQueue(int *,int *);
int  EnQueue(int q[],int x,int *,int *);
int  DelQueue(int q[],int *,int *);
int main()
{
	int q[MAX],front,rear;
	int x,i,m,n,result;
	InitQueue(&front,&rear);
	printf("输入进队数据的个数:");
	scanf("%d",&m);
	printf("请输入数据：");
	for(i=0;i<m;i++)
	{
		scanf("%d",&x);
		result=EnQueue(q,x,&front,&rear);
		if(result==-1)
		{
			return -1;
		}
	}
	printf("请输入出队数目：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		result=DelQueue(q,&front,&rear);
		if(result==-1)
			return -1;
		printf("%d ",result);
	}
	return 0;
}

void InitQueue(int *f,int *r)
{
	*f=0;
	*r=0;
}

int EnQueue(int q[],int x,int *f,int *r)
{
	*r=(*r+1)%MAX;
	if(*r==*f)
	{
		printf("队列已满\n");
		return -1;
	}
	else
	{
		q[*r]=x;
	}
	return 0;
}

int DelQueue(int q[],int *f,int *r)
{
	*f=*f+1;
	if(*f==*r)
	{
		printf("队列已空\n");
		return -1;
	}
	else
	{
		return q[*f];
	}
}
