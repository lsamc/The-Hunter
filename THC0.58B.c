#include<conio.h>
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	#define LINE 20
	#define COLUMN 150


	struct shipSort
{
	int shipKind;//1.Small Ship,2.Large Ship,3.Tanker
	int shipId;
	unsigned int shipTons;
	char shipName[20];
};

struct shipSort ship[3][100]={
	{
		{1,1,1800,"Bosnia"},			{1,26,3600,"Aenos"},			{1,51,3500,"Baron Pentland"},		{1,76,2600,"City of Oxford"},
		{1,2,4100,"Rio Claro"},			{1,27,3100,"Clintonia"},		{1,52,2000 ,"Scania"},				{1,77,2600,"Thurso"},
		{1,3,1800,"Gartavon"}, 			{1,28,4700,"Stratford"},		{1,53,4700 ,"Tuva"}, 				{1,78,4400,"Frederika Lensen"},
		{1,4,4800,"Royal Sceptre"},		{1,29,2700,"Vingaland"} ,		{1,54,3200 ,"Hatasu"}, 				{1,79,2100,"Bluefields"},
		{1,5,4500,"Blairlogie"}, 		{1,30,3700,"Kyleglen"}, 		{1,55,5000 ,"Lehigh"},				{1,80,4800,"Navarino"},
		{1,6,4900,"Firby"}, 			{1,31,4800,"Bassano"},			{1,56,4900 ,"Ashby"}, 				{1,81,1100,"Viking"},
		{1,7,4000,"Aviemore"},			{1,32,4900,"Thirlby"},			{1,57,5000 ,"Empire Barracuda "},	{1,82,5000,"Broompark"},
		{1,8,5000,"Kafiristan"}, 		{1,33,2000,"Daphne"}, 			{1,58,4800 ,"Cassequel "},			{1,83,4400,"Condylis"},
		{1,9,1000,"Truro"}, 			{1,34,2700,"Tweed"},			{1,59,3300 ,"Annavore "},			{1,84,3300,"Balladier"},
		{1,10,2700,"Akenside"}, 		{1,35,5000,"Esmond"}, 			{1,60,3000 ,"Thorstrand "},			{1,85,1600,"Trolla"},
		{1,11,5000,"Stonepool"}, 		{1,36,2600,"Bengore Head"}, 	{1,61,3000 ,"Culebra"}, 			{1,86,4600,"Shaftesbury"},
		{1,12,5000,"Winkleigh"}, 		{1,37,4700,"Starcross"}, 		{1,62,4100 ,"Olinda"},			 	{1,87,3300,"Arlyn"},
		{1,13,2500,"Stanholme"}, 		{1,38,5000,"Alfred Jones"}, 	{1,63,3100 ,"Ontario"}, 			{1,88,4700,"Aeas"},
		{1,14,5000,"Arlington Court"},	{1,39,5000,"Pandias"}, 			{1,64,2400 ,"Torny"}, 				{1,89,2200,"Caribou"},
		{1,15,5000,"Sliedrecht"}, 		{1,40,4000,"Rio Azul"},			{1,65,5000 ,"Ogontz"}, 				{1,90,4700,"Woensdrecht"},
		{1,16,5000,"Counsellor"}, 		{1,41,3000,"Robert L. Holt"} ,	{1,66,5000 ,"Carabulle"}, 			{1,91,1200,"Antonico"},
		{1,17,5000,"Sheaf Mead"}, 		{1,42,4400,"Soloy"},			{1,67,5000 ,"Goncalves Dias"}, 		{1,92,4400,"Bancrest"},
		{1,18,2100,"Merisaar"},			{1,43,4800,"Vigrid"},			{1,68,4600 ,"Willimantic"}, 		{1,93,4200,"Marcrest"},
		{1,19,4000,"Stakesby"}, 		{1,44,5000,"Kinross"},			{1,69,3500 ,"Denmark"}, 			{1,94,4800,"Daydawn"},
		{1,20,4200,"Gro"}, 				{1,45,4400,"Nicolas Pateras"}, 	{1,70,4500 ,"Pontypridd"}, 			{1,95,4100,"Dayrose"},
		{1,21,2400,"Mardinian"}, 		{1,46,1300,"Erato"},			{1,71,1300 ,"Anna"}, 				{1,96,4600,"Dalcroy"},
		{1,22,3700,"Baron Blythswod"},	{1,47,5000,"Kumasian"},			{1,72,4900 ,"Rio Tercero"}, 		{1,97,2000,"Sea Glory"},
		{1,23,3700,"Graigwen"}, 		{1,48,4500,"Cape Rodney "},		{1,73,4600 ,"Leonidas M."},			{1,98,2300,"Sea Venture"},
		{1,24,1800,"Trevisa"}, 			{1,49,1200,"Clantara"},			{1,74,5000 ,"Nordal"},			 	{1,99,3700,"Baron Dechmont"},
		{1,25,3800,"Scoresby"}, 		{1,50,2100,"Spind"},			{1,75,5000 ,"Manuela"}, 			{1,100,4800,"Reedpool"}
	},
	{		
		{2,1,12300,"Sultan Star"},		{2,26,7500,"Moh. Ali-Kebir"},			{2,51,7600,"Kingston Hill"},		{2,76,6200,"Fairport"},
		{2,2,5300,"SS Browning"},		{2,27,7500,"Ville de Mons"},			{2,52,11000,"Norfolk"},				{2,77,5600,"Seattle Spirit"},
		{2,3,7200,"Manaar"},			{2,28,9000,"Titan"},					{2,53,5300,"Brockley Hill"},		{2,78,8400,"Port Nicholson"},
		{2,4,5200,"Fanad Head"},		{2,29,5200,"Neptunian"},				{2,54,6300,"Grayburn"},				{2,79,7100,"Santore"},
		{2,5,5500,"Kennebec"},			{2,30,5200,"Jose de Larrinaga"},		{2,55,6000,"Anselm"},				{2,80,5900,"Cherokee"},
		{2,6,7000,"Louisiane"},			{2,31,11100,"City of Benares"},			{2,56,11300,"Abosso"},				{2,81,5500,"West Notus"},
		{2,7,9200,"Lochavon"},			{2,32,6900,"Corrientes"},				{2,57,5400,"Harlingen"},			{2,82,6300,"Polyphemus"},
		{2,8,10000,"Bretagne"},			{2,33,9300,"Hurunui"},					{2,58,7500,"Empire Hudson"},		{2,83,6800,"Berganger"},
		{2,9,5200,"Vermont"},			{2,34,4230," Empress of Britain"},		{2,59,7500,"Empire Wave"},			{2,84,6000,"Raphael Semmes"},
		{2,10,7200,"City of Mandalay"},	{2,35,5400,"Balzac"},					{2,60,9500,"Vancouver Island"},		{2,85,5900,"City of Birmingham"},
		{2,11,10000,"Yorkshire"},		{2,36,5400,"Matina"},					{2,61,6700,"Treverbyn"},			{2,86,6800,"Moldanger"},
		{2,12,7200,"Clan Chisholm"},	{2,37,18700,"Laurentic"},				{2,62,5100,"King Malcolm"},			{2,87,8600,"Surrey"},
		{2,13,8000,"Malabar"},			{2,38,7500,"Ville d’ Arlon"},			{2,63,8500,"Nottingham"},			{2,88,5900,"Port Montreal"},
		{2,14,5300,"Bronte"},			{2,39,10900,"Rotorua"},					{2,64,5300,"Silverbelle"},			{2,89,8400,"Santa Rita"},
		{2,15,9900,"Beaverburn"},		{2,40,10100,"Napier Star"},				{2,65,6300,"Sagadahoc"},			{2,90,7200,"Alexander Macomb"},
		{2,16,7000,"Rothesay Castle"},	{2,41,6000,"Empire Thunder"},			{2,66,5600,"Thornliebank"},			{2,91,8300,"Chilore"},
		{2,17,6300,"Gustaf E. Reuter"},	{2,42,1060," Zealandic"},				{2,67,14600,"Ulysses"},				{2,92,7200,"William C Bryant"},
		{2,18,8800,"Navasota"},			{2,43,7500,"Ville d’ Liege"},			{2,68,12000,"Llangibbey Castle"},	{2,93,8100,"Umtata"},
		{2,19,6700,"Brandon"},			{2,44,5400,"Athenic"},					{2,69,5200,"Buarque"},				{2,94,7200,"Thomas McKean"},
		{2,20,8200,"Tajandoen"},		{2,45,10300,"Calchas"},					{2,70,7000,"Empire Howard"},		{2,95,5200,"Robert E. Lee"},
		{2,21,5100,"Royston Grange"},	{2,46,10100,"Beacon Grange"},			{2,71,6900,"Empire Comet"},			{2,96,6400,"Triglav"},
		{2,22,5200,"Cedarbank"},		{2,47,8900,"Port Hardy"},				{2,72,10000,"Jagersfontein"},		{2,97,6400,"Peiping"},
		{2,23,9600,"Protesilaus"},		{2,48,10300," Ixion"},					{2,73,6700,"Parnahyba"},			{2,98,7500,"Empire Tide"},
		{2,24,10500,"Brazza"},			{2,49,5900,"Gregalia"},					{2,74,5700,"Steel Engineer"},		{2,99,7200,"William Hooper"},
		{2,25,5200,"Clearton"},			{2,50,11800,"Rodney Star"},				{2,75,8000,"Scottsburg"},			{2,100,5500,"River Afton"}


	},

