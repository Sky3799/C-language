#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

void Menu();
void Agelist();
void Yearlist();
void Interface();

/* ���� ���� �Լ�

int Stop;
PlaySound("a.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

printf("���Ḧ ���ϸ� 0 �Է�\n");
scanf("%d", &Stop);

			if (Stop == 0)
			{
				PlaySound(NULL, NULL, 0);
				printf("�뷡�� �����߽��ϴ�.");
			}
			*/

int main() {
	
	Interface();
	Menu();

}

void Menu() {
	int rec;

	printf("\t\t\t\t\t\t   <<�޴�����>>\n\n\n");
	printf("\t\t\t\t\t    1. ���̴뺰 �뷡��õ\n\n\t\t\t\t\t    2. �⵵�� �뷡��õ\n\n\t\t\t\t\t    0. ����\n\n");
	scanf("%d", &rec);


	switch (rec) {
	case 0:return;
	case 1: //���̴뺰 ��õ�� ���
		printf("\t<<������ ���̴븦 �������ּ���>>\n1.10��\t2.20��\t3.30��\t4.40��\t5.50��\n");
		Agelist();
		break;

	case 2: // �⵵�� ��õ�� ���
		printf("\t<<�⵵�� �������ּ���>>\n1.~���\t2.~���\t3.~���\t4.~���\n");
		Yearlist();
		break;
	}

}

void Agelist() {
	char M;
	int a, b, Stop;
	
	scanf("%d", &a);

	switch (a) {
	case 1:
		printf("\t<<10�� ��õ Music List>>\n\n");
		printf("1.���÷�-Wadada\n");
		
		scanf("%d", &b);

		if (b == 1) {
			PlaySound("Wadada.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

			printf("���Ḧ ���ϸ� 0 �Է�\n");
			scanf("%d", &Stop);

			if (Stop == 0)
			{
				PlaySound(NULL, NULL, 0);
				printf("�뷡�� �����߽��ϴ�.\n");				
			}
			
			printf("�޴��� ���ư��ðڽ��ϱ�?\n (Y = �޴� , �ƹ� ��ư = ����)\n");
			getchar();
			scanf("%c", &M);
			
			if (M == 'y') {
				Menu();
			}
			

		}
		break;
	case 2:
		printf("\t<<20�� ��õ Music List>>\n\n");
		break;
	case 3:
		printf("\t<<30�� ��õ Music List>>\n\n");
		break;
	case 4:
		printf("\t<<40�� ��õ Music List>>\n\n");
		break;
	case 5:
		printf("\t<<50�� ��õ Music List>>\n\n");
		break;
	}
}

void Yearlist() {
	int a;
	scanf("%d", &a);

	switch (a) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	}


}

void Interface() {
	printf("\t\t_______________________________________________________________________________________\n");
	printf("\t\t      __                                                      _   _               __   \n");
	printf("\t\t    /    )                                                    /  /|             /    ) \n");
	printf("\t\t----|-----------------__----_--_-----__-----__-----__--------/| /-|-------__----- _ /--\n");
	printf("\t\t     |      /   /   /   )  / /  )  /   )  /   )  /   )      / |/  |     /   )       )  \n");
	printf("\t\t_(____/____(___(___/___/__/_/__/__(___/__(___/__/___/______/__/___|____/___/__(____/___\n");
	printf("\t\t                                                                      /                \n");
}