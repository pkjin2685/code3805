#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();
void room();
void bed();		//1. ħ�� �� 
void frame();	//2. ����
void bookcase();	//3. å��
void toilet();		//4. ȭ��� 
void closet();		//5. ���� 
void exit();	//6. ���Թ� 

int isEmptyFrame = FALSE;	//���� ������� 
int isEmptyBed = FALSE;		//ħ�� ������� 

int main() {
	int menu;
	
	while(1) {
		printf("<<�÷��̾� ���� ����>> /n");
		printf("��Ż�����. \n\n");
		printf("1. ����\n");
		printf("0. ����\n");
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
				printf("�Է� ����\n\n");
				break;
		}
	}
	
}

void intro() {
	system("cls");
	printf("\n\n");
	printf("��... ���� ���� ��. \n");
	Sleep(1500);
	printf("���� ���� �����... ����? \n\n");
	Sleep(2500);
	printf("å��, ħ��, �����.. ��� ���ǵ��� ó������ ���ǵ��̴� .\n");
	Sleep(1500);
	printf("��ü ���� �� ���⿡ ������ �� ���ϱ�?\n\n");
	Sleep(2500);
	printf("�ϴ� ������ �ѷ�����.\n");
	Sleep(1500);
	system("pause");
}

void room() {
	int menu;
	
	while(1) {
		system("cls");	
		printf("���� �ǹ� �� ��\n\n");
		printf("�� �ȿ��� �� �� �ִ� �͵��� ã�ƺ���.\n\n");
		printf("1. ħ��    2. ����  3. å��\n");
		printf("4. ȭ���  5. �����  6. ���Թ�\n");
			
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isEmptyFrame) {
					printf("\n���ڸ� �����ô� . �ƹ��͵� ����.\n");
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
				printf("\n# ERROR # �Է°� ����\n");
				system("pause");
		}
	}
	
}

void bed(){//1. ħ�� �� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[�� ��]-[ħ��]\n\n");
		printf("�� �ȿ� ħ�밡 �����ִ�.\n\n");
		printf("1. ħ�븦 ���캻��\n");
		printf("2. ħ�� ���� ��������\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isEmptyFrame) {
					printf("\n���ڵڿ��� �ƹ��͵� ����.\n");
				} else {
					printf("\n���ڿ��� Ư���� ���� ������ �ʴ´�.\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}	
}	

void bed() {//2. ħ�� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[ħ��]\n\n");
		printf("�� �ȿ� ħ�밡 �����ִ� ��ο��� �� �������� ������.\n\n");
		printf("�̼��ϰ� ���δ�...\n\n");
		printf("1. ħ�� ���� ���캻��\n");
		printf("2. ħ�븦 ���캻��\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isEmptyBed)  {
					printf("\nħ�밡 �μ����� �� �̻� ã�� �� ����.\n\n");
				} else {
					printf("\n��ο��� �ƹ��͵� ������ �ʴ´�.\n");
					printf("�������̶� ������ �����ٵ�..\n\n");	
				}
				system("pause");
				break;
			case 2:
				if(isEmptyBed) {
					printf("\nħ�밡 �μ����� �� �̻� ã�� �� ����.\n\n");
				} else {
					system("cls");
					printf("[����]-[ħ��]-[ħ��]\n\n");
					printf("\n�������� ������ ����� �ƴϴ�.\n\n");
					printf("1. ħ�븦 ���캻��.\n");
					printf("0. �ٸ� ���� ���캻�� (�׸��д�).\n");
					printf(">> ");
					scanf("%d", &menu);
											
							switch(menu) {
								case 1: 
									printf("\n���𰡰� �ִ�. \n");
									printf("\n�������� ������ Ż�⿡ �ʿ����� �ʴ� �� ����. \n");
						default:
							printf("\n������ ���ߴ�. ���ư���.\n\n");
							break;
					}	
				}
				system("pause");
				break;		
			case 3:
				system("cls");
				printf("[����]-[ħ��]-[����]\n\n");
				printf("\n���������� Ư���� ���� ������ �ʴ´�.\n\n");
				printf("1. ���� ���� ������\n");
				printf("2. ������ ������ �д�\n");
				printf(">> ");
				scanf("%d", &menu);						
				}
				system("pause");
				break;
			case 0:
				return;
			default:
				printf("# ERROR # �Է°� ����\n\n");
				system("pause");
		}
	}
}		

void bookcase(){//3. å�� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[å ��]\n\n");
		printf("0. ���ư���\n");
		printf("1. å���� ���캻��. \n");
		printf("2. å���ֺ��� ���캻��. \n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:	
				printf("å������ ���ڸ� ����϶�� �������� ����Ҵ�. \n");
				printf("��x��\n");
				printf("å �ѱ��� �������ִ�.");
						while(1) {
							system("cls");
							printf("1. å�� ���ĺ���.\n");
							printf("0. �׸��д�. \n");
					break;		
			case 2:
				printf("å�忷�� ���ڰ� �����־���.\n");
				printf("����ִ�. ;; \n ");
				printf("��xx\n");
				break; 
			case 0:
				return;
				break;
			default:
				printf("# ERROR # �Է°� ����\n\n");
				system("pause");
				break;
		}
		system("pause");
		break;
	}
}	

