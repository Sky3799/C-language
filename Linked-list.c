#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct list {
	int data;
	struct list* next;
}node;

void add(node* target, int data); //삽입함수
void del(node* c, int data); //삭제함수
void search(node* s, int data); //검색함수

int main() {
	int num, insert;
	node* head = malloc(sizeof(node));
	head->next = NULL;

	while (1) {
		printf("\t1.삽입\t2.삭제\t3.검색\t4.출력\n\n");
		scanf("%d", &num);
		

		switch (num) {
		case 1: /*삽입*/

			printf("삽입할 값 입력 : ");
			scanf("%d", &insert);

			node* curr = head->next;

			add(head, insert);

			printf("\n\n\n");
			break;

		case 2: /*삭제*/
			printf("삭제할 값 입력 : ");
			scanf("%d", &insert);

			curr = head;
			del(curr, insert);

			break;

		case 3: /*검색*/
			printf("검색할 값 입력 : ");
			scanf("%d", &insert);

			curr = head->next;

			search(curr, insert);

			break;

		case 4: /*출력*/

			curr = head->next;
			while (curr != NULL)
			{
				printf(" %d", curr->data);
				curr = curr->next;
			}
			printf("\n\n");
			break;
		}
	}
	
	free(head);


	return 0;

}

void add(node* target, int data) {
	node* ch = target->next;
	while (ch != NULL)
	{
		if (ch->data==data)
		{
			printf("중복되는 값이 있음. 삽입 불가\n\n");
			return target;
		}
		ch = ch->next;
	}

	if (target->next == NULL) {
		node* newnode = malloc(sizeof(node));
		newnode->data = data;
		newnode->next = NULL;
		target->next = newnode;
	}
	else {
		node* cur = target;
		while (cur->next != NULL) {
			cur = cur->next;
		}
		node* newnode = malloc(sizeof(node));
		newnode->data = data;
		newnode->next = NULL;
		cur->next = newnode;
	}

}

void del(node* c, int data) {
	node* rpos;

	if (c->next == NULL)
	{
		printf("삭제할 값 없음\n\n");
	}
	else
	{
		while (c->next != NULL) 
		{
			if (c->next->data == data)
			{
				rpos = c->next;
				c->next = c->next->next;
				free(rpos);
				printf("선택한 값이 삭제되었습니다.\n\n");
				return;
			}
			c = c->next;
		}
		if (c->next == NULL)
		{
			printf("삭제할 값 없음\n\n");
		}
	}
}

void search(node* s, int data) {
	while (s != NULL)
	{
		if (s->data == data)
		{
			printf("검색한 값이 리스트에 있습니다.\n\n");
			return s;
		}
		s = s->next;
	}
	printf("검색한 값 없음.\n\n");
}