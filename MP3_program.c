#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#include <windows.h>
#pragma comment(lib,"winmm.lib")

void Menu(); //메뉴 출력 함수
void Agelist(); // 나이대별 추천 리스트
void Listof10s(); // 10대 추천 리스트
void Listof20s(); // 20대 추천 리스트
void Listof30s(); // 30대 추천 리스트
void Listof40s(); // 40대 추천 리스트

void Yearlist(); // 년도별 추천 리스트
void Listof00_04Y();// 00~04년도 추천 리스트
void Listof05_09Y();// 05~09년도 추천 리스트
void Listof10_14Y();// 10~14년도 추천 리스트
void Listof15_19Y();// 15~19년도 추천 리스트
void Listof20_22Y();// 20~22년도 추천 리스트

void reclist(); // 최근 재생한 음악 리스트

void Interface(); // MP3 인터페이스
void Musicoption(int control); // 음악을 멈추고 메뉴로 돌아가는 함수

//음악 실행 함수
//PlaySound(".wav", NULL, SND_FILENAME | SND_ASYNC);


int main() {
	Menu();

}

void Menu() {
	int rec;
	Interface();
	printf("\t\t\t\t\t\t   <<메뉴선택>>\n\n\n");
	printf("\t\t\t\t\t    1. 연령대별 노래추천\n\n\t\t\t\t\t    2. 년도별 노래추천\n\n\t\t\t\t\t    3. 최근 재생목록\n\n\t\t\t\t\t    0. 종료\n\n");
	scanf("%d", &rec);
	system("CLS");
	Interface();

	switch (rec) {
	case 0: printf("<<MP3 프로그램을 종료합니다>>\n"); return;
	case 1: //나이대별 추천인 경우
		Agelist();
		break;
	case 2: // 년도별 추천인 경우
		Yearlist();
		break;
	case 3: //최근 재생 목록
		reclist();
		break;
	}

}

void Agelist() {
	int a;
	printf("\t\t\t\t\t   <<연령대를 선택해주세요>>\n\n\n\t\t\t\t\t1.10대\t2.20대\t3.30대\t4.40대\t\n\n\n");
	printf("\n\n<<메인메뉴로 돌아가려면 0 입력>>\n\n");
	scanf("%d", &a);
	system("CLS");
	Interface();

	switch (a) {
	case 0:
		system("CLS");
		Menu();
		break;
	case 1: //10대 추천 리스트
		Listof10s();
		break;
	case 2: //20대 추천 리스트
		Listof20s();
		break;
	case 3://30대 추천 리스트
		Listof30s();
		break;
	case 4://40대 추천 리스트
		Listof40s();
		break;
	}
}

