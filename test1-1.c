#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

void Menu(); //���θ޴� ��� �Լ�
void Agelist(); // ���̴뺰 ��õ ����Ʈ
void Listof10s(); // 10�� ��õ ����Ʈ
void Listof20s(); // 20�� ��õ ����Ʈ
void Listof30s(); // 30�� ��õ ����Ʈ
void Listof40s(); // 40�� ��õ ����Ʈ

void Yearlist(); // �⵵�� ��õ ����Ʈ
void Listof00_04Y();// 00~04�⵵ ��õ ����Ʈ
void Listof05_09Y();// 05~09�⵵ ��õ ����Ʈ
void Listof10_14Y();// 10~14�⵵ ��õ ����Ʈ
void Listof15_19Y();// 15~19�⵵ ��õ ����Ʈ
void Listof20_22Y();// 20~22�⵵ ��õ ����Ʈ


void Interface(); // MP3 �������̽�
void Musicstop(); // ������ ���߰� �޴��� ���ư��� �Լ�

//���� ���� �Լ�
//PlaySound(".wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);


int main() {
	Menu();

}

void Menu() {
	int rec;
	Interface();
	printf("\t\t\t\t\t\t   <<�޴�����>>\n\n\n");
	printf("\t\t\t\t\t    1. ���̴뺰 �뷡��õ\n\n\t\t\t\t\t    2. �⵵�� �뷡��õ\n\n\t\t\t\t\t    0. ����\n\n");
	scanf("%d", &rec);


	switch (rec) {
	case 0: printf("<<MP3 ���α׷��� �����մϴ�>>\n"); return;
	case 1: //���̴뺰 ��õ�� ���
		Agelist();
		break;

	case 2: // �⵵�� ��õ�� ���
		Yearlist();
		break;
	}

}

void Agelist() {
	int a;
	printf("\t<<������ ���̴븦 �������ּ���>>\n1.10��\t2.20��\t3.30��\t4.40��\t5.50��\n");

	scanf("%d", &a);

	switch (a) {
	case 1: //10�� ��õ ����Ʈ
		Listof10s();
		break;
	case 2: //20�� ��õ ����Ʈ
		Listof20s();
		break;
	case 3://30�� ��õ ����Ʈ
		Listof30s();
		break;
	case 4://40�� ��õ ����Ʈ
		Listof40s();
		break;
	}
}