	{
		{3,1,9400,"Inverliffey"},			{3,26,6700,"La Brea"},				{3,51,12000,"Cadillac"},		{3,76,6200,"Ensis"},
		{3,2,10000,"Regent Tiger"},			{3,27,7500,"Pecten"},				{3,52,6600,"Athelbeach"},		{3,77,9500,"Kongsgaard"},
		{3,3,8500,"British Influence"},		{3,28,8400,"British Fame"},			{3,53,6200,"Erodona"},			{3,78,8800,"Maasdam"},
		{3,4,8800,"Cheyenne"},				{3,29,5800,"Sarita"},				{3,54,9300,"Franche Comte"},	{3,79,8700,"Malaya II"},
		{3,5,14000,"Emile-Miguet"},			{3,30,9200,"Invershannon"},			{3,55,6600,"Fern"},				{3,80,8000,"Anadara"},
		{3,6,11000,"Arne Kjode"},			{3,31,10000,"Torinia"},				{3,56,8100,"Beduin"},			{3,81,7500,"Bulysses"},
		{3,7,7400,"San Alberto"},			{3,32,10000,"Frederick S. Fales"},	{3,57,5700,"Venetia"},			{3,82,6500,"Tahchee"},
		{3,8,5000,"Vaclite"},				{3,33,7000,"British General"},		{3,58,8700,"Castor"},			{3,83,12800,"San Florentino"},
		{3,9,5200,"Chastine Maersk"},		{3,34,7000,"Nina Borthen"},			{3,59,7000,"British Reliance"},	{3,84,8200,"T.J. Williams"},
		{3,0,8000,"Ceronia"},				{3,35,7100,"Davanger"},				{3,60,6900,"British Viscount"},	{3,85,6300,"Barbro"},
		{3,11,7800,"Caroni River"},			{3,36,9500,"Languedoc"},			{3,61,8000,"Chama"},			{3,86,15000," Svend Foyn"},
		{3,12,9000,"Den Haag"},				{3,37,13900,"New Sevilla"},			{3,62,8100,"Conus"},			{3,87,9600,"W.C. Teagle"},
		{3,13,8000,"Imperial Transport"},	{3,38,5400,"Casanare"},				{3,63,5600,"Lincoln Ellsworth"},{3,88,6600,"Erviken"},
		{3,14,5700,"Daghestan"},			{3,39,7000,"Scottish Maiden"},		{3,64,8500,"Duffield"},			{3,89,9800,"Barfonn"},
		{3,15,2600,"Leticia"},				{3,40,5000,"Congonian"},			{3,65,8200,"Capulet"},			{3,90,9000,"Salinas"},
		{3,16,13000,"San Fernando"},		{3,41,7600,"Havbor"},				{3,66,8900,"Oilfield"},			{3,91,7000,"I.C. White"},
		{3,17,10000,"Italia"},				{3,42,8800,"Appalachee"},			{3,67,9900,"Caledonia"},		{3,92,9200,"Inverlee"},
		{3,18,9000,"Eli Knudsen"},			{3,43,12200,"Victor Ross"},			{3,68,6100,"John P. Pederson"},	{3,93,7500,"Sagona"},
		{3,19,12000,"Saranac"},				{3,44,5900,"British Premier"},		{3,69,8500,"British Security"},	{3,94,8100,"Darkdale"},
		{3,20,7500,"Moerdrecht"},			{3,45,9000,"Charles Pratt"},		{3,70,8100,"Cairndale"},		{3,95,7000,"British Mariner"},
		{3,21,9000,"Athellaird"},			{3,46,10500,"W.B. Walker"},			{3,71,6900,"British Grenadier"},{3,96,11900,"Astral"},
		{3,22,8600,"Yarraville"},			{3,47,10500,"A.F. Corwin"},			{3,72,8800,"Alfred Olsen"},		{3,97,8100,"San Demetrio"},
		{3,23,2600,"Lucretia"},				{3,48,10500,"E.R. Brown"},			{3,73,9500,"Inversuir"},		{3,98,7200,"British Resource"},
		{3,24,7000,"Scottish Minstrel"},	{3,49,7000,"Scottish Standard"},	{3,74,6000,"Wellfield"},		{3,99,8600,"Winamac"},
		{3,25,6800,"Athelcrest"},			{3,50,6900,"British Gunner"},		{3,75,10700," Pendrecht"},		{3,100,10400,"Narragansett"}

	}
};
struct NorthAmericashipSort
{
	int shipKind;//1.Small Ship,2.Large Ship,3.Tanker
	int shipId;
	unsigned int shipTon;
	char shipName[20];
};
struct NorthAmericashipSort NAship[3][20]={
	{
		{1,1,3800,"Ciltvaira"},			
		{1,2,2300,"Norvana"},			
		{1,3,1600,"Frisco"},				
		{1,4,2600,"Frances Salman"},		
		{1,5,5000,"Ocean Venture"},		
		{1,6,2400,"Orangesta"},			
		{1,7,1100,"Acacia"},				
		{1,8,1900,"Tolten"},				
		{1,9,3400,"Esparta"},			
		{1,0,4900,"Christina Knudsen"},	
		{1,11,1000,"Cythera"},			
		{1,12,4800,"Reinholt"},			
		{1,13,1300,"Taborfjell"},		
		{1,14,3500,"Delisle "},			
		{1,15,4700,"Leto"},				
		{1,16,2100,"Skottland"},			
		{1,17,3300,"Plow City"},			
		{1,18,4500,"Margot"},			
		{1,19,4500,"Zurichmoor"},	
		{1,20,2700,"Norlindo"}			
	},
	{
		{2,1,8000,"Lady Hawkins"},						
		{2,2,8000,"Venore"},							
		{2,3,5700,"West Ivis"},							
		{2,4,5400,"Friar Rock"},						
		{2,5,9600,"Gandia"},						
		{2,6,8000,"Tacoma Star"},						
		{2,7,15400,"Amerikaland 07 9300 Varanger"},	
		{2,8,7000,"Lihue"},
		{2,9,7900,"Arabutan"},							
		{2,10,5200,"Caryu"},							
		{2,11,8300,"City of New York"},					
		{2,12,11000,"Hertford"},						
		{2,13,5400,"Nicoya"},							
		{2,14,7500,"Greylock"},							
		{2,15,7000,"Kronprinsen"},						
		{2,16,7100,"Qu’Appelle"},						
		{2,17,6200,"Peisander"},						
		{2,18,9000,"Westmoreland"},						
		{2,19,6800,"Alcoa Puritan"},					
		{2,20,7200,"George Calvert"}
	},
	{
		{3,1,9100,"Norness"},
		{3,2,6800,"Coimbra"},
		{3,3,6600,"Allan Jackson"},
		{3,4,8200,"Malay"},
		{3,5,8100,"Empire Gem"},
		{3,6,9100,"Diala"},
		{3,7,9300,"Varange"},		
		{3,8,7100,"Francis E. Powell"},
		{3,9,7000,"Halo"},
		{3,10,11300,"Montrolite"},
		{3,11,8300,"India Arrow"},
		{3,12,8400,"China Arrow"},
		{3,13,6200,"W.L. Steed"},
		{3,14,5300,"Republic"},
		{3,15,10200,"W.D. Anderson"},
		{3,16,8200,"Pan Massachusetts"},
		{3,17,11000,"O.A. Knudsen"},
		{3,18,8000,"Esso Nashville"},
		{3,19,11400,"Atlantic Sun"},
		{3,20,8000,"Dixie Arrow"}
	}
};
struct CapitalShipSort
{
	int awardKC;
	int shipId;
	unsigned int shipTon;
	char shipName[20];
};
struct CapitalShipSort Cship[10]={
	{1,1,22000,"CV Ark Royal*"},
	{1,2,29100,"BB Royal Oak*"},
	{0,3,18600,"CV Courageous"},
	{0,4,10000,"CA Belfast"},
	{1,5,31100,"BB Barham*"},
	{1,6,34000,"BB Nelson*"},
	{1,7,31300,"BB Malaya*"},
	{1,8,22600,"CV Eagle*"},
	{0,9,12800,"CVE Avenger"},
	{0,10,11000,"CVE Audacity"}
};

int tons=0,promotionMonth,award=0,damage_status[14]={0,0,0,0,0,0,0,0,0,0,0,0,0,0},expert_level[4]={0,0,0,0},train_level=2,people_wound[10]={0,0,0,0,0,0,0,0,0,0};
//训练等级:1新手  2受训  3老手 4精英
//受损状态:0进水  1柴油  2电擎  3水听器  4潜水舵  5船体  6潜望镜  7防空炮  8甲板炮  9前鱼雷管  10后鱼雷管  11燃料箱  12无线电  13电池
//人员受伤:0指挥官 1大副 2二副 3工程师 4医生 5艇员甲 6艇员乙 7艇员丙 8艇员丁 9特工
//受伤值：0健康 1轻伤 2重伤 3阵亡
//勋章award：0无 1KC 2KCO 3KCOS 4KCOSD
char TextBuff[LINE][COLUMN],rank[20],player[50],type[6],data[200];
char mission[9][20]={"西班牙海岸","英吉利海峡","挪威","大西洋","西非海岸","地中海","北美","北极","加勒比海"};
char missionType[4][20]={"布置海雷","狼群行动","护送特工","水域巡航"};
char missionStack[12][20];
int FwTube[3],AftTube[3],FwLoad[2],AftLoad[2];//G7A,G7E,Mine
int Times[12];
int mName,mType;

int line=0,choose,year,month,typeNumber,id,process[2],sunkID[80],sunkboats=0,DeckAmmo;//sunkID:1-100小货船 101-200大货船 201-300油轮

/*typrNumber
 *1.VIIA
 *2.VIIB
 *3.IXA
 *4.IXB
 *5.VIIC
 *6.IXC
 *7.VIID
 *8.VIICFk
*/
int firstTwelve=1,back,giveup,patrolSuccess,stayInTheMed=0;
char* itoa(int value, char* result, int base) {
	// check that the base if valid
	if (base < 2 || base > 36) { *result = '\0'; return result; }

	char* ptr = result, *ptr1 = result, tmp_char;
	int tmp_value;

	do {
		tmp_value = value;
		value /= base;
		*ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * base)];
	} while ( value );

	// Apply negative sign
	if (tmp_value < 0) *ptr++ = '-';
	*ptr-- = '\0';
	while(ptr1 < ptr) {
		tmp_char = *ptr;
		*ptr--= *ptr1;
		*ptr1++ = tmp_char;
	}
	return result;
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
		sleep(0.02);
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
	printf("press any key to continue.(Maybe two timenows)");
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

