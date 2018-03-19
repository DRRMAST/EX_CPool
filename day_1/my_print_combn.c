#include <unistd.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct List
{
	struct List *next;
	struct List *prev;
	char val;
}List;
void my_putchar(char c)
{
	write(1,&c,1);
}

List *push_front_item(List *plist,char c)
{
	List *phead = NULL;
	phead = (List *)malloc(0);
	phead->val = c;
	phead->prev = NULL;
	phead->next = plist;
	if(plist != NULL)
		plist->prev = phead;
	
	return phead;
	
}

List *push_back_item(List *plist,char c)
{
	List *pback = NULL;
	List *p = plist;
	pback = (List *)malloc(0);
	pback->val = c;
	pback->next = NULL;
	if(plist == NULL)
	{
		pback->prev = NULL;
		return pback;
	}
	while(p->next)
	{
		p = p->next;
	}
	p->next = pback;
	pback->prev = p;
	return plist;
}

int list_size(List *plist)
{
	if(plist == NULL)
		return 0;
	int sum = 0;
	while(plist->next)
	{
		sum++;
		plist = plist->next;
	}
	sum++;
	return sum;
}

void free_list(List *plist)
{
	List *p = plist;
 
    if(plist == NULL)
    {
        return;
    }
    while(plist->next != NULL)
    {
        p = p->next;
        free(plist);
        plist = p;
    }
    free(plist);
}
void display_list_from_beginning(List *list)
{
	
	while(list)
	{
		my_putchar(list->val);
		list=list->next;
	}
}
void display_list_from_ending(List *list)
{
	List * tail = list;
	while(tail->next)
	{
		tail=tail->next;
	}
	while(tail)
	{
		my_putchar(tail->val);
		tail = tail->prev;
	}
}


int my_print_combn(int n)
{
	int a = 0;//the num to deal with
	int sum = 1;//max num
	int i = 0;//
	int j = 0;//
	int t;//temp num
	int flag = 1;
	int f = 0;
	
	char l;//the val to push into list
	List *head = NULL;
	List *p = NULL;
	List *tail = NULL;
	
	while(j < n)
	{
		sum = sum*10;
		
		j++;
	}
	while(i < n)
	{
		head = push_front_item(head,'0');
		i++;
	}
	
	//change list val
	while(a < sum)
	{
		p = head;
		t = a;
		i = 0;
		flag = 1;
		f = 0;
		while(i < n)
		{
			l = t%10 + '0';
			p->val = l;
			p = p->next;
			i++;
			t = t/10;
		}
		p = head;
		while(p->next)
		{
			if((p->val) <= ((p->next)->val) )
				flag = 0;
			p = p->next;
		}
		a++;
		if(flag == 0)
			continue;
		
		display_list_from_ending(head);
		if(head->val == '9')
		{
			p = head;
			while(p->val == ((p->next->val) - 1))
			{
				p = p->next;
			}
			if(p->next)
				f = 1;
		}
		if(f == 0)
			my_putchar(',');
		
	}
	return 0;
}

int main()
{
	my_print_combn(2);
	return 0;
}
