#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

#define LINE 20
#define COLUMN 150

char TextBuff[LINE][COLUMN],player[50],type[6];
int line=0,choose;

int isID(char *s) 
{
	int flag=0;
	int i=0;
	for (i=0;s[i];i++) 
	{
		if(!isdigit(s[i])) return 0;
	}
	return 1;
}


void print(char* s)
{
	int i=0;
	for (;s[i];i++) 
	{
		printf("%c",s[i]);
		TextBuff[line][i]=s[i];
		sleep(0.1);
		if(s[i]=='\n')line++;
	}
	sleep(1);
}

void printBuff()
{
	for(int i=0;i<line;i++)
	{
		for(int j=0;TextBuff[i][j];j++)
		{
			printf("%c",TextBuff[i][j]);
		}
	}
}
void decreaseLine()
{
	for(int j=0;TextBuff[line][j];j++)TextBuff[line][j]=NULL;
	line--;
}

void clean()
{
	printf("press any key to continue.(Maybe two times)");
	getch();
	getch();
	clrscr();
	for(int i=0;i<LINE;i++)
	{
		for(int j=0;j<COLUMN;j++)
		{
			TextBuff[i][j]=NULL;
		}
	}
	line=0;
}

void introduce(char* type,int year,int first){
	clean();
	if(first==1) goto loop3;


	helploop:printf("1.关于鱼雷\t2.关于CONVOY\t3.怎么攻击军舰\t4.狼群战是什么\n5.综述\t6.没问题了\t更新中...");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:
			{
				print("潜艇一般均匀地携带 G7A（蒸汽）,G7E（电力）两种型号的鱼雷。\n");
				print("前者速度快，命中率高。\n");
				print("后者速度慢，射不远，但是没有气泡尾迹，让护航船只不能顺藤摸瓜找到潜艇，适合白天使用降低被侦查到的可能。\n");
				print("初始的装载鱼雷总是G7A 型号；VII 只能装载最多 5 个G7E；\n");
				print("这是因为G7E 型号的鱼雷需要额外的保养，不能长时间放在发射管中，因此第一枚鱼雷往往是 G7A\n");
				goto helploop;
			}
		loop3:case 5:
			{
				print("作为一个德军 U 型潜艇的指挥官，你的目的在于实施大量的巡航并且击沉敌舰。\n");
				print("每一次出击是否成功由你击沉的总吨位决定，进而决定你的升职和艇员的经验积累，最终可以获得你垂涎已久的骑士铁十字勋章。\n");
				print("你的潜艇将面临无情的危险，因为巡航任务会变得愈加的艰难（包括比斯开湾和直布罗陀海峡）。\n");
				print("你最终的成功很大程度上取决于你职业生涯中巡逻时刻所做的每一个抉择。\n");
				print("游戏最终的胜利等级取决于你总共击沉的吨位数，如果你在一次行动中死了，那就死后立即结算吧。\n");
				print("一般而言，剧本围绕实行大量的巡逻任务，解决遭遇战，直到安全的返回港口为止。\n");
				print("每次任务完成，你用航海日志评估自己所取得的成就，决定自己的升职与奖励，以及艇员的晋升。\n");
				print("两次任务之间，潜艇会被修正一个或几个月，这要视受损情况而决定。\n");
				print("如果受伤，你也需要疗伤直到可以参加下一次巡航。\n\n");
				print("想要了解更多吗？你在以后回港时也可以输入'help'来查看帮助\n");
				goto helploop;
			}
		default:
			{
				break;
			}


	}
	clean();

}