void Yearlist() {
	int a;
	printf("\t\t\t\t\t   <<년도를 선택해주세요>>\n\n\n\t\t1.00~04년대\t2.05~09년대\t3.10~14년대\t4.15~19년대\t5.20~22년대\n\n\n");
	printf("\n\n<<메인메뉴로 돌아가려면 0 입력>>\n\n");
	scanf("%d", &a);
	system("CLS");
	Interface();

	switch (a) {
	case 0:
		system("CLS");
		Menu();
		break;
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
	printf("\n\n");
}

void Listof10s() {
	int L10; // 10대 추천음악 번호 입력받는 변수
	FILE* fp1 = fopen("resentmusic.txt", "a"); // 최근 재생목록을 위한 파일포인터

	printf("\t\t\t\t\t   <<10대 추천 Top 5 Music List>>\n\n\n\n");
	printf("1.Beatbox - NCT DREAM\n");
	printf("2.낭만교향곡 (Feat. CHANGMO, 박재범) - BIG Naughty (서동현)\n");
	printf("3.나의 X에게 - 경서\n");
	printf("4.봄여름가을겨울 - BIGBANG\n");
	printf("5.LOVE DIVE - IVE(아이브)\n");
	printf("\n\n<<메인메뉴로 돌아가려면 0 입력>>\n\n");

	scanf("%d", &L10);

	switch (L10) {
	case 0:
		system("CLS");
		Menu();
		break;
	case 1:
		fputs("Beat box - NCT DREAM\n", fp1);
		PlaySound("Beat box.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(1);
		break;
	case 2:
		fputs("낭만교향곡 (Feat. CHANGMO, 박재범) - BIG Naughty (서동현)\n", fp1);
		PlaySound("낭만교향곡.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(1);
		break;
	case 3:
		fputs("나의 X에게 - 경서\n", fp1);
		PlaySound("나의 X에게.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(1);
		break;
	case 4:
		fputs("봄여름가을겨울 - BIGBANG\n", fp1);
		PlaySound("봄여름가을겨울.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(1);
		break;
	case 5:
		fputs("LOVE DIVE - IVE(아이브)\n", fp1);
		PlaySound("LOVE DIVE.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(1);
		break;
	}

	fclose(fp1);
}

void Listof20s() {
	FILE* fp2 = fopen("resentmusic.txt", "a");
	int L20; // 20대 추천음악 번호 입력받는 변수
	printf("\t\t\t\t\t   <<20대 추천 Top 5 Music List>>\n\n\n\n");
	printf("1.Yet To Come - 방탄소년단\n");
	printf("2.Beatbox - NCT DREAM\n");
	printf("3.LOVE DIVE - IVE(아이브)\n");
	printf("4.봄여름가을겨울 - BIGBANG\n");
	printf("5.MY BAG - (여자) 아이들\n");
printf("\n\n<<메인메뉴로 돌아가려면 0 입력>>\n\n");

	scanf("%d", &L20);

	switch (L20) {
	case 0:
		system("CLS");
		Menu();
		break;
	case 1:
		fputs("Yet To Come - 방탄소년단\n", fp2);
		PlaySound("Yet To Come.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(2);
		break;
	case 2:
		fputs("Beatbox - NCT DREAM\n", fp2);
		PlaySound("Beat box.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(2);
		break;
	case 3:
		fputs("LOVE DIVE - IVE(아이브)\n", fp2);
		PlaySound("LOVE DIVE.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(2);
		break;
	case 4:
		fputs("봄여름가을겨울 - BIGBANG\n", fp2);
		PlaySound("봄여름가을겨울.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(2);
		break;
	case 5:
		fputs("MY BAG - (여자) 아이들\n", fp2);
		PlaySound("MYBAG.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(2);
		break;

		fclose(fp2);
	}
}

void Listof30s() {
	FILE* fp3 = fopen("resentmusic.txt", "a");
	int L30; // 30대 추천음악 번호 입력받는 변수
	printf("\t\t\t\t\t   <<30대 추천 Top 5 Music List>>\n\n\n\n");
	printf("1.Yet To Come - 방탄소년단\n");
	printf("2.TOMBOY - (여자) 아이들\n");
	printf("3.사랑인가 봐 - 멜로망스\n");
	printf("4.어마어마해 - WSG워너비\n");
	printf("5.취중고백 - 김민석(멜로망스)\n");
	printf("\n\n<<메인메뉴로 돌아가려면 0 입력>>\n\n");


	scanf("%d", &L30);

	switch (L30) {
	case 0:
		system("CLS");
		Menu();
		break;
	case 1:
		fputs("Yet To Come - 방탄소년단\n", fp3);
		PlaySound("Yet To Come.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(3);
		break;
	case 2:
		fputs("TOMBOY - (여자) 아이들\n", fp3);
		PlaySound("TOMBOY.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(3);
		break;
	case 3:
		fputs("사랑인가 봐 - 멜로망스\n", fp3);
		PlaySound("사랑인가봐.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(3);
		break;
	case 4:
		fputs("어마어마해 - WSG워너비\n", fp3);
		PlaySound("어마어마해.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(3);
		break;
	case 5:
		fputs("취중고백 - 김민석(멜로망스)\n", fp3);
		PlaySound("취중고백.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(3);
		break;
	}
	fclose(fp3);
}

void Listof40s() {
	FILE* fp4 = fopen("resentmusic.txt", "a");
	int L40; // 40대 추천음악 번호 입력받는 변수
	printf("\t\t\t\t\t   <<40대 추천 Top 5 Music List>>\n\n\n\n");
	printf("1.봄여름가을겨울 - BIGBANG (빅뱅)\n");
	printf("2.사랑인가 봐 - 멜로망스\n");
	printf("3.LOVE DIVE - IVE(아이브)\n");
	printf("4.어마어마해 - WSG워너비\n");
	printf("5.취중고백 - 김민석(멜로망스)\n");
	printf("\n\n<<메인메뉴로 돌아가려면 0 입력>>\n\n");

	scanf("%d", &L40);

	switch (L40) {
	case 0:
		system("CLS");
		Menu();
		break;
	case 1:
		fputs("\n", fp4);
		PlaySound("봄여름가을겨울.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(4);
		break;
	case 2:
		fputs("\n", fp4);
		PlaySound("사랑인가 봐.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(4);
		break;
	case 3:
		fputs("\n", fp4);
		PlaySound("LOVE DIVE.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(4);
		break;
	case 4:
		fputs("\n", fp4);
		PlaySound("어마어마해.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(4);
		break;
	case 5:
		fputs("\n", fp4);
		PlaySound("취중고백.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(4);
		break;

	}
	fclose(fp4);
}

void Musicoption(int control) {
	int op;

	printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
	printf("\t\t\t\t\t    1. 메인메뉴로 돌아가기\n\n\t\t\t\t\t    2. 리스트로 돌아가기\n\n\t\t\t\t\t    3. 종료\n\n\t\t\t\t\t");
	scanf("%d", &op);

	switch (op) {
	case 1:
		PlaySound(NULL, NULL, 0);
		system("CLS");
		Menu();
		break;
	case 2:
		PlaySound(NULL, NULL, 0);
		system("CLS");
		Interface();

		switch (control) {
		case 1:
			Listof10s();
			break;
		case 2:
			Listof20s();
			break;
		case 3:
			Listof30s();
			break;
		case 4:
			Listof40s();
			break;
		case 5:
			Listof00_04Y();
			break;
		case 6:
			Listof05_09Y();
			break;
		case 7:
			Listof10_14Y();
			break;
		case 8:
			Listof15_19Y();
			break;
		case 9:
			Listof20_22Y();
			break;
		}

		break;
	case 3:
		PlaySound(NULL, NULL, 0);
		system("CLS");
		printf("<<MP3 프로그램을 종료합니다>>\n"); return;
		break;
	}
}

void Listof00_04Y() {
	int L00;
	FILE* fp5 = fopen("resentmusic.txt", "a");
	printf("\t\t\t\t\t   <<00~04년대 추천 Music List TOP 5>>\n\n\n\n");
	printf("1. 아시나요 - 조성모\n");
	printf("2. 다줄거야 - 조규만\n");
	printf("3. 벌써일년 - 브라운아이즈\n");
	printf("4. I LOVE YOU - 포지션\n");
	printf("5. No.1 - 보아\n");
	printf("\n\n<<메인메뉴로 돌아가려면 0 입력>>\n\n");
	scanf("%d", &L00);

	switch (L00) {
	case 0:
		system("CLS");
		Menu();
		break;
	case 1:
		fputs("아시나요 - 조성모\n", fp5);
		PlaySound("아시나요.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(5);
		break;
	case 2:
		fputs("다줄거야 - 조규만\n", fp5);
		PlaySound("다줄거야.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(5);
		break;
	case 3:
		fputs("벌써일년 - 브라운아이즈\n", fp5);
		PlaySound("벌써일년.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(5);
		break;
	case 4:
		fputs("I LOVE YOU - 포지션\n", fp5);
		PlaySound("I LOVE YOU.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(5);
		break;
	case 5:
		fputs("No.1 - 보아\n", fp5);
		PlaySound("No.1.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(5);
		break;

	}
	fclose(fp5);
}

void Listof05_09Y() {
	int L05;
	FILE* fp6 = fopen("resentmusic.txt", "a");
	printf("\t\t\t\t\t   <<05~09년대 추천 Music List TOP 5>>\n\n\n\n");
	printf("1. 죄와벌 - sg워너비\n");
	printf("2. 겁쟁이 - 버즈\n");
	printf("3. 내사람 : partner For Life - sg워너비\n");
	printf("4. 사랑안해 - 백지영\n");
	printf("5. 미인- 이기찬\n");
	printf("\n\n<<메인메뉴로 돌아가려면 0 입력>>\n\n");

	scanf("%d", &L05);

	switch (L05) {
	case 0:
		system("CLS");
		Menu();
		break;
	case 1:
		fputs("죄와벌 - sg워너비\n", fp6);
		PlaySound("죄와벌.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(6);
		break;
	case 2:
		fputs("겁쟁이 - 버즈\n", fp6);
		PlaySound("겁쟁이.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(6);
		break;
	case 3:
		fputs("내사람 : partner For Life - sg워너비\n", fp6);
		PlaySound("내사람.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(6);
		break;
	case 4:
		fputs("사랑안해 - 백지영\n", fp6);
		PlaySound("사랑안해.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(6);
		break;
	case 5:
		fputs("미인- 이기찬\n", fp6);
		PlaySound("미인.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(6);
		break;

	}
	fclose(fp6);
}

void Listof10_14Y() {
	FILE* fp7 = fopen("resentmusic.txt", "a");
	int L10;
	printf("\t\t\t\t\t   <<10~14년대 추천 Music List TOP 5>>\n\n\n\n");
	printf("1. Bad Girl Good Girl - 미쓰에이\n");
	printf("2. 잔소리 (With 2AM 슬옹) - 아이유\n");
	printf("3. Roly-Poly - 티아라\n");
	printf("4. 바람났어 (Feat. 박봄) - gg(박명수&g드래곤)\n");
	printf("5. 강남스타일 - 싸이\n");
	printf("\n\n<<메인메뉴로 돌아가려면 0 입력>>\n\n");

	scanf("%d", &L10);

	switch (L10) {
	case 0:
		system("CLS");
		Menu();
		break;
	case 1:
		fputs("Bad Girl Good Girl - 미쓰에이\n", fp7);
		PlaySound("Bad Girl Good Girl.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(7);
		break;
	case 2:
		fputs("잔소리 (With 2AM 슬옹) - 아이유\n", fp7);
		PlaySound("잔소리.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(7);
		break;
	case 3:
		fputs("Roly-Poly - 티아라\n", fp7);
		PlaySound("Roly-Poly.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(7);
		break;
	case 4:
		fputs("바람났어 (Feat. 박봄) - gg(박명수&g드래곤)\n", fp7);
		PlaySound("바람났어.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(7);
		break;
	case 5:
		fputs("강남스타일 - 싸이\n", fp7);
		PlaySound("강남스타일.wav", NULL, SND_FILENAME | SND_ASYNC);		
		Musicoption(7);
		break;

	}
	fclose(fp7);
}

void Listof15_19Y() {
	int L15;
	FILE* fp8 = fopen("resentmusic.txt", "a");
	printf("\t\t\t\t\t   <<15~19년대 추천 Music List TOP 5>>\n\n\n\n");
	printf("1. 뱅뱅뱅 - 빅뱅 \n");
	printf("2. 같은 시간 속의 너 - 나얼\n");
	printf("3. cheer up - 트와이스\n");
	printf("4. 시간을 달려서 - 여자친구\n");
	printf("5. 첫눈처럼 너에게 가겠다 - 에일리\n");
	printf("\n\n<<메인메뉴로 돌아가려면 0 입력>>\n\n");


	scanf("%d", &L15);

	switch (L15) {
	case 0:
		system("CLS");
		Menu();
		break;
	case 1:
		fputs("뱅뱅뱅 - 빅뱅\n", fp8);
		PlaySound("뱅뱅뱅.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(8);
		break;
	case 2:
		fputs("같은 시간 속의 너 - 나얼\n", fp8);
		PlaySound("같은 시간 속의 너.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(8);
		break;
	case 3:
		fputs("cheer up - 트와이스\n", fp8);
		PlaySound("cheer up.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(8);
		break;
	case 4:
		fputs("시간을 달려서 - 여자친구\n", fp8);
		PlaySound("시간을 달려서.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(8);
		break;
	case 5:
		fputs("첫눈처럼 너에게 가겠다 - 에일리\n", fp8);
		PlaySound("첫눈처럼 너에게 가겠다.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(8);
		break;

	}
	fclose(fp8);
}

void Listof20_22Y() {
	int L20;
	FILE* fp9 = fopen("resentmusic.txt", "a");
	printf("\t\t\t\t\t   <<20~22년대 추천 Music List TOP 5>>\n\n\n\n");
	printf("1. 아무노래 - 지코 \n");
	printf("2. METEOR - 창모\n");
	printf("3. 아로하 - 조정석\n");
	printf("4. 흔들리는 꽃들 속에서 네 샴푸향이 느껴진거야 - 장범준\n");
	printf("5. Celebrity - 아이유\n");
	printf("\n\n<<메인메뉴로 돌아가려면 0 입력>>\n\n");


	scanf("%d", &L20);

	switch (L20) {
	case 0:
		system("CLS");
		Menu();
		break;
	case 1:
		fputs("아무노래 - 지코\n", fp9);
		PlaySound("아무노래.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(9);
		break;
	case 2:
		fputs("METEOR - 창모\n", fp9);
		PlaySound("METEOR.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(9);
		break;
	case 3:
		fputs("아로하 - 조정석\n", fp9);
		PlaySound("아로하.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(9);
		break;
	case 4:
		fputs("흔들리는 꽃들 속에서 네 샴푸향이 느껴진거야 - 장범준\n", fp9);
		PlaySound("흔들리는 꽃들 속에서 네 샴푸향이 느껴진거야.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(9);
		break;
	case 5:
		fputs("Celebrity - 아이유\n", fp9);
		PlaySound("Celebrity.wav", NULL, SND_FILENAME | SND_ASYNC);
		Musicoption(9);
		break;

	}
	fclose(fp9);
}

void reclist() {
	int a;
	char buffer[1000] = { 0 };
	printf("\t\t\t\t\t<<최근 재생된 음악 리스트>>\n\n");

	FILE* pfp = fopen("resentmusic.txt", "r");

	if (pfp == NULL) {
		printf("\t\t\t\t\t아직 재생된 파일이 없습니다.\n\n");
	}

	fread(buffer, sizeof(buffer), 1, pfp);

	printf("%s\n", buffer);

	fclose(pfp);

	printf("<<메인메뉴로 돌아가기 : 0 \t프로그램 종료 : 1 >>\n");
	scanf("%d", &a);

	if (a == 0) {
		system("CLS");
		Menu();
	}
	else if (a == 1) {
		system("CLS");
		Interface();
		printf("<<MP3 프로그램을 종료합니다>>\n"); return;
	}
}