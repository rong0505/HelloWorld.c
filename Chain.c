#include <stdio.h>
#include <stdlib.h>
struct chain
{
	int num;
	struct chain *next;
};

struct chain *create();
//struct chain *inlink(struct chain *,int ,int);
//struct chain *delink(struct chain *,int);
int main()
{
	struct chain *p,*head;
	int a,b;
	p=create();
	head=p;
	printf("输出原始链表：");
	while(p)
	{
		printf("%d ",p->num);
		p=p->next;
	}
	printf("\n");
	printf("请输入新插入的表元数据位于哪个数据之前:");
	scanf("%d",&a);
	printf("请输入要插入的表元数据：");
	scanf("%d",&b);
//	p=inlink(head,a,b);
	printf("输出插入节点后的链表：");
//	while(p)
//	{
//		printf("%d ",p->num);
//		p=p->next;
//	}
	printf("\n");
	printf("请输入要删除表元的数据：");
	scanf("%d",&a);
//	p=delink(head,a);
	printf("请输出删除节点后的链表：");
//	while(p)
//	{
//		printf("%d",p->num);
//		p=p->next;
//	}

	printf("\n");
	return 0;
}

struct chain *create()
{
	struct chain *head,*tail,*p;
	int x;
	head=tail=NULL;
	printf("请输入数据：");
	while(scanf("%d",&x)>0)
	{
		p=(struct chain *)malloc(sizeof(struct chain));
		p->num=x;
		p->next=NULL;
		if(head==NULL)
			head=tail=p;
		else
			tail=tail->next;
		tail->next=p;
	}
	return head;
}

/*struct chain *inlink(struct chain *head,int a,int b)
{
	struct chain *s,*p,*q;
	s=(struct chain *)malloc(sizeof(struct chain));
	s->num=b;
	if(head==NULL)
	{
		head=s;
		s->next=NULL;
	}
	if(head->num==a)
	{
		s->next=head;
		head=s;
	}
	else
	{
		p=head;
		while((p->num!=a)&&(p->next!=NULL))
		{
			q=p;
			p=p->next;
		}
		if(p->num==a)
		{
			q->next=s;
			s->next=p;
		}
		else
		{
			p->next=s;
			s->next=NULL;
		}
	}
	return head;
}

struct chain *delink(struct chain *head,int a)
{
	struct chain 	*p,*q;
	if(head==NULL)
	{
		printf("空链表！");
	}
	else if(head->num==a)
	{
		p=head;
		head=head->next;
	}
	else
	{
		p=head;
		while((p->num!=a)&&(p->next!=NULL))
		{
			q=p;
			p=p->next;
		}
		if(p->num!=a)
		{
			printf("链表中无此节点！");
		}
		else
		{
			q->next=p->next;
			free(p);
		}
	}
	return head;
}*/