void event1939(int month){
	clrscr();
	printBuff();
	printf("我:我打算1939年%d月在这里服役\n",month);sleep(1);
	print("Wilson:这么心急？好！帝国正需要你这样的热心人才！\n");
	print("你正是我所期盼的那样！");
	print("这是你的潜艇军官证，好好保管！这是属于你的荣耀！\n\n");
	srand(time(0));
	int ID = rand() % (9000)+999;

	printf("****************************\n");
	printf("**名字\tID\t服役时间\t\t**\n");
	printf("**%s\t%d\t1939.%d\t**\n",player,ID,month);
	printf("****************************\n");

	print("那么，稍作休整，就出征吧。帝国以你为傲！\n");
	print("我:Heil Hitler!（高举左手）\n");
	clean();
	if(month>9) 
	{
		printf("%d",month-9);
		printf("个月后...\n");
		sleep(3);
	}
	if(0) loop2: print("(如果这是第2次及以上问你，那应该是你之前输入了不合要求的时间)\n");
	print("————————————（难得的晴天）船坞里————————————\n");
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
	printf("我：我要Type %s！这艘怎么样？(指向旁边的一艘U艇）\n",type);sleep(2);
	printf("Wilson:好嘛我的朋友，你挺有眼光的嘛，我也很喜欢Type %s的艇。\n",type);sleep(3);
	print("这艘船归你了我的艇长\n");
	print("（指向旁边）这是我们帝国第一批优秀的艇员——他们都受过足够的训练\n");
	printf("Peter:你好，%s先生哦不艇长,我和Eric,Leo,Tommy是这艘艇的士官长\n"，player);sleep(2);
	print("Eric,Leo,Tommy:Hi!");
	print("Dr:我知道你记不下来那么多名字，你就叫我Dr吧，我是这艘艇的医生\n");
	print("1WO:我是这艘艇的大副\n");
	print("2WO:我是这艘艇的二副\n");
	print("LI:我是这艘艇的随舰工程师\n");
	print("Wilson:够多人了？要不是有那4个士官长，你还需要和39个其他艇员打招呼！\n");
	print("好了别担心，你们航程上有的是时间互相熟悉！\n");
	print("这些将是要和你一起战斗的伙伴,记住，就连最基础的每一个艇员，都将是你们在大西洋底生存的保障\n");
	printf("好了我的朋友，出征吧，祝你好运！");
	print("众：Heil Hitler！\n");
	clean();

	print("————————————潜艇里————————————\n");
	print("Eric:先生，请允许我来为您介绍一下这艘艇。\n");
	print("我：好，你说吧。");
	print("Eric:VIIA是德军第一批潜艇型号，乘员44人，\n");
	print("共携带鱼雷11发，前鱼雷管4发，前鱼雷装填区5发，后鱼雷管1发，后鱼雷装填区1发。\n");
	introduce(type,1939,1);
	

}
void main() 
{
	print("————————————欢迎来到《潜杀猎航》————————————\n*********************************\n");
	print("哨兵前台:这里是大德意志大西洋海军司令部，请出示身份证明(姓名或ID):\n");
	scanf("%s",&player);
	if(isID(player))
	{
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

		print("————————————部长办公室———————————\n");
		print("哦？先生，欢迎欢迎，请坐。\n");
		sleep(1);
		print("Wilson:元首向我提到过你，一名优秀的海军军官。\n");
		print("现在想做一名U艇指挥官了？\n");
		sleep(1);
		print("你想什么时间加入我们潜艇计划？（1939.09-1943.06）\n");
		int year,month;
		if(0)loop1: printf("(如果这是第2次及以上问你，那应该是你之前输入了不合要求的时间)\n");		
		print("年份？（1939-1943）:");decreaseLine();
		scanf("%d",&year);
		print("\n月份？（1-12,注意从1939年9月开始，至1943年6月结束）:");decreaseLine();
		scanf("%d",&month);

		switch(year)
		{
			case 1939: 
				{
					if(month<9||month>12)goto loop1;
					event1939(month);
					break;
				}
			case 1940: 
				{
					if(month<1||month>12)goto loop1;
					break;
				}
			case 1941: 
				{
					if(month<1||month>12)goto loop1;
					break;
				}
			case 1942: 
				{
					if(month<1||month>12)goto loop1;
					break;
				}
			case 1943: 
				{
					if(month>6||month>12)goto loop1;
					break;
				}
			default: goto loop1;
		}
	}
}
