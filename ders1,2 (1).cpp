#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *head;
void veriekle()
{	int veri;
	printf("sayi giriniz:");
	scanf("%d",&veri);
	if(head==NULL)
	{
	head=(struct node *)malloc(sizeof(struct node ));	
	head->data=veri;
	head->next=NULL;
}
	else{
		struct node *temp=head;
		struct node *temp1=(struct node *)malloc(sizeof(struct node ));
		temp1->data=veri;
		temp1->next=NULL;
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=temp1;
	}

	
}
void listele()
{
	struct node *temp=head;
		while(temp!=NULL)
		{
			printf("\n%d",temp->data);
			temp=temp->next;
		}
}

void elemansayisi()
{	int sayac=0;
	if(head==NULL)
		printf("hic eleman yok");
	else
	{
		struct node *temp=head;
		while(temp!=NULL)
			{
				sayac++;
				temp=temp->next;
			}
			printf("\n%d eleman vardir.",sayac);
	}	
}
void sil()
{	int key;
	printf("\nsileceginiz elemani girin:");
	scanf("%d",&key);
	if(head->data==key)
		{
		struct node *temp=head;
		head=head->next;
		free(temp);
		}
	else
		{
			struct node *temp=head;
			struct node *temp2;//sileceðim düðümün adresi.
			while(temp->next->data!=key)
				{
					temp=temp->next;
					
				}
				temp2=temp->next;
				temp->next=temp2->next;
				free(temp2);
				
		}}
main(){
veriekle();
veriekle();
veriekle();
veriekle();
veriekle();
listele();
elemansayisi();
sil();
listele();

}