void show_card(){
	print("这是你的潜艇军官证，好好保管！这是属于你的荣耀！\n\n");

	printf("******************************************\n");
	printf("**名字\t潜艇\t军衔\t\t服役时间**\n");
	printf("**%s\t%s\t%s\t%d.%d\t**\n",player,type,rank,year,month);
	printf("******************************************\n");
	printf("系统提示:请一定记住您的ID号!它是您的唯一身份标识!\n");
}
void introduce(char* type,int first)
{
	if(first==1) goto loop3;

	helploop:clean();	

	printf("1.关于鱼雷\t2.关于CONVOY\t3.怎么攻击军舰\n4.狼群战是什么\t5.综述\t6.关于军衔\n7.大型军舰名字后的*是什么意思\t8.获得勋章的好处\n9.没问题了\t更新中...");
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
							print("VIIA是德军第一批潜艇型号，艇长64.3m，最高航速16节，艇重626t，有效射程4300nm，乘员44人，共被生产了10艘\n");
							print("共携带鱼雷11发，前鱼雷管4发，前鱼雷装填区5发，后鱼雷管1发，后鱼雷装填区1发。\n");
							//print("开发者：随着巡航次数的增加，你会意识到一个事实“VIIA的防空炮位置设计时没处理好，防空效果不太妙”\n");后期放到事件里面 《石锤》
							print("8.8cm甲板炮，10发容量，2cm防空炮\n");
							break;
						}
					case 2:
						{
							print("VIIB是德军第一批潜艇型号，艇长66.5m，最高航速17.2节，艇重753t，有效射程6500nm，乘员44人，共被生产了24艘\n");
							print("共携带鱼雷14发，前鱼雷管4发，前鱼雷装填区8发，后鱼雷管1发，后鱼雷装填区1发\n");
							print("8.8cm甲板炮，10发容量，2cm防空炮\n");
							break;
						}
					case 3:
						{
							print("IXA于1939年9月服役，艇长76.5m，最高航速18.2节，艇重1032t，有效射程8100nm，乘员48人，共被生产了8艘\n");
							print("共携带鱼雷22发，前鱼雷管4发，前鱼雷装填区14发，后鱼雷管2发，后鱼雷装填区2发。\n");
							print("10.5cm甲板炮，5发容量，2cm和3.7cm防空炮\n");
							break;
						}
					case 4:
						{
							print("IXB于1940年4月服役，艇长76.5m，最高航速18.2节，艇重1051t，有效射程6500nm，乘员48人，共被生产了14艘\n");
							print("共携带鱼雷22发，前鱼雷管4发，前鱼雷装填区14发，后鱼雷管2发，后鱼雷装填区2发。\n");
							print("10.5cm甲板炮，5发容量，2cm和3.7cm防空炮\n");
							break;
						}
					case 5:
						{
							print("VIIC于1940年10月服役，艇长66.5m，最高航速17.2节，艇重761t，有效射程6500nm，乘员44人，共被生产了661艘\n");
							print("共携带鱼雷14发，前鱼雷管4发，前鱼雷装填区8发，后鱼雷管1发，后鱼雷装填区1发。\n");
							print("8.8cm甲板炮，10发容量，2cm防空炮\n");
							break;
						}
					case 6:
						{
							print("IXC于1941年5月服役，艇长76.5m，最高航速18.3节，艇重1120t，有效射程11000nm，乘员48人，共被生产了54艘\n");
							print("共携带鱼雷22发，前鱼雷管4发，前鱼雷装填区14发，后鱼雷管2发，后鱼雷装填区2发。\n");
							print("10.5cm甲板炮，5发容量，2cm和3.7cm防空炮\n");
							break;
						}
					case 7:
						{
							print("VIID于1942年1月服役，是个执行特殊任务的型号，除了北美巡航以外，他每个任务都是布雷/护送\n");
							print("艇长76.8m，最高航速16节，艇重965t，有效射程8100nm，乘员44人，共被生产了6艘\n");
							print("共携带鱼雷14发，前鱼雷管4发，前鱼雷装填区8发，后鱼雷管1发，后鱼雷装填区1发。\n");
							print("可携带15 SMA水雷，8.8cm甲板炮，10发容量，2cm防空炮\n");
							break;
						}
					case 8:
						{
							print("VIICFk于1943年5月服役，是VIIC的防空型号，可以站撸飞机！\n");
							print("艇长66.5m，最高航速17.2节，艇重761t，有效射程6500nm，乘员44人，共被生产了7艘\n");
							print("共携带鱼雷5发，前鱼雷管4发后鱼雷管1发，无鱼雷装填区（鱼雷太少了？我们也没有办法————QAQ）。\n");
							print("双联装防空2cm炮，3.7cm防空炮，无甲板炮\n");
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
		case 6:
			{
				print("Oberleutnant起始阶，没能力\n");
				print("Kapitänleutnant第二阶，每次分配任务时:\n你可以有1/6的几率你可以自己选任务，除非你被永久性地指配到了北极或地中海");
				print("Korvettenkapitän第三阶，同上，但是几率变成1/3。\n此外因为你比较有权利，可以让工人修潜艇修的更快一点，提前潜艇的一个月出港\n");
				print("（但是如果是1-2个月或者五个月以上，这个能力失效）\n");
				print("Fregattenkapitän第四阶，同上，但是任务分配几率变成1/2你也有修潜艇 Buff\n");
				print("KapitänzurSee第五阶你获得了荣耀和更大的办公室\n");
				goto helploop;
			}
		case 7:
			{
				print("与大型军舰非常危险，他们都随时存在护航。\n");
				print("但是，富贵险中求，如果你得以击沉带有*的军舰，你将获得极大的荣耀\n");
				print("具体地说，你将因此获得十字勋章，或者获得更高级的勋章\n");
				goto helploop;
			}
		case 8:
			{
				print("铁十字章炙手可热。历史上只有125 名潜艇指挥官获得过铁十字章.\n");
				print("但是只要 29 位获得了橡树叶子，更少的人获得了剑，只有两位获得了带有橡树叶子、剑和钻石的潜艇指挥官。\n");
				print("沉100000吨船或击沉一些Capital主要军舰你才能获得骑士勋章。\n");
				print("有勋章的人可以获得一些骰子修正。你只能在在港的时候获得勋章。\n");
				clean();
				print("获得铁十字你要沉 100,000吨或者沉了相应的主要军舰\n");
				print("获得橡树叶铁十字需要沉175000吨，或者获得KC后沉相应的Capital Ship或沉75000 吨\n");
				print("获得橡树剑十字需要沉250000或者获得KCO后沉相应的 Capital ships 或沉75000吨\n");
				print("获得橡剑钻骑士铁十字,你要沉300000或者获得剑后沉相应的主要军舰，或沉50000吨\n");
				print("当你每获得一次勋章，你就可以要求换个潜艇\n");
				clean();
				print("修正:\n");
				print("Knight’s Cross (KC)夜战后管齐射时没有+1 的不利修正\n");
				print("Oakleaves (KCO)夜战齐射不仅没有+1 的不利修正,还有个-1 的有利修正\n");
				print("Oakleaves  and  Swords(KCO&S)除了上述以外，有-1 的敌方船只侦测修正\n");
				print("Oakleaves and Swords, andDiamonds(KCOS&D)除了上述以外，追踪自动成功\n");
				goto helploop;
			}

		default:
			{
				break;
			}


	}
	clean();
}

void backHome()
{
	clrscr();
	printf("我：情况很严峻，再一意孤行继续执行巡航任务很可能导致艇毁人亡，各位，我们得放弃巡航了\n");
	printf("人们长长的舒了一口气。至少现在，他们不需要再冒险了，他们开始想象回家的场景：\n");
	if(patrolSuccess)printf("虽然他们没有进行完整的巡航，但毕竟他们还是完成了任务目标，回去时，肯定能得到欢迎和赞誉\n");
	else printf("大家脸上都不大光彩，这次任务失败了，但是他们现在顾不了那么多，先活着回去再说！\n");
	int stopPoint=process-1;//暂停点
	for(int i=1;i<=stopPoint;i++)
	{
		day(missionStack[stopPoint-i],Times[stopPoint-i]);
	}
}

void giveUpMission()
{
	giveup=1;
	if(process[0]<=(process[1]/2))
	{
		backHome();
		back=1;
	} 
}
int meetAircraft()
{
	print("——————潜艇正在海面自由自在的航行——————\n");
	print("1WO:该死！空袭！快下潜！\n");
	if(typeNumber==8)
	{
		printf("Leo:飞机来了！长官，我们是下潜还是？(1.和他们对着干！ 2.下潜吧)\n");
		scanf("%d",&choose);

		if(choose==1)//干！
		{
			
			
			
			
			
			
			
			
			
			
			
			repairComponent();
			return 1;
		}
	}
	print("Tommy：哦！天啊，飞机！Gregson!启动电力引擎！\n");
	
	int meet=roll(2);
	if(people_wound[5]>1&&people_wound[6]>1&&people_wound[7]>1&&people_wound[8]>1)meet--;//DRM
	if(train_level==1)meet--;
	if(train_level==4)meet++;
	if(damage_status[4]!=0)meet--;
	if(typeNumber==3||typeNumber==4||typeNumber==6||typeNumber==7)meet--;
	if(year==1939)meet++;
	if(year==1942)meet--;
	if(year==1943)meet-=2;
	
	
	if(meet>=6)printf("Tommy:还好我们下潜快,我们逃离空袭了！\n");
	else id(meet>1)
	{
		printf("哦！他们太快了！防空炮！反击！\n");
		
		
		
		
		
		
		
	}
	return 0;
}









