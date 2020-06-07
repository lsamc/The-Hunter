#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define LINE 20
#define COLUMN 150
#define id_ id
#define year_ year
#define month_ month
#define level_ rank

int tons=0,damage_status,level,expert_level,Tingyuan_level,xunhang_process;
char names[110][110],junxian[110];

char TextBuff[LINE][COLUMN],player[50],type[6],;
char mission[9][20]={"西班牙海岸","英吉利海峡","挪威","大西洋","西非海岸","地中海","北美","北极","加勒比海"};
char missionType[4][20]={"布置海雷","狼群行动","护送特工","水域巡航"};
int line=0,choose,year,month,typeNumber,id,rank,process[2];
/*1.VIIA
 *2.VIIB
 *3.IXA
 *4.IXB
 *5.VIIC
 *6.IXC
 *7.VIID
 *8.VIICFk
*/
void create_text(int target)
{
	char wcnm[110];
	FILE *fnmdp;
	itoa(target,wcnm,10);
	int wei=0;
	for(;wcnm[wei];wei++);
	wcnm[wei]='.';wcnm[wei+1]='t';wcnm[wei+2]='x';wcnm[wei+3]='t';
	fnmdp=fopen(wcnm,"w+");
	fclose(fnmdp);
}

void write_data()
{
	FILE *fp;
	
	char *ID;
	int i;
	itoa(id,ID,10);
	for(;ID[i];i++);
	ID[i]='.';
	ID[i+1]='t';
	ID[i+2]='x';
	ID[i+3]='t';
	
	fp=fopen(ID, "r+");
	fprintf(fp,"year: %d\n",year_);
	fprintf(fp,"month: %d\n",month_);
	fprintf(fp,"tons: %d\n",tons);
	fprintf(fp,"names: ");
	int i=0;
	for(;names[i][0];i++) fprintf(fp,"%s%c",names[i],"\n,"[names[i+1][0]]);
	fprintf(fp,"damage_status: %d\n",damage_status);
	fprintf(fp,"junxian: %s\n",junxian);
	fprintf(fp,"level: %d\n",level_);
	fprintf(fp,"expert_level: %d\n",expert_level);
	fprintf(fp,"Tingyuan_level: %d\n",Tingyuan_level);
	fprintf(fp,"xunhang_process: %d\n",xunhang_process);
	fclose(fp);
}
void read_data(char *PATH)
{
	FILE *fp;
	fp=fopen(PATH, "r+");
	if(fp==NULL){printf("数据库错误！");return;}
	char tmp[110],data[110];
	int nmsl=0;
	while(nmsl<11)
	{
		nmsl++;
		fscanf(fp,"%s",tmp);
		fscanf(fp,"%s",data);
		if(!tmp[0]) break;
		
		if(tmp[0]=='y')
		{
			int i=0;
			year_=0;
			for(;data[i];i++)year_=year_*10+(data[i]^48);
		}
		else if(tmp[0]=='m')
		{
			int i=0;
			month_=0;
			for(;data[i];i++)month_=month_*10+(data[i]^48);
		}
		else if(tmp[0]=='t')
		{
			int i=0;
			tons=0;
			for(;data[i];i++)tons=tons*10+(data[i]^48);
		}
		else if(tmp[0]=='n')
		{
			int lst=0;
			int i=0,j=0;
			for(;data[i];i++,j++)
			{
				if(data[i]==',')lst++,j=0;
				else names[lst][j]=data[i];
			}
		}
		else if(tmp[0]=='d')
		{
			int i=0;
			damage_status=0;
			for(;data[i];i++)damage_status=damage_status*10+(data[i]^48);
		}
		else if(tmp[0]=='j')
		{
			int i=0;
			for(;data[i];i++)junxian[i]=data[i];
		}
		else if(tmp[0]=='l')
		{
			int i=0;
			level_=0;
			for(;data[i];i++)level_=level_*10+(data[i]^48);
		}
		else if(tmp[0]=='e')
		{
			int i=0;
			expert_level=0;
			for(;data[i];i++)expert_level=expert_level*10+(data[i]^48);
		}
		else if(tmp[0]=='T')
		{
			int i=0;
			Tingyuan_level=0;
			for(;data[i];i++)Tingyuan_level=Tingyuan_level*10+(data[i]^48);
		}
		else if(tmp[0]=='x')
		{
			int i=0;
			xunhang_process=0;
			for(;data[i];i++)xunhang_process=xunhang_process*10+(data[i]^48);
		}
	}
	fclose(fp);
}
void Debug()
{
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",id_,year_,month_,tons,damage_status,level_,expert_level,Tingyuan_level,xunhang_process);
}

