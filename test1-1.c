#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

void Menu();
void Agelist();
void Yearlist();
void Interface();

/* 음악 실행 함수

int Stop;
PlaySound("a.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

printf("종료를 원하면 0 입력\n");
scanf("%d", &Stop);

			if (Stop == 0)
			{
				PlaySound(NULL, NULL, 0);
				printf("노래를 종료했습니다.");
			}
			*/

int main() {
	
	Interface();
	Menu();

}

void Menu() {
	int rec;

	printf("\t\t\t\t\t\t   <<메뉴선택>>\n\n\n");
	printf("\t\t\t\t\t    1. 나이대별 노래추천\n\n\t\t\t\t\t    2. 년도별 노래추천\n\n\t\t\t\t\t    0. 종료\n\n");
	scanf("%d", &rec);


	switch (rec) {
	case 0:return;
	case 1: //나이대별 추천인 경우
		printf("\t<<본인의 나이대를 선택해주세요>>\n1.10대\t2.20대\t3.30대\t4.40대\t5.50대\n");
		Agelist();
		break;

	case 2: // 년도별 추천인 경우
		printf("\t<<년도를 선택해주세요>>\n1.~년대\t2.~년대\t3.~년대\t4.~년대\n");
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
		printf("\t<<10대 추천 Music List>>\n\n");
		printf("1.케플러-Wadada\n");
		
		scanf("%d", &b);

		if (b == 1) {
			PlaySound("Wadada.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

			printf("종료를 원하면 0 입력\n");
			scanf("%d", &Stop);

			if (Stop == 0)
			{
				PlaySound(NULL, NULL, 0);
				printf("노래를 종료했습니다.\n");				
			}
			
			printf("메뉴로 돌아가시겠습니까?\n (Y = 메뉴 , 아무 버튼 = 종료)\n");
			getchar();
			scanf("%c", &M);
			
			if (M == 'y') {
				Menu();
			}
			

		}
		break;
	case 2:
		printf("\t<<20대 추천 Music List>>\n\n");
		break;
	case 3:
		printf("\t<<30대 추천 Music List>>\n\n");
		break;
	case 4:
		printf("\t<<40대 추천 Music List>>\n\n");
		break;
	case 5:
		printf("\t<<50대 추천 Music List>>\n\n");
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