#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct list {
	int data;
	struct list* next;
}node;

void add(node* target, int data); //�����Լ�
void del(node* c, int data); //�����Լ�
void search(node* s, int data); //�˻��Լ�

int main() {
	int num, insert;
	node* head = malloc(sizeof(node));
	head->next = NULL;

	while (1) {
		printf("\t1.����\t2.����\t3.�˻�\t4.���\n\n");
		scanf("%d", &num);
		

		switch (num) {
		case 1: /*����*/

			printf("������ �� �Է� : ");
			scanf("%d", &insert);

			node* curr = head->next;

			add(head, insert);

			printf("\n\n\n");
			break;

		case 2: /*����*/
			printf("������ �� �Է� : ");
			scanf("%d", &insert);

			curr = head;
			del(curr, insert);

			break;

		case 3: /*�˻�*/
			printf("�˻��� �� �Է� : ");
			scanf("%d", &insert);

			curr = head->next;

			search(curr, insert);

			break;

		case 4: /*���*/

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
			printf("�ߺ��Ǵ� ���� ����. ���� �Ұ�\n\n");
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
		printf("������ �� ����\n\n");
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
				printf("������ ���� �����Ǿ����ϴ�.\n\n");
				return;
			}
			c = c->next;
		}
		if (c->next == NULL)
		{
			printf("������ �� ����\n\n");
		}
	}
}

void search(node* s, int data) {
	while (s != NULL)
	{
		if (s->data == data)
		{
			printf("�˻��� ���� ����Ʈ�� �ֽ��ϴ�.\n\n");
			return s;
		}
		s = s->next;
	}
	printf("�˻��� �� ����.\n\n");
}