int detect(int isCapital,int G7AinDay,int preDetecte,int range,int nightSurface,int FwAftBoth,int wolf)
{

}
void meetShip(int numbers,int haveEscort)
{
	int shipkind[numbers];//0是小船，1是大船，2是油轮
	int timenow[2];
	int health[numbers][2];
	int kind;

	int day_night=roll(1);
	if(day_night<4)timenow[0]=rand()%12+7;
	else timenow[0]=rand()%12-5;

	if(timenow[0]<0)timenow[0]+=24;
	timenow[1]=rand()%60;
	printf("%d时%d分,",timenow[0],timenow[1]);
	print("我们遭遇了盟军的船");

	for(int i=0;i<numbers;i++)
	{
		kind=roll(1);
		if(kind<4)shipkind[i]=0;
		else if(kind==4||kind==5)shipkind[i]=1;
		else if(kind==6)shipkind[i]=2;
		else printf("骰子有问题！\n");
	}
	print("\n");

	int shipID[numbers];
	print("，分别是：\n");

	for(int i=0;i<numbers;i++)
	{
		shipID[i]=rand()%100+1;

		if(shipkind[i]==0)
		{
			health[i][0]=2;
			health[i][1]=2;
			printf("小货船：%s,%d吨\n",ship[0][shipID[i]].shipName,ship[0][shipID[i]].shipTons);
		}
		else if(shipkind[i]==1)
		{
			if(ship[1][shipID[i]].shipTons<10000)
			{
				health[i][0]=3;
				health[i][1]=3;
			}
			else 
			{
				health[i][0]=4;
				health[i][1]=4;
			}
			printf("大货船,%s,%d吨\n",ship[1][shipID[i]].shipName,ship[1][shipID[i]].shipTons);
		}
		else if(shipkind[i]==2)
		{
			if(ship[1][shipID[i]].shipTons<10000)
			{
				health[i][0]=3;
				health[i][1]=3;
			}
			else
			{
				health[i][0]=4;
				health[i][1]=4;
			}
			printf("油轮,%s,%d吨\n",ship[2][shipID[i]].shipName,ship[2][shipID[i]].shipTons);
		}
	}
	print("\n");
	if(0){loop5:printf("如果这是第2次及以上问你，那应该是你之前输入了不合要求的选项\n");}
	printf("请决定是否发动攻击:(1.是 2.否）\n");
	scanf("%d",&choose);

	clrscr();
	printBuff();
	if(choose==0)
	{
		print("我：算了吧，继续航行！\n");
		loop8:	print("Tommy：继续航行！\n");
		print("Leo:伙计们，动起来！继续航行！\n");
	}
	else if(choose==1)
	{
		print("我：发起攻击！");
		print("Gregson：发起攻击！\n");
		print("Eric:伙计们，动起来！\n");
		clean();
		clrscr();
		char describe[numbers][60];
		int range;//1.近距   2.中距   3.远距
		int surface;//1.上浮  2.下沉


		if(0){loop6:clrscr();printf("如果这是第2次及以上问你，那应该是你之前输入了不合要求的选项\n");}
		if(0)loop7:clrscr();

		if(timenow[1]==59){timenow[0]++;timenow[1]=0;}
		else timenow[1]++;
		printf("————————————%d时%d分————————————,",timenow[0],timenow[1]);
		if(haveEscort)printf("有护航舰队\n");

		for(int i=0;i<numbers;i++)
		{
			if(shipkind[i]==0)
			{
				if(health[i][0]==2)strcpy(describe[i],"这艘小货船完好无损");
				else if(health[i][0]==1)strcpy(describe[i],"小货船冒起了浓烟");
				else 
				{
					strcpy(describe[i],"小货船沉了");
					sunkID[sunkboats]=shipID[i];
					sunkboats++;
					if(mType>1)patrolSuccess=1;
				}
			}
			else if(shipkind[i]==1)
			{
				if(health[i][0]==4)strcpy(describe[i],"这艘巨货船完好无损");
				else if(health[i][0]==3)strcpy(describe[i],"这艘大货船看起来还能再撑一百年");
				else if(health[i][0]==2)strcpy(describe[i],"大货船船体收到了损伤");
				else if(health[i][0]==1)strcpy(describe[i],"大货船冒起了浓烟");
				else 
				{
					strcpy(describe[i],"大货船沉了");
					sunkID[sunkboats]=shipID[i]+100;
					sunkboats++;
					if(mType>1)patrolSuccess=1;
				}
			}
			else if(shipkind[i]==2)
			{
				if(health[i][0]==4)strcpy(describe[i],"这艘大油轮完好无损");
				else if(health[i][0]==3)strcpy(describe[i],"油轮结构完好");
				else if(health[i][0]==2)strcpy(describe[i],"油轮船体收到了损伤");
				else if(health[i][0]==1)strcpy(describe[i],"油轮冒起了浓烟");
				else 
				{
					strcpy(describe[i],"油轮沉了");
					sunkID[sunkboats]=shipID[i]+200;
					sunkboats++;
					if(mType>1)patrolSuccess=1;
				}
			}

			printf("目标%d:%s,%d tons,%s\n",i+1,ship[shipkind[i]][shipID[i]].shipName,ship[shipkind[i]][shipID[i]].shipTons,describe[i]);
		}

		printf("————————————————————————\n");

		printf("前鱼雷管:G7A:%d发，G7E:%d发，水雷：%d枚,装填区：G7A:%d发，G7E:%d发\n",FwTube[0],FwTube[1],FwTube[2],FwLoad[0],FwLoad[1]);
		if(damage_status[9]!=0)printf("前鱼雷管坏了%d个",damage_status[9]);
		printf("后鱼雷管:G7A:%d发，G7E:%d发，水雷：%d枚\n",AftTube[0],AftTube[1],AftTube[2],AftLoad[0],AftLoad[1]);
		if(damage_status[10]!=0)printf("前鱼雷管坏了%d个",damage_status[10]);
		if(damage_status[8]==0)printf("甲板炮:%d发弹药（一次最多2发）\n",DeckAmmo);
		else printf("甲板炮坏了\n");

		printf("是否结束战斗：（1.是 2.否）");
		scanf("%d",&choose);
		if(choose!=1&&choose!=2)goto loop6;
		else if(choose==1)goto loop8;

		if(day_night<4)
		{
			printf("是否跟踪船只直到天黑(1.是  2.否)");
			scanf("%d",&choose);
			if(choose==1)
			{
				printf("我：跟踪他们！\n");
				printf("Leo：是！\n");
				day_night=6;
				timenow[0]=rand()%12-5;
				if(timenow[0]<0)timenow[0]+=24;
				timenow[1]=rand()%60;
				clean();
				if(roll(1)<5)goto loop7;
				else
				{
					printf("————————————%d时%d分————————————,",timenow[0],timenow[1]);
					printf("Tommy：对不起长官，我们跟丢了！\n");
					printf("我：哦！真糟糕\n");
					goto loop10;
				}
			}	
		}

		printf("请指定攻击距离：（1.近距      2.中距      3.远距）");
		scanf("%d",&range);
		if(range!=1&&range!=2&&range!=3)goto loop6;

		if(day_night>3)
		{
			printf("请指定攻击方式：（1.上浮  2.下潜）");
			scanf("%d",&surface);
			if(surface!=1&&surface!=2)goto loop6;
		}
		else 
		{
			surface=2;
			printf("白天只能潜行攻击\n");
		}

		if(!(range==1&&haveEscort==1))
		{
			int usedAmmo[numbers][3];
			int sumAmmo[3];//仅算前部与甲板炮
			int AftSumAmmo[2];
			int AftUsedAmmo[2];

			if(0)
			{
				loop9:clrscr();
				printf("如果这是第2次及以上问你，那应该是你之前输入了不合要求的选项\n");
				printf("前鱼雷管:G7A:%d发，G7E:%d发，水雷：%d枚,装填区：G7A:%d发，G7E:%d发\n",FwTube[0],FwTube[1],FwTube[2],FwLoad[0],FwLoad[1]);
				if(damage_status[9]!=0)printf("前鱼雷管坏了%d个",damage_status[9]);
				printf("后鱼雷管:G7A:%d发，G7E:%d发，水雷：%d枚,装填区：G7A:%d发，G7E:%d发\n",AftTube[0],AftTube[1],AftTube[2],AftLoad[0],AftLoad[1]);
				if(damage_status[10]!=0)printf("前鱼雷管坏了%d个",damage_status[10]);
				if(damage_status[8]==0)printf("甲板炮:%d发弹药（一次最多2发）\n",DeckAmmo);
				else printf("甲板炮坏了\n");
			}
			sumAmmo[0]=0;
			sumAmmo[1]=0;
			sumAmmo[2]=0;
			AftSumAmmo[0]=0;
			AftSumAmmo[1]=0;
			AftUsedAmmo[0]=0;
			AftUsedAmmo[1]=0;

			if(haveEscort==0&&surface==1)
			{
				printf("请指定攻击弹药使用量(甲板炮一次战斗至多2炮)(G7A,G7E)或(DeckGun)\n");
				printf("前鱼雷管(如 2，1)：");
				scanf("%d,%d",&sumAmmo[0],&sumAmmo[1]);
				printf("后鱼雷管(如 2，1)：");
				scanf("%d,%d",&AftSumAmmo[0],&AftSumAmmo[1]);
				printf("甲板炮(如 2)：");
				scanf("%d",&sumAmmo[3]);
			}
			else
			{
				printf("请对每艘船指定攻击弹药使用量（不包括后鱼雷管）:G7A,G7E（如:2，1）\n");		
				for(int i=0;i<numbers;i++)
				{
					printf("Target%d:",i+1);
					usedAmmo[i][2]=0;
					if(haveEscort==0&&surface==1)scanf("%d,%d,%d",&usedAmmo[i][0],&usedAmmo[i][1],&usedAmmo[i][2]);
					else scanf("%d,%d",&usedAmmo[i][0],&usedAmmo[i][1]);
					printf("其中后鱼雷管用雷量：G7A，G7E:");
					scanf("%d,%d",AftUsedAmmo[0],AftUsedAmmo[1]);
					sumAmmo[0]+=usedAmmo[i][0];
					sumAmmo[1]+=usedAmmo[i][1];
					sumAmmo[2]+=usedAmmo[i][2];
					AftSumAmmo[0]=AftUsedAmmo[0];
					AftSumAmmo[1]=AftUsedAmmo[1];
				}
			}
			if(sumAmmo[0]>FwTube[0]||sumAmmo[1]>FwTube[1]||AftSumAmmo[0]>AftTube[0]||AftSumAmmo[1]>AftTube[1]||sumAmmo[2]>2||sumAmmo[2]>DeckAmmo)goto loop9;
			else 
			{
				FwTube[0]-=sumAmmo[0];
				FwTube[1]-=sumAmmo[1];
				AftTube[0]-=AftSumAmmo[0];
				AftTube[1]-=AftSumAmmo[1];
				DeckAmmo-=sumAmmo[2];
			}



			if(haveEscort==0&&surface==1)
			{
				int hit[2]={0,0};//鱼雷，甲板炮
				int junkT;
				int hitDamage;

				loop11:clean();

				if(timenow[1]==59){timenow[0]++;timenow[1]=0;}
				else timenow[1]++;
				printf("————————————%d时%d分————————————,",timenow[0],timenow[1]);
				if(haveEscort)printf("有护航舰队\n");

				for(int i=0;i<numbers;i++)
				{
					if(shipkind[i]==0)
					{
						if(health[i][0]==2)strcpy(describe[i],"这艘小货船完好无损");
						else if(health[i][0]==1)strcpy(describe[i],"小货船冒起了浓烟");
						else 
						{
							strcpy(describe[i],"小货船沉了");
							sunkID[sunkboats]=shipID[i];
							sunkboats++;
							if(mType>1)patrolSuccess=1;
						}
					}
					else if(shipkind[i]==1)
					{
						if(health[i][0]==4)strcpy(describe[i],"这艘巨货船完好无损");
						else if(health[i][0]==3)strcpy(describe[i],"这艘大货船看起来还能再撑一百年");
						else if(health[i][0]==2)strcpy(describe[i],"大货船船体收到了损伤");
						else if(health[i][0]==1)strcpy(describe[i],"大货船冒起了浓烟");
						else 
						{
							strcpy(describe[i],"大货船沉了");
							sunkID[sunkboats]=shipID[i]+100;
							sunkboats++;
							if(mType>1)patrolSuccess=1;
						}
					}
					else if(shipkind[i]==2)
					{
						if(health[i][0]==4)strcpy(describe[i],"这艘大油轮完好无损");
						else if(health[i][0]==3)strcpy(describe[i],"油轮结构完好");
						else if(health[i][0]==2)strcpy(describe[i],"油轮船体收到了损伤");
						else if(health[i][0]==1)strcpy(describe[i],"油轮冒起了浓烟");
						else 
						{
							strcpy(describe[i],"油轮沉了");
							sunkID[sunkboats]=shipID[i]+200;
							sunkboats++;
							if(mType>1)patrolSuccess=1;
						}
					}

					printf("目标%d:%s,%d tons,%s\n",i+1,ship[shipkind[i]][shipID[i]].shipName,ship[shipkind[i]][shipID[i]].shipTons,describe[i]);
				}
				printf("————————————————————————\n");
				printf("请选择攻击武器，一次只能选一个，结算完会让你再选(几次选择合起来是一次攻击)，一个武器只能用一次,(1.前鱼雷管  2.后鱼雷管  3.甲板炮  4.结束此轮战斗):");
				scanf("%d",&choose);

				switch(choose)
				{
					case 1:
						{

							if(sumAmmo[0]!=0)
							{
								for(int x;x<sumAmmo[0];x++)
								{
									printf("第%d发G7A：（输入目标标号）Target");
									scanf("%d",&choose);

									int fireHit=roll(2)-1;
									if(award>=2)fireHit--;
									if(train_level==1)fireHit++;
									if(people_wound[5]>1&&people_wound[6]>1&&people_wound[7]>1&&people_wound[8]>1)fireHit++;
									if(people_wound[0]>1)fireHit++;
									if(people_wound[0]>1&&people_wound[1]>1)fireHit++;
									//第二轮雷击+1DRM
									if(fireHit<9)
									{
										junkT=roll(1);
										if((year<1941&&junkT>2)||(year>=1941&&junkT>1))
										{
											hit[0]++;
											hitDamage=roll(1);
											if(hitDamage==1)health[choose-1][0]-=4;
											else if(hitDamage==2)health[choose-1][0]-=3;
											else if(hitDamage==3)health[choose-1][0]-=2;
											else if(hitDamage>=4)health[choose-1][0]-=1;
										}
									}
								}
							}
							if(sumAmmo[1]!=0)
							{
								for(int x;x<sumAmmo[1];x++)
								{
									printf("第%d发G7E：（输入目标标号）Target");
									scanf("%d",&choose);

									int fireHit=roll(2)-1;
									if(award>=2)fireHit--;
									if(train_level==1)fireHit++;
									if(people_wound[5]>1&&people_wound[6]>1&&people_wound[7]>1&&people_wound[8]>1)fireHit++;
									if(people_wound[0]>1)fireHit++;
									if(people_wound[0]>1&&people_wound[1]>1)fireHit++;
									if(range>=2)fireHit++;
									if(range==3)fireHit++;
									//第二轮雷击+1DRM
									if(fireHit<9)
									{
										junkT=roll(1);
										if((year<=1940&&month<=6&&junkT>3)||(year==1940&&month>=7&&junkT>2)||(year>=1941&&junkT>1))
										{
											hit[0]++;
											hitDamage=roll(1);
											if(hitDamage==1)health[choose-1][0]-=4;
											else if(hitDamage==2)health[choose-1][0]-=3;
											else if(hitDamage==3)health[choose-1][0]-=2;
											else if(hitDamage>=4)health[choose-1][0]-=1;
										}

									}

								}
							}
							if(hit[0]!=0)printf("你们看到你们的目标上共喷出了%d束火焰，大家都连声叫好\n",hit[0]);
							else printf("貌似什么事情都没有发生。。。\n");
							goto loop11;
						}
					case 2:
						{
							if(AftSumAmmo[0]!=0)
							{
								for(int x;x<AftSumAmmo[0];x++)
								{
									printf("第%d发G7A：（输入目标标号）Target");
									scanf("%d",&choose);

									int fireHit=roll(2)-1;
									if(award>=2)fireHit--;
									if(train_level==1)fireHit++;
									if(people_wound[5]>1&&people_wound[6]>1&&people_wound[7]>1&&people_wound[8]>1)fireHit++;
									if(people_wound[0]>1)fireHit++;
									if(people_wound[0]>1&&people_wound[1]>1)fireHit++;
									//第二轮雷击+1DRM
									if(fireHit<9)
									{
										junkT=roll(1);
										if((year<1941&&junkT>2)||(year>=1941&&junkT>1))
										{
											hit[0]++;
											hitDamage=roll(1);
											if(hitDamage==1)health[choose-1][0]-=4;
											else if(hitDamage==2)health[choose-1][0]-=3;
											else if(hitDamage==3)health[choose-1][0]-=2;
											else if(hitDamage>=4)health[choose-1][0]-=1;
										}
									}
								}
							}
							if(AftSumAmmo[1]!=0)
							{
								for(int x;x<AftSumAmmo[1];x++)
								{
									printf("第%d发G7E：（输入目标标号）Target");
									scanf("%d",&choose);

									int fireHit=roll(2)-1;
									if(award>=2)fireHit--;
									if(train_level==1)fireHit++;
									if(people_wound[5]>1&&people_wound[6]>1&&people_wound[7]>1&&people_wound[8]>1)fireHit++;
									if(people_wound[0]>1)fireHit++;
									if(people_wound[0]>1&&people_wound[1]>1)fireHit++;
									if(range>=2)fireHit++;
									if(range==3)fireHit++;
									//第二轮雷击+1DRM
									if(fireHit<9)
									{
										junkT=roll(1);
										if((year<=1940&&month<=6&&junkT>3)||(year==1940&&month>=7&&junkT>2)||(year>=1941&&junkT>1))
										{
											hit[0]++;
											hitDamage=roll(1);
											if(hitDamage==1)health[choose-1][0]-=4;
											else if(hitDamage==2)health[choose-1][0]-=3;
											else if(hitDamage==3)health[choose-1][0]-=2;
											else if(hitDamage>=4)health[choose-1][0]-=1;
										}

									}
								}
							}
							if(hit[0]!=0)printf("你们看到你们的目标上共喷出了%d束火焰，大家都连声叫好\n",hit[0]);
							else printf("貌似什么事情都没有发生。。。\n");
							goto loop11;				
						}
					case 3:
						{
							if(sumAmmo[3]!=0)
							{
								printf("第%d炮：（输入目标标号）Target");
								scanf("%d",&choose);

								for(int j=0;j<sumAmmo[3];j++)//DeckGun
								{
									int fireHit=roll(2);
									if(award>=2)fireHit--;
									if(train_level==1)fireHit++;
									if(people_wound[5]>1&&people_wound[6]>1&&people_wound[7]>1&&people_wound[8]>1)fireHit++;
									if(people_wound[0]>1)fireHit++;
									if(people_wound[0]>1&&people_wound[1]>1)fireHit++;
									if(fireHit<9)
									{
										hit[1]++;
										hitDamage=roll(1);
										if(typeNumber==3||typeNumber==4||typeNumber==6)hitDamage--;
										if(hitDamage<=1)health[choose-1][0]-=2;
										else if(hitDamage>=4)health[choose-1][0]-=1;
									}
								}

							}
							if(hit[1]!=0)printf("中了，中了！好！%d下！\n",hit[0]);
							else printf("哦。。偏了。。\n");
							goto loop11;
						}
					case 4:
						{
							break;
						}
					default:
						{
							printf("输入有误");
							goto loop11;
						}

				}
			}
			else
			{

				for(int i=0;i<numbers;i++)
				{
					int hit[2]={0,0};//鱼雷，甲板炮
					int junkT;
					int hitDamage;
					for(int j=0;j<usedAmmo[i][0];j++)//G7A
					{
						int fireHit=roll(2);
						if(surface==1&&(day_night>3||haveEscort==0))fireHit--;
						if(award>=2)fireHit--;
						if(train_level==1)fireHit++;
						if(people_wound[5]>1&&people_wound[6]>1&&people_wound[7]>1&&people_wound[8]>1)fireHit++;
						if(people_wound[0]>1)fireHit++;
						if(people_wound[0]>1&&people_wound[1]>1)fireHit++;
						//第二轮雷击+1DRM
						if(fireHit<9)
						{
							junkT=roll(1);
							if((year<1941&&junkT>2)||(year>=1941&&junkT>1))
							{
								hit[0]++;
								hitDamage=roll(1);
								if(hitDamage==1)health[i][0]-=4;
								else if(hitDamage==2)health[i][0]-=3;
								else if(hitDamage==3)health[i][0]-=2;
								else if(hitDamage>=4)health[i][0]-=1;
							}
						}
					}
					for(int j=0;j<usedAmmo[i][1];j++)//G7E
					{
						int fireHit=roll(2);
						if(surface==1&&(day_night>3||haveEscort==0))fireHit--;
						if(award>=2)fireHit--;
						if(train_level==1)fireHit++;
						if(people_wound[5]>1&&people_wound[6]>1&&people_wound[7]>1&&people_wound[8]>1)fireHit++;
						if(people_wound[0]>1)fireHit++;
						if(people_wound[0]>1&&people_wound[1]>1)fireHit++;
						if(range>=2)fireHit++;
						if(range==3)fireHit++;
						//第二轮雷击+1DRM
						if(fireHit<9)
						{
							junkT=roll(1);
							if((year<=1940&&month<=6&&junkT>3)||(year==1940&&month>=7&&junkT>2)||(year>=1941&&junkT>1))
							{
								hit[0]++;
								hitDamage=roll(1);
								if(hitDamage==1)health[i][0]-=4;
								else if(hitDamage==2)health[i][0]-=3;
								else if(hitDamage==3)health[i][0]-=2;
								else if(hitDamage>=4)health[i][0]-=1;
							}

						}
					}
					clean();
					printf("黑暗中，你握着秒表,目标%d方向：",i+1);
					sleep(3);
					for(int i=0;i<hit[0];i++)
					{
						print("PANG...");
						sleep(rand()%4+1);
					}
					if(hit!=0)printf("\n大家连声叫好\n");
				}
			}

			clean();

			if(timenow[1]==59){timenow[0]++;timenow[1]=0;}
			else timenow[1]++;
			printf("————————————%d时%d分————————————,",timenow[0],timenow[1]);
			if(haveEscort)printf("有护航舰队\n");

			for(int i=0;i<numbers;i++)
			{
				if(shipkind[i]==0)
				{
					if(health[i][0]==2)strcpy(describe[i],"这艘小货船完好无损");
					else if(health[i][0]==1)strcpy(describe[i],"小货船冒起了浓烟");
					else 
					{
						strcpy(describe[i],"小货船沉了");
						sunkID[sunkboats]=shipID[i];
						sunkboats++;
						if(mType>1)patrolSuccess=1;
					}
				}
				else if(shipkind[i]==1)
				{
					if(health[i][0]==4)strcpy(describe[i],"这艘巨货船完好无损");
					else if(health[i][0]==3)strcpy(describe[i],"这艘大货船看起来还能再撑一百年");
					else if(health[i][0]==2)strcpy(describe[i],"大货船船体收到了损伤");
					else if(health[i][0]==1)strcpy(describe[i],"大货船冒起了浓烟");
					else 
					{
						strcpy(describe[i],"大货船沉了");
						sunkID[sunkboats]=shipID[i]+100;
						sunkboats++;
						if(mType>1)patrolSuccess=1;
					}
				}
				else if(shipkind[i]==2)
				{
					if(health[i][0]==4)strcpy(describe[i],"这艘大油轮完好无损");
					else if(health[i][0]==3)strcpy(describe[i],"油轮结构完好");
					else if(health[i][0]==2)strcpy(describe[i],"油轮船体收到了损伤");
					else if(health[i][0]==1)strcpy(describe[i],"油轮冒起了浓烟");
					else 
					{
						strcpy(describe[i],"油轮沉了");
						sunkID[sunkboats]=shipID[i]+200;
						sunkboats++;
						if(mType>1)patrolSuccess=1;
					}
				}

				printf("目标%d:%s,%d tons,%s\n",i+1,ship[shipkind[i]][shipID[i]].shipName,ship[shipkind[i]][shipID[i]].shipTons,describe[i]);
			}
			printf("————————————————————————\n");


			if(haveEscort)//准备被侦测
			{
				printf("海底重回寂静\n");
				if(!detect(0,(day_night<=3&&(sumAmmo[0]!=0||AftSumAmmo[0]!=0)),0,range,(year>1940&&surface==1),((sumAmmo[0]!=0||sumAmmo[1]!=0)&&(AftSumAmmo[0]!=0||AftSumAmmo[1]!=0)),0))
				{
					printf("2WO:看样子我们摆脱侦测了\n");
					printf("众：(小声）太好啦！\n");
					clean();
				}
				loop14:repairComponent();
				int sumHealth=0;
				for(int i=0;i<numbers;i++)
				{
					sumHealth+=health[i][0];
				}
				int sumTotalHealth=0;
				for(int i=0;i<numbers;i++)
				{
					sumTotalHealth+=health[i][1];
				}
				if(sumHealth!=0)
				{
					printf("1WO:需要尾随目标吗，长官？(1.要 2.算了）\n");
					scanf("%d",&choose);
					if(choose!=1)
					{
						print("我：算了吧，放过他们！\n");
						print("Eric:继续巡航!\n");
					}
					else
					{
						print("我：给我追！，别让他们跑了！\n");
						print("Tommy:动起来！跟踪他们！");
						clean();
						day_night=roll(1);
						if(day_night<4)timenow[0]=rand()%12+7;
						else timenow[0]=rand()%12-5;

						if(timenow[0]<0)timenow[0]+=24;
						timenow[1]=rand()%60;
						if(roll(1)>4&&sumTotalHealth==sumHealth)//追踪受伤目标不用判定
						{
							printf("————————————%d时%d分————————————,",timenow[0],timenow[1]);
							printf("Tommy：对不起长官，我们跟丢了！\n");
							printf("我：哦！真糟糕\n");
						}
						else goto loop7;//跟踪成功
					}
				}
			}

			if(0){loop13:clrscr();printf("如果这是第2次及以上问你，那应该是你之前输入了不合要求的选项\n");}
			printf("前鱼雷管:G7A:%d发，G7E:%d发，水雷：%d枚,装填区：G7A:%d发，G7E:%d发\n",FwTube[0],FwTube[1],FwTube[2],FwLoad[0],FwLoad[1]);
			if(damage_status[9]!=0)printf("前鱼雷管坏了%d个",damage_status[9]);
			printf("后鱼雷管:G7A:%d发，G7E:%d发，水雷：%d枚,装填区：G7A:%d发，G7E:%d发\n",AftTube[0],AftTube[1],AftTube[2],AftLoad[0],AftLoad[1]);
			if(damage_status[10]!=0)printf("前鱼雷管坏了%d个",damage_status[10]);
			if(damage_status[8]==0)printf("甲板炮:%d发弹药（一次最多2发）\n",DeckAmmo);
			else printf("甲板炮坏了\n");

			printf("请装填弹药:\n");
			printf("请指定弹药补充量(格式：G7A,G7E)\n");
			printf("前鱼雷管：");
			scanf("%d,%d",&sumAmmo[0],&sumAmmo[1]);
			printf("后鱼雷管：");
			scanf("%d,%d",&AftSumAmmo[0],&AftSumAmmo[1]);

			if(sumAmmo[0]>FwLoad[0]||sumAmmo[1]>FwLoad[1]||AftSumAmmo[0]>AftLoad[0]||AftSumAmmo[1]>AftLoad[1])goto loop13;
			else 
			{
				FwTube[0]+=sumAmmo[0];
				FwTube[1]+=sumAmmo[1];
				AftTube[0]+=AftSumAmmo[0];
				AftTube[1]+=AftSumAmmo[1];
				FwLoad[0]-=sumAmmo[0];
				FwLoad[1]-=sumAmmo[1];
				AftLoad[0]-=AftSumAmmo[0];
				AftLoad[1]-=AftSumAmmo[1];
			}
			printf("前鱼雷管:G7A:%d发，G7E:%d发，水雷：%d枚,装填区：G7A:%d发，G7E:%d发\n",FwTube[0],FwTube[1],FwTube[2],FwLoad[0],FwLoad[1]);
			if(damage_status[9]!=0)printf("前鱼雷管坏了%d个",damage_status[9]);
			printf("后鱼雷管:G7A:%d发，G7E:%d发，水雷：%d枚,装填区：G7A:%d发，G7E:%d发\n",AftTube[0],AftTube[1],AftTube[2],AftLoad[0],AftLoad[1]);
			if(damage_status[10]!=0)printf("前鱼雷管坏了%d个",damage_status[10]);
			if(damage_status[8]==0)printf("甲板炮:%d发弹药（一次最多2发）\n",DeckAmmo);
			else printf("甲板炮坏了\n");
			printf("Gregson:装填完毕\n");

			if(!haveEscort)//考虑额外轮攻击
			{
				int sumHealth=0;
				for(int i=0;i<numbers;i++)
				{
					sumHealth+=health[i][0];
				}
				if(sumHealth!=0)
				{
					printf("1WO:需要再次攻击吗，长官？(1.要 2.算了）\n");
					scanf("%d",&choose);
					if(choose!=1)
					{
						print("我：算了吧，放过他们！\n");
						print("Eric:继续巡航!\n");
					}
					else//跟踪成功
					{
						print("我：给我再打！，别让他们跑了！\n");
						print("Gregson:动起来！继续打！");
						clean();
						int meet=roll(2);
						if(year==1942)meet-=1;
						else if(year==1943)meet-=2;

						if(meet==4||meet==5)
						{
							if(meetAircraft())
							{
								printf("2WO：太棒了！我们可以继续打击猎物了\n");
								goto loop7;//1代表VIICFk打飞机成功
							}
							else printf("2WO:哦，，，到手的天鹅飞了。。:(\n");

						}
						else if(meet<4)
						{
							haveEscort=1;
							print("护航船只赶来了...\n");
							if(!detect(0,0,0,2,0,0,0))goto loop7;
							else goto loop14;
						}
						else 
						{
							goto loop7;
						}
					}
				}
			}


		}
		else if(!detect(0,0,0,1,0,0,0))
		{
			printf("1WO：我们进入了攻击位置！\n");
			goto loop7;
		}
	}
	else goto loop5;
	loop10:;
}

