#include<conio.h>
#include<stdio.h>
int isID(char *s) {
	int flag=0;
	int i=0;
	for (i=0;s[i];i++) {
		if(!isdigit(s[i])) return 0;
	}
	return 1;
}
int timeIsAvailable(int y,int m) {
	if()return 0; else return 1;
}
void print(char* s) {
	int i=0;
	for (;s[i];i++) {
		printf("%c",s[i]);
		Sleep(10);
	}
}
void main() {
	print("————————欢迎来到《潜杀猎航》————————\n*********************************\n");
	print("哨兵前台:这里是大德意志大西洋海军司令部，请出示身份证明(姓名或ID):\n");
	char player[50];
	scanf("%s",&player);
	if(isID(player)) {
		print("哨兵前台:你好,");
		print(player);
		print("指挥官");
	} else {
		print("哨兵前台:哦！是");
		print(player);
		print("先生啊，你终于来了，Wilson部长在等你!\n");
		print("        进门左转，将会有人带你去见部长先生\n");
		getch();
		getch();
		clrscr();
		print("咚咚咚...\n");
		sleep(3);
		print("Wilson:请进\n");
		sleep(1);
		print(player);
		print("前来报道!\n");
		print("press any key to continue.(Maybe two times)");
		getch();
		getch();
		clrscr();
		print("————————部长办公室————————\n");
		print("Wilson:哦？是");
		print(player);
		print("先生啊，欢迎欢迎，请坐。\n");
		sleep(1);
		print("Wilson:元首向我提到过你，一名优秀的海军军官，现在想做一名U艇指挥官了？\n");
		sleep(1);
		print("\n你想什么时间加入我们潜艇计划？（1939.09-1943.06）\n");
		int year,month;
		if(0)loop1: print("(如果这是第2次及以上问你，那应该是你之前输入了不合要求的时间)\n");
		print("年份？（1939-1943）:");
		scanf("%d",&year);
		print("\n月份？（1-12,注意从1939年9月开始，至1943年6月结束）:");
		scanf("%d",&month);
		//while(year<1939||year>1943||(year==1939&&month<9)||(year==1943&&month>6))
		switch(year) {
			case 1939: {
				if(month<9||month>12)goto loop1;
				print("Wilson:这么心急？好！帝国正需要你这样的热心人才！\n");
				sleep(1);
				print("Wilson:你正是我所期盼的那样！那么，稍作休整，就出征吧。帝国以你为傲！\n");
				sleep(1);
				print(player);
				print(":Heil Hitler!（高举左手）\n");
				print("press any key to continue.(Maybe two times)");
				getch();
				getch();
				clrscr();
				if(month>9) {
					printf("%d",month-9);
					sleep(1);
					print("个月后...");
					sleep(1);
				}
				if(0) loop2: print("(如果这是第2次及以上问你，那应该是你之前输入了不合要求的时间)\n");
				print("————————（难得的晴天）船坞里————————");
				print("Wilson：准备好了，我的朋友？选一艘你喜欢的潜艇吧！\n");
				print("船坞里有三种型号的潜艇：VIIA，VIIB，IXA\n");
				sleep(1);
				print("(1.VIIA	2.VIIB	3.IXA)\n");
				int choose;
				char type[6];
				scanf("%d",&choose);
				switch(choose) {
					case 1: {
						type[0]='V';
						type[1]='I';
						type[2]='I';
						type[3]='A';
						break;
					}
					case 2: {
						type[0]='V';
						type[1]='I';
						type[2]='I';
						type[3]='B';
						break;
					}
					case 3: {
						type[0]='I';
						type[1]='X';
						type[2]='A';
						break;
					}
					default: {
						goto loop2;
					}
					clrscr();
					print("————————（难得的晴天）船坞里————————");
					print("Wilson：准备好了，我的朋友？选一艘你喜欢的潜艇吧！\n");
					print(player);
					print("：我要Type ");
					print(type);
					print("的！这艘怎么样？(指向旁边的一艘U艇）\n");
					print("Wilson:好嘛我的朋友，你挺有眼光的嘛，我也很喜欢Type ");
					print(type);
					print("的艇。这艘船归你了我的艇长\n");
					break;
				}
				case 1940: {
					if(month<1||month>12)goto loop1;
					break;
				}
				case 1941: {
					if(month<1||month>12)goto loop1;
					break;
				}
				case 1942: {
					if(month<1||month>12)goto loop1;
					break;
				}
				case 1943: {
					if(month>6||month>12)goto loop1;
					break;
				}
				default: goto loop1;
			}
		}
	}
}
