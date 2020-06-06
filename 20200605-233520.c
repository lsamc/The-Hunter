#include<conio.h>
#include<stdio.h>

#define LINE 20
#define COLUMN 100

char TextBuff[LINE][COLUMN],player[50],type[6];;
int line=0,choose;

int isID(char *s) {
	int flag=0;
	int i=0;
	for (i=0;s[i];i++) {
		if(!isdigit(s[i])) return 0;
	}
	return 1;
}


void print(char* s) {
	int i=0;
	for (;s[i];i++) {
		printf("%c",s[i]);
  TextBuff[line][i]=s[i];
		sleep(0.1);
  if(s[i]=='\n')line++;
	}
 sleep(1);
}

void printBuff(){
    for(int i=0;i<line;i++){
        for(int j=0;TextBuff[i][j];j++){
            printf("%c",TextBuff[i][j]);
        }
    }
}
void decreaseLine(){
    for(int j=0;TextBuff[line][j];j++)TextBuff[line][j]=NULL;
    line--;
}

void clean()
{
    printf("press any key to continue.(Maybe two times)");
    getch();
    getch();
    clrscr();
    for(int i=0;i<LINE;i++){
        for(int j=0;j<COLUMN;j++){
            TextBuff[i][j]=NULL;
        }
    }
    line=0;
}

void event1939(int month){
    clrscr();
    printBuff();
    printf("%s:我打算1939年%d月在这里服役\n",player,month);
				print("Wilson:这么心急？好！帝国正需要你这样的热心人才！\n");
				sleep(1);
				print("Wilson:你正是我所期盼的那样！那么，稍作休整，就出征吧。帝国以你为傲！\n");
				sleep(1);
				print(player);
				print(":Heil Hitler!（高举左手）\n");
				clean();
				if(month>9) {
					printf("%d",month-9);
					printf("个月后...\n");
					sleep(3);
				}
				if(0) loop2: print("(如果这是第2次及以上问你，那应该是你之前输入了不合要求的时间)\n");
				print("————————（难得的晴天）船坞里————————\n");
				print("Wilson：准备好了，我的朋友？选一艘你喜欢的潜艇吧！\n");
				print("船坞里有三种型号的潜艇：VIIA，VIIB，IXA\n");
				sleep(1);
				print("(1.VIIA	2.VIIB	3.IXA)\n");decreaseLine();
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
				}
				clrscr();
				printBuff();
				printf("%s：我要Type %s！这艘怎么样？(指向旁边的一艘U艇）\n",player,type);sleep(2);
				printf("Wilson:好嘛我的朋友，你挺有眼光的嘛，我也很喜欢Type %s的艇。\n",type);sleep(3);
    print("这艘船归你了我的艇长\n");
    print("（指向旁边）这是我们帝国第一批优秀的艇员——他们都受过足够的训练\n");
    printf("Peter:你好，%s先生哦不艇长,我和Eric,Leo,Tommy是这艘艇的士官长\n"，player);sleep(2);
    print("Dr:我知道你记不下来那么多名字，你就叫我Dr吧，我是这艘艇的医生\n");
    print("1WO:我是这艘艇的大副\n");
    print("2WO:我是这艘艇的二副\n");
    print("LI:我是这艘艇的随舰工程师\n");
    print("Wilson:够多人了？要不是有那4个士官长，你还需要和39个其他艇员打招呼！\n");
    print("好了别担心，你们航程上有的是时间互相熟悉！\n");
    print("这些将是要和你一起战斗的伙伴,记住，就连最基础的每一个艇员，都将是你们在大西洋底生存的保障\n");
    printf("好了我的朋友，出征吧，祝你好运！");
    clean();
}
void main() {
	print("————————欢迎来到《潜杀猎航》————————\n*********************************\n");
	print("哨兵前台:这里是大德意志大西洋海军司令部，请出示身份证明(姓名或ID):\n");
	scanf("%s",&player);
	if(isID(player)) {
		printf("哨兵前台:你好,%s指挥官",player);sleep(1);

	} 

 else {
		printf("哨兵前台:哦！是%s先生啊，你终于来了，Wilson部长在等你!\n",player);sleep(1);
		print("进门左转，将会有人带你去见部长先生\n");
		clean();


		print("咚咚咚...\n");
		sleep(2);
		print("Wilson:请进\n");
		print(player);
		print("前来报道!\n");
		clean();

		print("————————部长办公室————————\n");
		print("Wilson:哦？是");
		print(player);
		print("先生啊，欢迎欢迎，请坐。\n");
		sleep(1);
		print("Wilson:元首向我提到过你，一名优秀的海军军官。\n");
  print("现在想做一名U艇指挥官了？\n");
		sleep(1);
		print("你想什么时间加入我们潜艇计划？（1939.09-1943.06）\n");
		int year,month;
		if(0)loop1: printf("(如果这是第2次及以上问你，那应该是你之前输入了不合要求的时间)\n");		print("年份？（1939-1943）:");decreaseLine();
		scanf("%d",&year);
		print("\n月份？（1-12,注意从1939年9月开始，至1943年6月结束）:");decreaseLine();
		scanf("%d",&month);
		
		switch(year) {
			case 1939: {
				if(month<9||month>12)goto loop1;
    event1939(month);
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