int roll(int dies)
{
    int re=0;
    for(int i=0;i<dies;i++)
    {
        re+=(rand()%6+1);
    }
    return re;
}
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

void introduce(char* type,int first)
{
	if(first==1) goto loop3;
	
	helploop:clean();	
	
	printf("1.关于鱼雷\t2.关于CONVOY\t3.怎么攻击军舰\t4.狼群战是什么\n5.综述\t6.没问题了\t更新中...");
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
		case 2:
			{	
				print("有护航的船只和护航舰队不是一回事，\n");
	  	print("前者是你遭遇的普通船只的状态，后者是你遭遇了一个叫CONVOY 的东西，\n");
				print("CONVOY 没有比较好地中文对应词，它的意思是大型的护航运输船队。\n");
				print("两者在游戏中处理方式是不一样的。后者用 CONVOY护航舰队来代之以防混淆\n");
    clean();
				print("与有护航船只和 convoy 护航舰队的遭遇一般而言是很危险的，尤其是当你决定近距离攻击（这时敌方的侦查先手于你的鱼雷）\n");
			 print("护航敌军有一定几率侦查到你的潜艇，一旦被侦查，你的潜艇会被反复的深水攻击直到你逃离他们的侦查范围。\n");
				print("你也可以试着深潜来摆脱追踪。但潜艇和人员的受伤会让你更加危险。\n");
				goto helploop;
			}
		case 3:
			{	
				print("你可能会问为什么潜艇只被允许攻击商船而不能攻击护航。\n");
				print("其实这只是大西洋上的特有现象，在太平洋上美军潜艇大战驱逐舰是很常见的。\n");
				print("在大西洋上，每一枚没有命中商船的鱼雷都是一种浪费，\n");
				print("因为德国高层知道他们搞不过英国海军，因此即便击沉了几艘小军舰也没什么意义。\n");
				print("但是对于 capitalship 大型军舰而言， 由于巨大的宣传效应，所以是被允许的。\n");
	  			print("对于驱逐舰或者其他护航船只的攻击，一方面很危险，一方面很浪费\n");
				goto helploop;
			}
		case 4:
			{	
				print("U 型潜艇经常以一种有组织的狼群战术来攻击护航的船队， \n");
				print("当一个潜艇发现了护航船队时会首先向舰队的总指挥汇报，总指挥召集附近的所有潜艇同时发动更为猛烈的打击\n");
				goto helploop;
			}
		loop3:case 5:
			{
    switch(typeNumber)
    {
        case 1:
            {
                print("VIIA是德军第一批潜艇型号，乘员44人，\n");
	               print("共携带鱼雷11发，前鱼雷管4发，前鱼雷装填区5发，后鱼雷管1发，后鱼雷装填区1发。\n");
                break;
            }
        //其他型号
        default:printf("型号错误");
    }
    
    
    clean();
				print("作为一个德军 U 型潜艇的指挥官，你的目的在于实施大量的巡航并且击沉敌舰。\n");
				print("每一次出击是否成功由你击沉的总吨位决定，进而决定你的升职和艇员的经验积累，最终可以获得你垂涎已久的骑士铁十字勋章。\n");
				print("你的潜艇将面临无情的危险，因为巡航任务会变得愈加的艰难（包括比斯开湾和直布罗陀海峡）。\n");
				print("你最终的成功很大程度上取决于你职业生涯中巡逻时刻所做的每一个抉择。\n");
				print("游戏最终的胜利等级取决于你总共击沉的吨位数，如果你在一次行动中死了，那就死后立即结算吧。\n");
    clean();
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

void day(char* place,int times)
{
    int pl;                             
   /*1.北极
    *2.大西洋
    *3.英吉利海峡
    *4.加勒比海
    *5.西非海岸
    *6.地中海
    *7.北美
    *8.挪威
    *9.西班牙海岸
    *10.途中
    */
    if(strcmp(place,"比斯开湾")||strcmp(place,"路上"))pl=10;
    else if(strcmp(place,"西班牙海岸"))pl=9;
    else if(strcmp(place,"挪威"))pl=8;
    else if(strcmp(place,"北美"))pl=7;
    else if(strcmp(place,"地中海"))pl=6;
    else if(strcmp(place,"西非海岸"))pl=5;
    else if(strcmp(place,"加勒比海"))pl=4;
    else if(strcmp(place,"英吉利海峡"))pl=3;
    else if(strcmp(place,"大西洋"))pl=2;
    else if(strcmp(place,"北极"))pl=1;
    else printf("程序故障");
    
    int meet=roll(2);
    switch(pl)
    {
        case 10:
            {
            }
    }
}

void rest(){
	
}

void theEnd(){
	
}

void execMission(int mN,int mT)
{
    switch(mN)
    {
        case 0:
        {
            switch(typeNumber)
            {
                case 1:
                    {
                        process[0]=0;
                        process[1]=7;
                        day("比斯开湾",1);
                        day("路上",1);
                        day("西班牙海岸",1);
                        day("西班牙海岸",1);
                        day("西班牙海岸",1);
                        day("路上",1);
                        day("比斯开湾",1);
                        break;
                    }
            }
        }
    }
    if(month==12){month=1;year++;}
    else month++;
}
void patrol()
{		//working...
    int mNumber=roll(2);
    int mName;
    int mType;
    
	    if(year==1939||((year==1940)&&(month<4)))
        {
            switch(mNumber)
            {
                case 2:
                    {
                        mName=0;
                        mType=3;
                        break;
                    }
                case 3:;
                case 4:;
                case 5:;
                case 6:;
                case 7:;
                case 8:;
                case 9:
                    {
                        mName=1;
                        mType=3;
                        break;
                    }
                case 10:;
                case 11:
                    {
                        mName=1;
                        mType=0;
                        break;
                    }
                case 12:
                    {
                        mName=4;
                        mType=3;
                        break;
                    }
                default:
                    {
                        printf("程序故障,报错");
                    }
            }
        }
        else
        {
            //待一会做
            
            
            
            
        }
        printf("我：我们要去%s执行%s任务了！\n",mission[mName],missionType[mType]);
        printf("Eric:是！（敬礼）\n");
        clean();
        
        execMission(mNumber,mType);
        rest();
}

void event1939(){
	clrscr();
	printBuff();
	printf("我:我打算1939年%d月在这里服役\n",month);sleep(1);
	print("Wilson:这么心急？好！帝国正需要你这样的热心人才！\n");
	print("你正是我所期盼的那样！");
	print("这是你的潜艇军官证，好好保管！这是属于你的荣耀！\n\n");

	id=rand()%900+100;
	printf("**************************\n");
	printf("**名字\tID\t服役时间**\n");
	printf("**%s\t%d\t1939.%d\t**\n",player,id,month);
	printf("**************************\n");
 	printf("系统提示:请一定记住您的ID号!它是您的唯一身份标识!\n");
	create_text(id);
	write_data();
	
	sleep(5);
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
			strcpy(type,"VIIA");
   typeNumber=1;
			break;
		}
		case 2: {
			strcpy(type,"VIIB");
   typeNumber=2;
			break;
		}
		case 3: {
   strcpy(type,"IXA");
   typeNumber=3;
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
 clean();
	print("（指向旁边）这是我们帝国第一批优秀的艇员——他们都受过足够的训练\n");
	printf("Peter:你好，%s先生哦不艇长,我和Eric,Leo,Tommy是这艘艇的士官长\n",player);sleep(2);
	print("Eric,Leo,Tommy:Hi!\n");
	print("Dr:我知道你记不下来那么多名字，你就叫我Dr吧，我是这艘艇的医生\n");
	print("1WO:我是这艘艇的大副\n");
	print("2WO:我是这艘艇的二副\n");
	print("LI:我是这艘艇的随舰工程师\n");
	print("Wilson:够多人了？要不是有那4个士官长，你还需要和39个其他艇员打招呼！\n");
	print("好了别担心，你们航程上有的是时间互相熟悉！\n");
	print("这些将是要和你一起战斗的伙伴,记住，就连最基础的每一个艇员，都将是你们在大西洋底生存的保障\n");
	printf("好了我的朋友，出征吧，祝你好运！\n");
	print("众：Heil Hitler！\n");
	clean();

	print("————————————潜艇里————————————\n");
	print("Eric:先生，请允许我来为您介绍一下这艘艇。\n");
	print("我：好，你说吧。\n");
	introduce(type,1);
	print("我：好吧，我清楚了，起航！");

	do{patrol();}while(year<1943||((year==1943)&&(month<7)));
 theEnd();
}
void main() 
{

 	srand((unsigned)time(NULL));
	print("————————————欢迎来到《潜杀猎航》————————————\n********************************************\n");
	print("哨兵前台:这里是大德意志大西洋海军司令部，请出示身份证明(姓名或ID):\n");
	scanf("%s",player);
	if(isID(player))
	{

		char *PATH;
		PATH=player;
		for(;PATH[i];i++);
		PATH[i]='.';PATH[i+1]='t';PATH[i+2]='x';
		PATH[i+3]='t';
		read_data(PATH);
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
					event1939();
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
