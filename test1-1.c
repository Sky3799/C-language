#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

void Menu(); //메인메뉴 출력 함수
void Agelist(); // 나이대별 추천 리스트
void Yearlist(); // 년도별 추천 리스트
void Listof10(); // 10대 추천 리스트
void Listof20(); // 20대 추천 리스트
void Listof30(); // 30대 추천 리스트
void Listof40(); // 40대 추천 리스트
void Interface(); // MP3 인터페이스
void Musicstop(); // 음악을 멈추고 메뉴로 돌아가는 함수

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
	Menu();

}

void Menu() {
	int rec;
	Interface();
	printf("\t\t\t\t\t\t   <<메뉴선택>>\n\n\n");
	printf("\t\t\t\t\t    1. 나이대별 노래추천\n\n\t\t\t\t\t    2. 년도별 노래추천\n\n\t\t\t\t\t    0. 종료\n\n");
	scanf("%d", &rec);


	switch (rec) {
	case 0: printf("<<MP3 프로그램을 종료합니다>>\n"); return;
	case 1: //나이대별 추천인 경우
		Agelist();
		break;

	case 2: // 년도별 추천인 경우
		Yearlist();
		break;
	}

}

void Agelist() {
	int a;
	printf("\t<<본인의 나이대를 선택해주세요>>\n1.10대\t2.20대\t3.30대\t4.40대\t5.50대\n");

	scanf("%d", &a);

	switch (a) {
	case 1: //10대 추천 리스트
		Listof10();
		break;
	case 2: //20대 추천 리스트
		Listof20();
		break;
	case 3://30대 추천 리스트
		Listof30();
		break;
	case 4://40대 추천 리스트
		Listof40();
		break;
	}
}

void Yearlist() {
	int a;
	printf("\t<<년도를 선택해주세요>>\n1.~년대\t2.~년대\t3.~년대\t4.~년대\n");
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

void Listof10() {
	int L10; // 10대 추천음악 번호 입력받는 변수
	printf("\t<<10대 추천 Music List>>\n\n");
	printf("1.Beatbox - NCT DREAM\n");
	printf("2.낭만교향곡 (Feat. CHANGMO, 박재범) - BIG Naughty (서동현)\n");
	printf("3.나의 X에게 - 경서\n");
	printf("4.러브 쉿! - 조유리\n");
	printf("5.봄여름가을겨울 - BIGBANG\n");
	printf("6.FEARLESS - LE SSERAFIM (르세라핌) \n");
	printf("7.LOVE DIVE - IVE(아이브)\n");
	printf("8.말리지마 - (여자) 아이들\n");
	printf("9.물고기 - 백예린\n");
	printf("10.That's Hilarious - Charlie Puth\n");

	scanf("%d", &L10);

	switch (L10) {
	case 1:
		PlaySound("Beatbox.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("낭만교향곡.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("나의 X에게.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("러브 쉿!.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("봄여름가을겨울.wav", NULL, SND_FILENAME | SND_ASYNC);
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
		PlaySound("말리지마.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 9:
		PlaySound("물고기.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 10:
		PlaySound("That's Hilarious.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Listof20() {
	int L20; // 20대 추천음악 번호 입력받는 변수
	printf("\t<<20대 추천 Music List>>\n\n");
	printf("1.Yet To Come - 방탄소년단\n");
	printf("2.HOT - 세븐틴\n");
	printf("3.Beatbox - NCT DREAM\n");
	printf("4.도깨비불 (Illusion) - aespa\n");
	printf("5.LOVE DIVE - IVE(아이브)\n");
	printf("6.봄여름가을겨울 - BIGBANG\n");
	printf("7.I Like You (A Happier Song) (Feat. Doja Cat) - Post Malone\n");
	printf("8.내가 아니라도 - 주호\n");
	printf("9.MY BAG - (여자) 아이들\n");
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
		PlaySound("도깨비불.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("LOVE DIVE.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 6:
		PlaySound("봄여름가을겨울.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 7:
		PlaySound("I Like You.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 8:
		PlaySound("내가 아니라도.wav", NULL, SND_FILENAME | SND_ASYNC);
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

void Listof30() {
	int L30; // 30대 추천음악 번호 입력받는 변수
	printf("\t<<30대 추천 Music List>>\n\n");
	printf("1.Yet To Come - 방탄소년단\n");
	printf("2.That That (prod. ＆ feat. SUGA of BTS)\n");
	printf("3.TOMBOY - (여자) 아이들\n");
	printf("4.Feel My Rhythm - Red Velvet (레드벨벳)\n");
	printf("5.사랑인가 봐 - 멜로망스\n");
	printf("6.어마어마해 - WSG워너비\n");
	printf("7.GANADARA (Feat. 아이유) - 박재범\n");
	printf("8.취중고백 - 김민석(멜로망스)\n");
	printf("9.회전목마 (Feat. Zion.T, 원슈타인) (Prod. Slom) - sokodomo\n");
	printf("10.ELEVEN - IVE(아이브)\n");

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
		PlaySound("사랑인가 봐.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 6:
		PlaySound("어마어마해.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 7:
		PlaySound("GANADARA.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 8:
		PlaySound("취중고백.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 9:
		PlaySound("회전목마.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 10:
		PlaySound("ELEVEN.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Listof40() {
	int L40; // 40대 추천음악 번호 입력받는 변수
	printf("\t<<40대 추천 Music List>>\n\n");
	printf("1.Beatbox - NCT DREAM\n");
	printf("2.낭만교향곡 (Feat. CHANGMO, 박재범) - BIG Naughty (서동현)\n");
	printf("3.나의 X에게 - 경서\n");
	printf("4.러브 쉿! - 조유리\n");
	printf("5.봄여름가을겨울 - BIGBANG\n");
	printf("6.FEARLESS - LE SSERAFIM (르세라핌) \n");
	printf("7.LOVE DIVE - IVE(아이브)\n");
	printf("8.말리지마 - (여자) 아이들\n");
	printf("9.물고기 - 백예린\n");
	printf("10.That's Hilarious - Charlie Puth\n");

	scanf("%d", &L40);

	switch (L40) {
	case 1:
		PlaySound("Beatbox.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("낭만교향곡.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("나의 X에게.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("러브 쉿!.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("봄여름가을겨울.wav", NULL, SND_FILENAME | SND_ASYNC);
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
		PlaySound("말리지마.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 9:
		PlaySound("물고기.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 10:
		PlaySound("That's Hilarious.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Musicstop() {
	int Stop;
	char M;

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

	if (M == 'y' || M == 'Y') {
		Menu();
	}
}