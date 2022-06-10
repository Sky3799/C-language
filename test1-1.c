#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

void Menu(); //메인메뉴 출력 함수
void Agelist(); // 나이대별 추천 리스트
void Listof10(); // 10대 추천 리스트
void Listof20(); // 20대 추천 리스트
void Listof30(); // 30대 추천 리스트
void Listof40(); // 40대 추천 리스트

void Yearlist(); // 년도별 추천 리스트
void Listof00();// 00~04년도 추천 리스트
void Listof05();// 05~09년도 추천 리스트
void Listof10();// 10~14년도 추천 리스트
void Listof15();// 15~19년도 추천 리스트
void Listof20();// 20~22년도 추천 리스트


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
	printf("\t<<년도를 선택해주세요>>\n1.00~04년대\t2.~년대\t3.~년대\t4.~년대\n");
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
	printf("1.Yet To Come - 방탄소년단\n");
	printf("2.봄여름가을겨울 - BIGBANG (빅뱅)\n");
	printf("3.사랑인가 봐 - 멜로망스\n");
	printf("4.나의 X에게 - 경서\n");
	printf("5.LOVE DIVE - IVE(아이브)\n");
	printf("6.어마어마해 - WSG워너비\n");
	printf("7.회전목마 (Feat. Zion.T, 원슈타인) (Prod. Slom) - sokodomo\n");
	printf("8.드라마 - 아이유(IU)\n");
	printf("9.듣고 싶을까 - MSG워너비(M.O.M)\n");
	printf("10.취중고백 - 김민석(멜로망스)\n");

	scanf("%d", &L40);

	switch (L40) {
	case 1:
		PlaySound("Yet To Come.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("봄여름가을겨울.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("사랑인가 봐.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("나의 X에게.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("LOVE DIVE.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 6:
		PlaySound("어마어마해.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 7:
		PlaySound("회전목마.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 8:
		PlaySound("드라마.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 9:
		PlaySound("듣고 싶을까.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 10:
		PlaySound("취중고백.wav", NULL, SND_FILENAME | SND_ASYNC);
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

void Listof00()  {
	int L00;

	printf("\t<<00~04년대 추천 Music List TOP 5>>\n\n");
	printf("1. 아시나요 - 조성모\n");
	printf("2. 다줄거야 - 조규만\n");
	printf("3. 벌써일년 - 브라운아이즈\n");
	printf("4. I LOVE YOU - 포지션\n");
	printf("5. No.1 - 보아\n");

	scanf("%d", &L00);

	switch (L00) {
	case 1:
		PlaySound("아시나요.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("다줄거야.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("벌써일년.wav", NULL, SND_FILENAME | SND_ASYNC);
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

void Listof05() {
	int L05;

	printf("\t<<05~09년대 추천 Music List TOP 5>>\n\n");
	printf("1. 죄와벌 - sg워너비\n");
	printf("2. 겁쟁이 - 버즈\n");
	printf("3. 내사람 : partner For Life - sg워너비\n");
	printf("4. 사랑안해 - 백지영\n");
	printf("5. 미인- 이기찬\n");

	scanf("%d", &L05);

	switch (L05) {
	case 1:
		PlaySound("죄와벌.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("겁쟁이.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("내사람.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("사랑안해.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("미인.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Listof10() {
	int L10;
	printf("\t<<10~14년대 추천 Music List TOP 5>>\n\n");
	printf("1. Bad Girl Good Girl - 미쓰에이\n");
	printf("2. 잔소리 (With 2AM 슬옹) - 아이유\n");
	printf("3. Roly-Poly - 티아라\n");
	printf("4. 바람났어 (Feat. 박봄) - gg(박명수&g드래곤)\n");
	printf("5. 강남스타일 - 싸이\n");
	scanf("%d", &L10);

	switch (L10) {
	case 1:
		PlaySound("Bad Girl Good Girl.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("잔소리.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("Roly-Poly.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("바람났어.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("강남스타일.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Listof15() {
	int L15;

	printf("\t<<15~19년대 추천 Music List TOP 5>>\n\n");
	printf("1. 뱅뱅뱅 - 빅뱅 \n");
	printf("2. 같은 시간 속의 너 - 나얼\n");
	printf("3. cheer up - 트와이스\n");
	printf("4. 시간을 달려서 - 여자친구\n");
	printf("5. 첫눈처럼 너에게 가겠다 - 에일리\n");

	scanf("%d", &L15);

	switch (L15) {
	case 1:
		PlaySound("뱅뱅뱅.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("같은 시간 속의 너.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("cheer up.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("시간을 달려서.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("첫눈처럼 너에게 가겠다.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}

void Listof20() {
	int L20;

	printf("\t<<20~22년대 추천 Music List TOP 5>>\n\n");
	printf("1. 아무노래 - 지코 \n");
	printf("2. METEOR - 창모\n");
	printf("3. 아로하 - 조정석\n");
	printf("4. 흔들리는 꽃들 속에서 네 샴푸향이 느껴진거야 - 장범준\n");
	printf("5. Celebrity - 아이유\n");

	scanf("%d", &L20);

	switch (L20) {
	case 1:
		PlaySound("아무노래.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 2:
		PlaySound("METEOR.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 3:
		PlaySound("아로하.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 4:
		PlaySound("흔들리는 꽃들 속에서 네 샴푸향이 느껴진거야.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;
	case 5:
		PlaySound("Celebrity.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicstop();
		break;

	}
}