void toilet(){//4. ȭ��� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[ȭ��� ��]\n\n");
		printf("���� �������� �����ѵ�? \n\n");
		printf("1. ����븦 ã�ƺ���.\n"); 
		printf("2. ����Ŀ���� ��������.\n");
		printf("3. ������ ���캻��. \n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("����� �ȿ��� ��ҿ� ���� ���̰� �ִ�. \n");
				printf("������ (�� ���� �Ʒ��� ���ٺ��� ��.)\n");
				printf("��� �����ִ�.\n"); 
				break;
			
			case 2:
				printf("���� Ŀ���� ����Ҵ�.\n");
				printf("Į �� �ڷ簡  ��ҿ� ���� �־���.? \n");
				printf("�̰� �� ���⿡ ����? \n"); 
				break;
				
			case 3:
				printf("������ �������Ҵ�.\n");
				printf("������ �ƹ��͵� ������ �ʾҴ�.\n");
				break;
				
			case 0:
				return;
				break;
				
			default:
				printf("# ERROR # �Է°� ����\n\n");
				system("pause");
				break;
		}
		system("pause");
		break;
	}	
}	

void closet(){//5. ���� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[����]\n\n");
		printf("�� ������ ���� ä�� ������ ū �����̴�.\n\n");
		printf("1. ���� Ƽ�� ���캻��.\n");
		printf("2. �ĵ� Ƽ�� ���캻��.\n");
		printf("3. ������ ���캻��.\n");
		printf("4. ������ ���캻��.\n");
		printf("0. ���ư���\n");
		
		switch(menu) {
			case 1:
				printf("���� Ƽ�� ���캸�Ҵ�. \n");
				printf("������ �ƹ��͵� ����. \n");
				break;
				
			case 2:
				printf("�ĵ� Ƽ�� ���캸�Ҵ�. \n");
				printf("������ �ƹ��͵� ����. \n");
				break;
				
			case 3:
				printf("������  ���캸�Ҵ�. \n");
				printf("���𰡰� �ִ�. \n");
				printf("���� �ȿ��� �ټ� ���� ���� �ִ�. \n");
				printf("�׷��� ��� ���� �� �� ����...\n");
				break;
				
					while(1) {
						system("cls");
						printf("1. �޴����� Ų��.");
						printf("0. �׸��д�.");
						
						switch(menu){
							case 1:
								printf("�޴������� ������� �ִ�.\n");
								printf("�̰� �� ���⿡ �ִ°���??\n");
								printf("���� ȥ��������. \n");
								printf("�ϴ� ������� Ȯ���غ��Ҵ�.\n");
								printf("���ſ� ���� ������ ��ǵ��� ����. �� ���󿡴� ���� ������ ������ �󱼵��� �����־���.\n");
								printf("(�� ��� ���� �������� ����... �װ� ������ ���� �̰��� �ִ°ǰ�?)\n");
								printf("(�� �޴������� ���� ������ �˾Ҵµ� �̰� �� ���⿡����?)\n");
								printf("���� �� �޴������� ������ �� ������� ��¥�� �̰� ���Թ��� ��й�ȣ��� ���� �˾Ƴ´�.\n");
								printf("(2021�� 9�� 6��) �̰� ��й�ȣ����?\n"); 
								break;
							
							case 0:
								return:
								break;
								
							default:
								printf("\n# ERROR # �Է°� ����\n\n");
								break;
						}
				}
			
			case 4:
				printf("������ ���캸�Ҵ�. \n");
				printf("������ �ƹ��͵� ����. \n");
				break;
			
			case 0:
				return;
				break;
			
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		
		printf(">> ");
		scanf("%d", &menu);
		
}

void door(){//6. ���Թ� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[���Թ�]\n\n");
		printf("�� ���� ���� �� �ִ� ������ ���� �� ����.\n");
		printf("�� �տ��� ���̿� � �۱͵� �����ִ�.\n\n");
		
		printf("1. ���̸� ���캻��\n");
		printf("2. ��й�ȣ�� �Է��Ѵ�\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("���̿� �̷��� �����ִ�. \n");
				printf("����/�޴�������/��¥�� DAY(��). \n");
				break;
			case 2:
				door_password();
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
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
		printf("\n\n���� ���� ������ �Ǿ���.\n\n");
		printf("������� ���� �� �� ��å���� ��������.\n");
		printf("�����δ� ���ϰ� ��ƾ߰ڴ�.\n");
		printf("��� ���̿���.\n\n");
		printf("# HAPPY END #\n\n");
		system("pause");
		exit(0);
	} else {
		printf("\n\n# ERROR # PASSWORD FAIL\n\n");
		return;	
	}
}

