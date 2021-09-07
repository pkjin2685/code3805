#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();
void room();
void bed();		//1. 침대 밑 
void frame();	//2. 액자
void bookcase();	//3. 책장
void toilet();		//4. 화장실 
void closet();		//5. 옷장 
void exit();	//6. 출입문 

int isEmptyFrame = FALSE;	//액자 비어있음 
int isEmptyBed = FALSE;		//침대 비어있음 

int main() {
	int menu;
	
	while(1) {
		printf("<<플레이어 선택 여부>> /n");
		printf("방탈출게임. \n\n");
		printf("1. 입장\n");
		printf("0. 종료\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				intro();
				room();
				break;
			case 0:
				return 0;
			default:
				printf("입력 오류\n\n");
				break;
		}
	}
	
}

void intro() {
	system("cls");
	printf("\n\n");
	printf("어... 여보 물좀 줘. \n");
	Sleep(1500);
	printf("뭐야 여긴 어디지... 여보? \n\n");
	Sleep(2500);
	printf("책장, 침대, 냉장고.. 모든 물건들이 처음보는 물건들이다 .\n");
	Sleep(1500);
	printf("대체 누가 날 여기에 데리고 온 것일까?\n\n");
	Sleep(2500);
	printf("일단 주위를 둘러보자.\n");
	Sleep(1500);
	system("pause");
}

void room() {
	int menu;
	
	while(1) {
		system("cls");	
		printf("낯선 건물 방 안\n\n");
		printf("방 안에서 할 수 있는 것들을 찾아보자.\n\n");
		printf("1. 침대    2. 액자  3. 책장\n");
		printf("4. 화장실  5. 냉장고  6. 출입문\n");
			
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isEmptyFrame) {
					printf("\n액자를 뒤져봤다 . 아무것도 없다.\n");
					system("pause");
				} else {
					bed();					
				}
				break;
			case 2:
				frame();
				break;
			case 3:
				bookcase();
				break;
			case 4:
				toilet();
				break;
			case 5:
				fridge();
				break;
			case 6:
				exit();
				break;
			default:
				printf("\n# ERROR # 입력값 오류\n");
				system("pause");
		}
	}
	
}

void bed(){//1. 침대 밑 
	int menu;
	
	while(1) {
		system("cls");
		printf("[방 안]-[침대]\n\n");
		printf("방 안에 침대가 놓여있다.\n\n");
		printf("1. 침대를 살펴본다\n");
		printf("2. 침대 밑을 뒤져본다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isEmptyFrame) {
					printf("\n액자뒤에는 아무것도 없다.\n");
				} else {
					printf("\n액자에서 특이한 점이 보이지 않는다.\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}	

void bed() {//2. 침대 
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[침대]\n\n");
		printf("방 안에 침대가 놓여있다 어두워서 잘 보이지는 않지만.\n\n");
		printf("미세하게 보인다...\n\n");
		printf("1. 침대 밑을 살펴본다\n");
		printf("2. 침대를 살펴본다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isEmptyBed)  {
					printf("\n침대가 부서져서 더 이상 찾을 수 없다.\n\n");
				} else {
					printf("\n어두워서 아무것도 보이지 않는다.\n");
					printf("손전등이라도 있으면 좋을텐데..\n\n");	
				}
				system("pause");
				break;
			case 2:
				if(isEmptyBed) {
					printf("\n침대가 부서져서 더 이상 찾을 수 없다.\n\n");
				} else {
					system("cls");
					printf("[원룸]-[침대]-[침대]\n\n");
					printf("\n누워있을 정도의 사이즈가 아니다.\n\n");
					printf("1. 침대를 살펴본다.\n");
					printf("0. 다른 곳을 살펴본다 (그만둔다).\n");
					printf(">> ");
					scanf("%d", &menu);
											
							switch(menu) {
								case 1: 
									printf("\n무언가가 있다. \n");
									printf("\n보이지는 않지만 탈출에 필요하지 않는 것 같다. \n");
						default:
							printf("\n결정을 못했다. 돌아가자.\n\n");
							break;
					}	
				}
				system("pause");
				break;		
			case 3:
				system("cls");
				printf("[원룸]-[침대]-[베개]\n\n");
				printf("\n베개에서는 특이한 점이 보이지 않는다.\n\n");
				printf("1. 베개 속을 뒤진다\n");
				printf("2. 베개를 가만히 둔다\n");
				printf(">> ");
				scanf("%d", &menu);						
				}
				system("pause");
				break;
			case 0:
				return;
			default:
				printf("# ERROR # 입력값 오류\n\n");
				system("pause");
		}
	}
}		

void bookcase(){//3. 책장 
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[책 장]\n\n");
		printf("0. 돌아가기\n");
		printf("1. 책장을 살펴본다. \n");
		printf("2. 책장주변을 살펴본다. \n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:	
				printf("책상위에 의자를 사용하라고 누군가가 써놓았다. \n");
				printf("미x놈\n");
				printf("책 한권이 놓여져있다.");
						while(1) {
							system("cls");
							printf("1. 책을 펼쳐본다.\n");
							printf("0. 그만둔다. \n");
					break;		
			case 2:
				printf("책장옆에 의자가 놓여있었다.\n");
				printf("비어있다. ;; \n ");
				printf("개xx\n");
				break; 
			case 0:
				return;
				break;
			default:
				printf("# ERROR # 입력값 오류\n\n");
				system("pause");
				break;
		}
		system("pause");
		break;
	}
}	

void toilet(){//4. 화장실 
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[화장실 안]\n\n");
		printf("안은 생각보다 깨끗한데? \n\n");
		printf("1. 세면대를 찾아본다.\n"); 
		printf("2. 변기커버를 뒤져본다.\n");
		printf("3. 욕조를 살펴본다. \n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("세면대 안에는 비닐에 쌓인 종이가 있다. \n");
				printf("쪽지에 (방 안의 아래로 내다보는 곳.)\n");
				printf("라고 적혀있다.\n"); 
				break;
			
			case 2:
				printf("변기 커버를 열어보았다.\n");
				printf("칼 세 자루가  비닐에 씌여 있었다.? \n");
				printf("이게 왜 여기에 있지? \n"); 
				break;
				
			case 3:
				printf("욕조를 뒤져보았다.\n");
				printf("하지만 아무것도 나오지 않았다.\n");
				break;
				
			case 0:
				return;
				break;
				
			default:
				printf("# ERROR # 입력값 오류\n\n");
				system("pause");
				break;
		}
		system("pause");
		break;
	}	
}	