void meetConvoy()
{

}
void meetNAShip(int numbers,int haveEscort)
{

}
void meetNAConvoy()
{

}
void meetTanker()
{

}
void meetNATanker()
{

}
void meetCapitalShip()
{

}
void meetEscort()
{

}
void ramdomEvent()
{

}
void nothingHappened()
{
	printf("我：这几天海上没有好的猎物啊。。\n");
}
void repairComponent()//此处决定返航
{

}

void day(char* place,int timenows)//timenows未处理
{
	int pl;   
	strcpy(missionStack[process[0]],place);
	Times[process[0]]=timenows;
	process[0]++;

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
	if(strcmp(place,"比斯开湾"))pl=12;
	else if(strcmp(place,"直布罗陀"))pl=11;
	else if(strcmp(place,"路上"))pl=10;
	else if(strcmp(place,"西班牙海岸"))pl=9;
	else if(strcmp(place,"挪威"))pl=8;
	else if(strcmp(place,"北美"))pl=7;
	else if(strcmp(place,"地中海"))pl=6;
	else if(strcmp(place,"西非海岸"))pl=5;
	else if(strcmp(place,"加勒比海"))pl=4;
	else if(strcmp(place,"英吉利海峡"))pl=3;
	else if(strcmp(place,"大西洋"))pl=2;
	else if(strcmp(place,"北极"))pl=1;
	else if(strcmp(place,"Mission"))pl=0;
	else printf("程序故障");

	clean();
	printf("————————%d年%d月%s的%s任务的第%d站：%s—————————\n",year,month,mission[mName],missionType[mType],process[0],place);
	if(giveup==1)printf("(任务已放弃，向最近基地航行中。。。)\n");
	int meet;
	loop4:meet=roll(2);
	switch(pl)
	{
		case 12:
			{
				if(year==1942)meet--;
				else if(year==1943)meet-=2;

				if(meet<5)meetAircraft();
				else nothingHappened();
				break;
			}
		case 11:
			{
				if(year==1942)meet-=3;
				else if(year==1943)meet-=4;
				if(meet==4||meet==5)meetAircraft();
				else if(meet<4)meetEscort();
				else nothingHappened();
				break;
			}
		case 10:
			{
				if(meet==2||meet==3)meetAircraft();
				else if(meet==12&&firstTwelve==0)meetShip(1,0);
				else if(meet==12&&firstTwelve==1)
				{
					firstTwelve=0;
					ramdomEvent();
				}
				else nothingHappened();
				break;
			}
		case 9:
			{
				if(meet==2||(meet==12&&firstTwelve==0))meetAircraft();
				else if(meet==5)meetShip(1,1);
				else if(meet==6||meet==7)meetShip(1,0);
				else if(meet==10||meet==11)meetConvoy();
				else if(meet==12&&firstTwelve==1)
				{
					firstTwelve=0;
					ramdomEvent();
				}
				else nothingHappened();
				break;
			}
		case 8:
			{
				if(meet==2||(meet==12&&firstTwelve==0))meetAircraft();
				else if(meet==4||meet==9||meet==10)meetShip(1,1);
				else if(meet==3||meet==11)meetCapitalShip();
				else if(meet==12&&firstTwelve==1)
				{
					firstTwelve=0;
					ramdomEvent();
				}
				else nothingHappened();
				break;
			}
		case 7:
			{
				if(meet==2)meetAircraft();
				else if(meet==4||meet==6)meetNAShip(1,0);
				else if(meet==5)meetNAShip(2,1);
				else if(meet==8)meetNAShip(2,0);
				else if(meet==9||(meet==12&&firstTwelve==0))meetNATanker();
				else if(meet==11)meetNAConvoy();
				else if(meet==12&&firstTwelve==1)
				{
					firstTwelve=0;
					ramdomEvent();
				}
				else nothingHappened();
				break;
			}
		case 6:
			{
				if(meet==2||meet==3||meet==11||(meet==12&&firstTwelve==0))meetAircraft();
				else if(meet==4)meetCapitalShip();
				else if(meet==7)meetShip(1,0);
				else if(meet==10)meetShip(2,1);
				else if(meet==8)meetConvoy();
				else if(meet==12&&firstTwelve==1)
				{
					firstTwelve=0;
					ramdomEvent();
				}
				else nothingHappened();
				break;
			}
		case 5:
			{
				if(meet==12&&firstTwelve==0)meetAircraft();
				else if(meet==2)meetCapitalShip();
				else if(meet==3||meet==7)meetShip(1,0);
				else if(meet==6||meet==10)meetConvoy();
				else if(meet==9)meetShip(1,1);
				else if(meet==12&&firstTwelve==1)
				{
					firstTwelve=0;
					ramdomEvent();
				}
				else nothingHappened();
				break;
			}
		case 4:
			{
				if(meet==2||(meet==12&&firstTwelve==0))meetAircraft();
				else if(meet==4||meet==8)meetShip(1,0);
				else if(meet==6)meetShip(2,1);
				else if(meet==9||meet==10)meetTanker();
				else if(meet==12&&firstTwelve==1)
				{
					firstTwelve=0;
					ramdomEvent();
				}
				else nothingHappened();
				break;
			}
		case 3:
			{
				if(meet==12&&firstTwelve==0)meetAircraft();
				else if(meet==2)meetCapitalShip();
				else if(meet==5||meet==8)meetShip(1,0);
				else if(meet==6)meetShip(1,1);
				else if(meet==10)meetConvoy();
				else if(meet==12&&firstTwelve==1)
				{
					firstTwelve=0;
					ramdomEvent();
				}
				else nothingHappened();
				break;
			}
		case 2:
			{
				if((meet==12&&firstTwelve==0)||meet==6||meet==7||meet==9)meetConvoy();
				else if(meet==2)meetCapitalShip();
				else if(meet==3)meetShip(1,0);
				else if(meet==12&&firstTwelve==1)
				{
					firstTwelve=0;
					ramdomEvent();
				}
				else nothingHappened();
				break;
			}
		case 1:
			{
				if(meet==12&&firstTwelve==0)meetAircraft();
				else if(meet==2)meetCapitalShip();
				else if(meet==3)meetShip(1,0);
				else if(meet>5&&meet<9)meetConvoy();
				else if(meet==12&&firstTwelve==1)
				{
					firstTwelve=0;
					ramdomEvent();
				}
				else nothingHappened();
				break;
			}
		case 0:
			{
				if(meet<4)
				{
					meetAircraft();
					repairComponent();
					if(giveup==0)printf("逃过了此劫后，你们继续进行%s任务",missionType[mType]);
					else 
					{
						printf("很遗憾，你们被迫放弃任务了\n");
						patrolSuccess=0;
						goto loop12;
					}
					goto loop4;
				}
				printf("任务顺利完成了，大家欢呼雀跃，决定今晚好好喝一杯！\n");
				patrolSuccess=1;
			}
		default:
			{
				printf("程序错误");
			}
	}
	if(pl!=0)repairComponent();
	loop12:;
}