void Yearlist() {
	int a;
	printf("\t<<�⵵�� �������ּ���>>\n1.00~04���\t2.05~09���\t3.10~14���\t4.15~19���\t5.20~22���\n");
	scanf("%d", &a);

	switch (a) {
	case 1:
		Listof00_04Y();
		break;
	case 2:
		Listof05_09Y();
		break;
	case 3:
		Listof10_14Y();
		break;
	case 4:
		Listof15_19Y();
		break;
	case 5:
		Listof20_22Y();
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

void Listof10s() {
	int L10; // 10�� ��õ���� ��ȣ �Է¹޴� ����
	printf("\t<<10�� ��õ Music List>>\n\n");
	printf("1.Beatbox - NCT DREAM\n");
	printf("2.��������� (Feat. CHANGMO, �����) - BIG Naughty (������)\n");
	printf("3.���� X���� - �漭\n");
	printf("4.���� ��! - ������\n");
	printf("5.�����������ܿ� - BIGBANG\n");
	printf("6.FEARLESS - LE SSERAFIM (��������) \n");
	printf("7.LOVE DIVE - IVE(���̺�)\n");
	printf("8.�������� - (����) ���̵�\n");
	printf("9.����� - �鿹��\n");
	printf("10.That's Hilarious - Charlie Puth\n");

	scanf("%d", &L10);

	switch (L10) {
	case 1:
		PlaySound("Beatbox.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("���������.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("���� X����.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("���� ��!.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("�����������ܿ�.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 6:
		PlaySound("FEARLESS.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 7:
		PlaySound("LOVE DIVE.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 8:
		PlaySound("��������.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 9:
		PlaySound("�����.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 10:
		PlaySound("That's Hilarious.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Listof20s() {
	int L20; // 20�� ��õ���� ��ȣ �Է¹޴� ����
	printf("\t<<20�� ��õ Music List>>\n\n");
	printf("1.Yet To Come - ��ź�ҳ��\n");
	printf("2.HOT - ����ƾ\n");
	printf("3.Beatbox - NCT DREAM\n");
	printf("4.������� (Illusion) - aespa\n");
	printf("5.LOVE DIVE - IVE(���̺�)\n");
	printf("6.�����������ܿ� - BIGBANG\n");
	printf("7.I Like You (A Happier Song) (Feat. Doja Cat) - Post Malone\n");
	printf("8.���� �ƴ϶� - ��ȣ\n");
	printf("9.MY BAG - (����) ���̵�\n");
	printf("10.abcdefu - GAYLE\n");

	scanf("%d", &L20);

	switch (L20) {
	case 1:
		PlaySound("Yet To Come.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("HOT.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("Beatbox.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("�������.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("LOVE DIVE.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 6:
		PlaySound("�����������ܿ�.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 7:
		PlaySound("I Like You.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 8:
		PlaySound("���� �ƴ϶�.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 9:
		PlaySound("MY BAG.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 10:
		PlaySound("abcdefu.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Listof30s() {
	int L30; // 30�� ��õ���� ��ȣ �Է¹޴� ����
	printf("\t<<30�� ��õ Music List>>\n\n");
	printf("1.Yet To Come - ��ź�ҳ��\n");
	printf("2.That That (prod. �� feat. SUGA of BTS)\n");
	printf("3.TOMBOY - (����) ���̵�\n");
	printf("4.Feel My Rhythm - Red Velvet (���座��)\n");
	printf("5.����ΰ� �� - ��θ���\n");
	printf("6.���� - WSG���ʺ�\n");
	printf("7.GANADARA (Feat. ������) - �����\n");
	printf("8.���߰�� - ��μ�(��θ���)\n");
	printf("9.ȸ���� (Feat. Zion.T, ����Ÿ��) (Prod. Slom) - sokodomo\n");
	printf("10.ELEVEN - IVE(���̺�)\n");

	scanf("%d", &L30);

	switch (L30) {
	case 1:
		PlaySound("Yet To Come.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("That That.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("TOMBOY.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("Feel My Rhythm.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("����ΰ� ��.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 6:
		PlaySound("����.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 7:
		PlaySound("GANADARA.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 8:
		PlaySound("���߰��.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 9:
		PlaySound("ȸ����.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 10:
		PlaySound("ELEVEN.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Listof40s() {
	int L40; // 40�� ��õ���� ��ȣ �Է¹޴� ����
	printf("\t<<40�� ��õ Music List>>\n\n");
	printf("1.Yet To Come - ��ź�ҳ��\n");
	printf("2.�����������ܿ� - BIGBANG (���)\n");
	printf("3.����ΰ� �� - ��θ���\n");
	printf("4.���� X���� - �漭\n");
	printf("5.LOVE DIVE - IVE(���̺�)\n");
	printf("6.���� - WSG���ʺ�\n");
	printf("7.ȸ���� (Feat. Zion.T, ����Ÿ��) (Prod. Slom) - sokodomo\n");
	printf("8.��� - ������(IU)\n");
	printf("9.��� ������ - MSG���ʺ�(M.O.M)\n");
	printf("10.���߰�� - ��μ�(��θ���)\n");

	scanf("%d", &L40);

	switch (L40) {
	case 1:
		PlaySound("Yet To Come.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("�����������ܿ�.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("����ΰ� ��.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("���� X����.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("LOVE DIVE.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 6:
		PlaySound("����.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 7:
		PlaySound("ȸ����.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 8:
		PlaySound("���.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 9:
		PlaySound("��� ������.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 10:
		PlaySound("���߰��.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Musicstop() {
	int Stop;
	char M;

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

	if (M == 'y' || M == 'Y') {
		Menu();
	}
}

void Listof00_04Y()  {
	int L00;

	printf("\t<<00~04��� ��õ Music List TOP 5>>\n\n");
	printf("1. �ƽó��� - ������\n");
	printf("2. ���ٰž� - ���Ը�\n");
	printf("3. �����ϳ� - ���������\n");
	printf("4. I LOVE YOU - ������\n");
	printf("5. No.1 - ����\n");

	scanf("%d", &L00);

	switch (L00) {
	case 1:
		PlaySound("�ƽó���.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("���ٰž�.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("�����ϳ�.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("I LOVE YOU.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("No.1.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Listof05_09Y() {
	int L05;

	printf("\t<<05~09��� ��õ Music List TOP 5>>\n\n");
	printf("1. �˿͹� - sg���ʺ�\n");
	printf("2. ������ - ����\n");
	printf("3. ����� : partner For Life - sg���ʺ�\n");
	printf("4. ������� - ������\n");
	printf("5. ����- �̱���\n");

	scanf("%d", &L05);

	switch (L05) {
	case 1:
		PlaySound("�˿͹�.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("������.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("�����.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("�������.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("����.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Listof10_14Y() {
	int L10;
	printf("\t<<10~14��� ��õ Music List TOP 5>>\n\n");
	printf("1. Bad Girl Good Girl - �̾�����\n");
	printf("2. �ܼҸ� (With 2AM ����) - ������\n");
	printf("3. Roly-Poly - Ƽ�ƶ�\n");
	printf("4. �ٶ����� (Feat. �ں�) - gg(�ڸ��&g�巡��)\n");
	printf("5. ������Ÿ�� - ����\n");
	scanf("%d", &L10);

	switch (L10) {
	case 1:
		PlaySound("Bad Girl Good Girl.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("�ܼҸ�.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("Roly-Poly.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("�ٶ�����.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("������Ÿ��.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Listof15_19Y() {
	int L15;

	printf("\t<<15~19��� ��õ Music List TOP 5>>\n\n");
	printf("1. ���� - ��� \n");
	printf("2. ���� �ð� ���� �� - ����\n");
	printf("3. cheer up - Ʈ���̽�\n");
	printf("4. �ð��� �޷��� - ����ģ��\n");
	printf("5. ù��ó�� �ʿ��� ���ڴ� - ���ϸ�\n");

	scanf("%d", &L15);

	switch (L15) {
	case 1:
		PlaySound("����.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("���� �ð� ���� ��.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("cheer up.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("�ð��� �޷���.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("ù��ó�� �ʿ��� ���ڴ�.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Listof20_22Y() {
	int L20;

	printf("\t<<20~22��� ��õ Music List TOP 5>>\n\n");
	printf("1. �ƹ��뷡 - ���� \n");
	printf("2. METEOR - â��\n");
	printf("3. �Ʒ��� - ������\n");
	printf("4. ��鸮�� �ɵ� �ӿ��� �� ��Ǫ���� �������ž� - �����\n");
	printf("5. Celebrity - ������\n");

	scanf("%d", &L20);

	switch (L20) {
	case 1:
		PlaySound("�ƹ��뷡.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("METEOR.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("�Ʒ���.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("��鸮�� �ɵ� �ӿ��� �� ��Ǫ���� �������ž�.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("Celebrity.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}