void closet(){//5. 옷장 
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[옷장]\n\n");
		printf("방 한쪽을 가득 채울 정도의 큰 옷장이다.\n\n");
		printf("1. 반팔 티을 살펴본다.\n");
		printf("2. 후드 티를 살펴본다.\n");
		printf("3. 정장을 살펴본다.\n");
		printf("4. 바지를 살펴본다.\n");
		printf("0. 돌아가기\n");
		
		switch(menu) {
			case 1:
				printf("반팔 티를 살펴보았다. \n");
				printf("하지만 아무것도 없다. \n");
				break;
				
			case 2:
				printf("후드 티를 살펴보았다. \n");
				printf("하지만 아무것도 없다. \n");
				break;
				
			case 3:
				printf("정장을  살펴보았다. \n");
				printf("무언가가 있다. \n");
				printf("정장 안에는 다섯 개의 폰이 있다. \n");
				printf("그런데 어디서 많이 본 것 같다...\n");
				break;
				
					while(1) {
						system("cls");
						printf("1. 휴대폰을 킨다.");
						printf("0. 그만둔다.");
						
						switch(menu){
							case 1:
								printf("휴대폰에는 영상들이 있다.\n");
								printf("이게 왜 여기에 있는거지??\n");
								printf("정말 혼란스럽다. \n");
								printf("일단 영상들을 확인해보았다.\n");
								printf("과거에 내가 저지른 사건들이 였다. 이 영상에는 내가 괴롭힌 아이의 얼굴들이 찍혀있었고.\n");
								printf("(그 당시 내가 무슨짓을 했지... 그것 때문에 내가 이곳에 있는건가?)\n");
								printf("(이 휴대폰들은 내가 없앤줄 알았는데 이게 왜 여기에있지?)\n");
								printf("나는 이 휴대폰들의 개수와 이 영상들의 날짜가 이곳 출입문의 비밀번호라는 것을 알아냈다.\n");
								printf("(2021년 9월 6일) 이게 비밀번호겠지?\n"); 
								break;
							
							case 0:
								return:
								break;
								
							default:
								printf("\n# ERROR # 입력값 오류\n\n");
								break;
						}
				}
			
			case 4:
				printf("바지를 살펴보았다. \n");
				printf("하지만 아무것도 없다. \n");
				break;
			
			case 0:
				return;
				break;
			
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		
		printf(">> ");
		scanf("%d", &menu);
		
}

void door(){//6. 출입문 
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[출입문]\n\n");
		printf("이 방을 나갈 수 있는 유일한 문인 것 같다.\n");
		printf("문 앞에는 종이에 어떤 글귀도 적혀있다.\n\n");
		
		printf("1. 종이를 살펴본다\n");
		printf("2. 비밀번호를 입력한다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("종이에 이렇게 적혀있다. \n");
				printf("도구/휴대폰개수/날짜의 DAY(일). \n");
				break;
			case 2:
				door_password();
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}	

void door_password() {
	char pass[4] = "356", temp[];
	
	system("cls");
	printf("\n\n      [ PASSWORD ]\n\n");
	printf(">> ");
	scanf("%s", &temp);
	
	if(!strcmp(pass, temp)) {
		system("cls");
		printf("\n\n드디어 방을 나오게 되었다.\n\n");
		printf("영상들을 보고 난 후 죄책감이 느껴졌다.\n");
		printf("앞으로는 착하게 살아야겠다.\n");
		printf("사실 꿈이였다.\n\n");
		printf("# HAPPY END #\n\n");
		system("pause");
		exit(0);
	} else {
		printf("\n\n# ERROR # PASSWORD FAIL\n\n");
		return;	
	}
}