void promotionKmdt()
{

}

void promotion()
{

}

void rest()
{

}

void theEnd()
{

}

void execMission()
{
	patrolSuccess=0;
	back=0;
	giveup=0;
	switch(mName)
	{
		case 0:
			{
				switch(typeNumber)
				{
					case 1:
						{
							process[0]=0;
							process[1]=7;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 2:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 3:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 4:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",2);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 5:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 6:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",3);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 7:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("Mission",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",2);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 8:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("西班牙海岸",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					default:
						{
							printf("程序故障");
						}
				}
				break;
			}
		case 1:
			{
				switch(typeNumber)
				{
					case 1:
						{
							process[0]=0;
							process[1]=7;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("英吉利海峡",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 2:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("英吉利海峡",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 3:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("英吉利海峡",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 4:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("英吉利海峡",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",2);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 5:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("英吉利海峡",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 6:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("英吉利海峡",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",3);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 7:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("Mission",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",2);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 8:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("英吉利海峡",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("英吉利海峡",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					default:
						{
							printf("程序故障");
						}
				}
				break;
			}
		case 2:
			{
				switch(typeNumber)
				{
					case 1:
						{
							process[0]=0;
							process[1]=7;
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							clean();
							break;
						}
					case 2:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							clean();
							break;
						}
					case 3:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							clean();
							break;
						}
					case 4:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",2);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							clean();
							break;
						}
					case 5:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							clean();
							break;
						}
					case 6:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",3);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							clean();
							break;
						}
					case 7:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("Mission",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							clean();
							break;
						}
					case 8:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("挪威",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							clean();
							break;
						}
					default:
						{
							printf("程序故障");
						}
				}
				break;
			}
		case 3:
			{
				switch(typeNumber)
				{
					case 1:
						{
							process[0]=0;
							process[1]=7;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 2:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 3:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 4:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",2);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 5:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 6:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",3);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 7:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("Mission",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",2);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 8:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("大西洋",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					default:
						{
							printf("程序故障");
						}
				}
			}
		case 4:
			{
				process[0]=0;
				process[1]=10;
				if(back==0)day("比斯开湾",1);
				if(back==0)day("路上",1);
				if(back==0)day("路上",1);
				if(back==0)day("西非海岸",1);
				if(back==0)day("西非海岸",2);
				if(back==0)day("西非海岸",1);
				if(back==0)day("西非海岸",1);
				if(back==0)day("路上",1);
				if(back==0)day("路上",1);
				if(back==0)day("比斯开湾",1);
				clean();
				break;
			}
		case 5:
			{
				switch(typeNumber)
				{
					case 1:
						{
							process[0]=0;
							process[1]=7;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("直布罗陀",1);
							if(back==0)day("地中海",1);
							if(back==0)day("地中海",1);
							if(back==0)day("地中海",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							clean();
							break;
						}
					case 2:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("直布罗陀",1);
							if(back==0)day("地中海",1);
							if(back==0)day("地中海",1);
							if(back==0)day("地中海",1);
							if(back==0)day("地中海",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							clean();
							break;
						}
					case 5:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("直布罗陀",1);
							if(back==0)day("地中海",1);
							if(back==0)day("地中海",1);
							if(back==0)day("地中海",1);
							if(back==0)day("地中海",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							clean();
							break;
						}
				}
				stayInTheMed=1;
				printf("可能你没有注意到，进入地中海真的不容易，\n");
				printf("德军高层决定让你以后留在地中海执行任务，直到你换个别的潜艇。");
			}
		case 6:
			{
				switch(typeNumber)
				{
					case 1:
						{
							process[0]=0;
							process[1]=10;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("北美",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("北美",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 2:
						{
							process[0]=0;
							process[1]=11;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("北美",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("北美",1);
							if(back==0)day("北美",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 3:
						{
							process[0]=0;
							process[1]=12;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("北美",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("北美",2);
							if(back==0)day("北美",1);
							if(back==0)day("北美",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 4:
						{
							process[0]=0;
							process[1]=12;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("北美",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("北美",2);
							if(back==0)day("北美",1);
							if(back==0)day("北美",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 5:
						{
							process[0]=0;
							process[1]=11;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("北美",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("北美",1);
							if(back==0)day("北美",1);
							if(back==0)day("路上",1);if(back==0)day("路上",1);if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 6:
						{
							process[0]=0;
							process[1]=12;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("北美",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("北美",2);
							if(back==0)day("北美",2);
							if(back==0)day("北美",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 7:
						{
							process[0]=0;
							process[1]=12;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("Mission",1);
							if(back==0)day("北美",2);
							if(back==0)day("北美",1);
							if(back==0)day("北美",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 8:
						{
							process[0]=0;
							process[1]=11;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("北美",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("北美",1);
							if(back==0)day("北美",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					default:
						{
							printf("程序故障");
						}
				}
				break;
			}
		case 7:
			{
				switch(typeNumber)
				{
					case 1:
						{
							process[0]=0;
							process[1]=7;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("北极",1);
							if(back==0)day("北极",1);
							if(back==0)day("北极",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 2:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("北极",1);
							if(back==0)day("北极",1);
							if(back==0)day("北极",1);
							if(back==0)day("北极",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 5:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("北极",1);
							if(back==0)day("北极",1);
							if(back==0)day("北极",1);
							if(back==0)day("北极",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 7:
						{
							process[0]=0;
							process[1]=9;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("Mission",1);
							if(back==0)day("北极",1);
							if(back==0)day("北极",2);
							if(back==0)day("北极",1);
							if(back==0)day("北极",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 8:
						{
							process[0]=0;
							process[1]=8;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("北极",1);
							if(back==0)day("北极",1);
							if(back==0)day("北极",1);
							if(back==0)day("北极",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					default:
						{
							printf("程序故障");
						}
				}
				break;
			}
		case 8:
			{
				switch(typeNumber)
				{
					case 3:
						{
							process[0]=0;
							process[1]=12;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("加勒比海",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("加勒比海",2);
							if(back==0)day("加勒比海",1);
							if(back==0)day("加勒比海",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 4:
						{
							process[0]=0;
							process[1]=12;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("加勒比海",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("加勒比海",2);
							if(back==0)day("加勒比海",1);
							if(back==0)day("加勒比海",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					case 6:
						{
							process[0]=0;
							process[1]=12;
							if(back==0)day("比斯开湾",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(mType==3||mType==1)if(back==0)day("加勒比海",1);
							else if(back==0)day("Mission",1);
							if(back==0)day("加勒比海",2);
							if(back==0)day("加勒比海",2);
							if(back==0)day("加勒比海",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("路上",1);
							if(back==0)day("比斯开湾",1);
							clean();
							break;
						}
					default:
						{
							printf("程序故障");
						}
				}
				break;
			}
		default:
			{
				printf("程序故障");
			}
	}
	if(back==1)backHome();
	if(typeNumber==1||typeNumber==2||typeNumber==5||typeNumber==8||back==1)
	{
		if(month==12){month=1;year++;}
		else month++;
	}
	else if(typeNumber==3||typeNumber==4||typeNumber==6||typeNumber==7)
	{
		if(month==11){month=1;year++;}
		else if(month==12){month=2;year++;}
		else month+=2;
	}
}
int patrol()
{		//working...
	int mNumber=roll(2);

	firstTwelve=1;

	if(year==1939||((year==1940)&&(month<4)))
	{
		if(mNumber==2)
		{
			mName=0;
			mType=3;
		}
		else if(mNumber==3||mNumber==4||mNumber==6||mNumber==7||mNumber==8||mNumber==10||mNumber==11)
		{
			mName=1;
			mType=3;
		}
		else if(mNumber==5||mNumber==9)
		{
			mName=1;
			mType=0;
		}
		else if(mNumber==12)
		{
			mName=4;
			mType=3;
		}
		else	
		{
			printf("程序故障,报错");
		}

	}
	else
	{
		//待一会做




	}//mission[9][20]={"西班牙海岸","英吉利海峡","挪威","大西洋","西非海岸","地中海","北美","北极","加勒比海"};
	if(typeNumber==3||typeNumber==4||typeNumber==6)
	{
		if(mName==5||mName==7)mName=4;
	}
	if(typeNumber==1||typeNumber==2||typeNumber==5||typeNumber==8)
	{
		if(mName==8||mName==4)mName=3;
	}
	if(typeNumber==8)
	{
		if(mName==5)return 0;
	}
	if(typeNumber==7)
	{
		if(mName==5||mName==4||mName==8)return 0;
		if(!(mType==2))mType=0;
	}
	if(stayInTheMed)
	{
		mName=5;
		mType=3;
	}
	printf("————————————%d年%d月————————————",year,month);
	printf("我：我们要去%s执行%s任务了！\n",mission[mName],missionType[mType]);
	printf("Eric:是！（敬礼）\n");
	clean();

	execMission();
	return 1;
}

void main() 
{
	srand((unsigned)time(NULL));
	print("————————————欢迎来到《潜杀猎航》————————————\n********************************************\n");
	print("哨兵前台:这里是大德意志大西洋海军司令部，请出示身份证明:\n");
	print("(若你是第一次游玩，输入你的名字，若你是来继续游戏，输入'%')\n");
	scanf("%s",player);
	if(player[0]=='%')
	{
		//read_data();
		printf("哨兵前台:你好,%s指挥官",player);sleep(1);
		//working...

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

		if(0)
		{
			loop1: clrscr();
			printf("Wilson:哦，看清楚要求！现在已经是1939年9月了，战局万变，你不能在1943年6月后才来为帝国效力\n(如果这是第2次及以上问你，那应该是你之前输入了不合要求的时间)\n");}		
		print("年份？（1939-1943）:");decreaseLine();
		scanf("%d",&year);
		print("月份？（1-12,注意从1939年9月开始，至1943年6月结束）:");decreaseLine();
		scanf("%d",&month);
		promotionMonth=month;

		clrscr();
		printBuff();
		printf("我:我打算%d年%d月在这里服役\n",year,month);sleep(1);

		switch(year)
		{
			case 1939: 
				{
					if(month<9||month>12)goto loop1;
					print("Wilson:这么心急？好！帝国正需要你这样的热心人才！现在，编制人数不多，你直接被任命为Kapitänleutnant.\n");
					print("趁着英国佬还没什么对我们的准备，我们想想办法好好干他一炮！");
					break;
				}
			case 1940: 
				{
					if(month<1||month>12)goto loop1;
					print("Wilson:也行，那么帝国潜艇部队明年等候你的到来!\n");
					break;
				}
			case 1941: 
				{
					if(month<1||month>12)goto loop1;
					print("Wilson:哈？想等我们有了更成熟的装备和技巧再来？\n不愧是你，成熟而又稳重，对吧？");
					break;
				}
			case 1942: 
				{
					if(month<1||month>12)goto loop1;
					print("最近手上有些项目忙不过来？嗯，你要记住，帝国利益要放在第一位！\n好机会可不是年年有的。你有点保守？好吧，我们部队会给你展现他的实力\n");
					break;
				}
			case 1943: 
				{
					if(month>6||month>12)goto loop1;
					printf("有点过于慎重了？\n我们没法预测到那时的战局，");sleep(2);
					printf("祝我们共同好运吧！\n");
					break;
				}
			default: goto loop1;
		}


		print("你正是我所期盼的那样！\n");



		//print("那么，稍作休整，就出征吧。帝国以你为傲！\n");
		print("我:Heil Hitler!（高举左手）\n");
		clean();

		if(year==1939&&month>9)printf("%d个月后...\n",month-9);
		else if(year==1940&&month<9)printf("%d个月后...\n",month+3);
		else if(month>9)printf("%d年%d个月后...\n",year-1939,month-9);
		else if(month<9)printf("%d年%d个月后...\n",year-1940,month+3);
		else if(year!=1939)printf("%d年后...\n",year-1939);
		else printf("第二天\n");

		if(year>1939||month>9)sleep(3);
		if(0) loop2: print("(如果这是第2次及以上问你，那应该是你之前输入了不合要求的时间)\n");
		print("————————————（难得的晴天）船坞里————————————\n");
		print("Wilson：准备好了，我的朋友？选一艘你喜欢的潜艇吧！\n");
		printf("船坞里有几种型号的潜艇:VIIA,VIIB,IXA");		//潜艇型号随时间更新
		if(year>1940||(year==1940&&month>3))printf(",IXB");
		if(year>1940||(year==1940&&month>9))printf("另一边还有：VIIC");
		if(year>1941||(year==1941&&month>4))printf(",IXC");
		if(year>1941)printf(",VIID ");
		if(year==1943&&month>4)printf(",VIICFk");
		printf("\n");
		sleep(1);

		printf("1.VIIA 2.VIIB 3.IXA ");
		if(year>1940||(year==1940&&month>3))printf("4.IXB ");
		if(year>1940||(year==1940&&month>9))printf("\n5.VIIC ");
		if(year>1941||(year==1941&&month>4))printf("6.IXC ");
		if(year>1941)printf("7.VIID ");
		if(year==1943&&month>4)printf("8.VIICFk");
		printf("\n");


		scanf("%d",&choose);
		switch(choose) 
		{
			case 1: 
				{
					strcpy(type,"VIIA");
					typeNumber=1;
					break;
				}
			case 2: 
				{
					strcpy(type,"VIIB");
					typeNumber=2;
					break;
				}
			case 3: 
				{
					strcpy(type,"IXA");
					typeNumber=3;
					break;
				}
			case 4: 
				{
					if(!(year>1940||(year==1940&&month>3)))goto loop2;
					strcpy(type,"IXB");
					typeNumber=4;
					break;
				}
			case 5: 
				{
					if(!(year>1940||(year==1940&&month>9)))goto loop2;
					strcpy(type,"VIIC");
					typeNumber=5;
					break;
				}
			case 6: 
				{
					if(!(year>1941||(year==1941&&month>4)))goto loop2;
					strcpy(type,"IXC");
					typeNumber=6;
					break;
				}
			case 7: 
				{
					if(!(year>1941))goto loop2;
					strcpy(type,"VIID");
					typeNumber=7;
					break;
				}
			case 8: 
				{
					if(!(year==1943&&month>4))goto loop2;
					strcpy(type,"VIICFk");
					typeNumber=8;
					break;
				}
			default: 
				{
					goto loop2;
				}
		}
		clrscr();
		printBuff();
		printf("我：我要Type %s！这艘怎么样？(指向旁边的一艘U艇）\n",type);sleep(2);
		printf("Wilson:好嘛我的朋友，你挺有眼光的嘛，我也很喜欢Type %s的艇。\n顺带说一句，IX系列指挥官都是Kapitänleutnant喔\n",type);sleep(3);
		print("这艘船归你了我的艇长\n");

		int ra=roll(1);
		if(year==1939||(year==1940&&ra>2)||(year==1941&&ra>3)||(year>1941&&ra==6)||type[0]=='I')strcpy(rank,"Kapitänleutnant");
		else strcpy(rank,"Oberleutnant");
		show_card();
		clean();
		print("（指向旁边）这是我们帝国第一批优秀的艇员——他们都受过足够的训练\n");
		printf("Peter:你好，%s先生哦不艇长,我和Eric,Leo,Tommy是这艘艇的士官长\n",player);sleep(2);
		print("Eric,Leo,Tommy:Hi!\n");

		print("Dr:我知道你记不下来那么多名字，你就叫我Dr吧，我是这艘艇的医生\n");
		print("1WO:我是这艘艇的大副\n");
		print("2WO:我是这艘艇的二副\n");
		print("LI:我是这艘艇的随舰工程师\n");
		print("Wilson:够多人了？要不是有那4个士官长，你还需要和40多个其他艇员打招呼！\n");
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

		do
		{
			paloop:if(patrol()==0)goto paloop;
			if(year<1943||(year==1943&&month<7))rest();
		}
		while(year<1943||((year==1943)&&(month<7)));
		theEnd();
	}
}

