import java.util.Scanner;


public class Main
{

	static public void main(String []args)
	{
		//源码&密码
		String str[]=
		{
			" qwertyuiopasdfghjklzxcvbnmASDFGHJKLQWETRYUIOPZXCVBNM1234567890.,:!?"
			,"dMqQzDb5L0hEFtnPNAiWuvXKBOJlm.wCjsS1H aVR6:Ux!y9GZr2IcY8gfpT4o?,3ek7",
			"9uqTl4Qy8WFH?ERBn3CNDS.fpOVXx5Zw,JUP6gLYGz AIK1cMh7bm2js!dvt0ik:aero",
			"uPq8nOt1YoM!jNdx,SH6EsgBwVXAW2yZmR v0I5Tk7:ifUCGKe3rQFh.9JLbp4l?cDza",
			"HqaQzKAXGsw3VeNdTDxRcfrYZB51WP.FM62t!yuSiU8o,:Ip?lL4CO7kjhEgvbJ9n0 m",
			"qCsDazxAXdI!NFOVKweYrSf3Lc:PBv4gJUGR,t5WTyhZjuEi7kH l29op86?mnM01.bQ"
		};
		int key[]=new int[6];
		Scanner cin1=new Scanner(System.in);
		System.out.println("欢迎来到恩尼格码密码站！");
		System.out.println("调整转轮...(0-67)");
		key[0] = 0;
		key[1] = 0;
		key[2] = 0;
		key[3] = 0;
		key[4] = 0;
		key[5] = 0;

		for (int i=1;i < 5;i++)
		{
			System.out.print("轮" + i + ":");
			if (cin1.hasNext())key[i] = cin1.nextInt();
			if (key[i] > 67 || key[i] < 0)
			{
				System.out.println("输入错误，使用默认值");
				key[i] = 0;
				break;
			}
		}
		System.out.println("转轮：(" + key[1] + "," + key[2] + "," + key[3] + "," + key[4] + ")");
		//设置完成

		String board="";
		char t;
		System.out.println("请输入接线板的接入方式:(*表示停止接线)(a-z,A-Z,空格，英文逗，点，问，叹，冒");
		for(int i=0;i<10;i++)
		{
			System.out.println("线"+(i+1)+"左端:");
			t=(cin1.next().charAt(0));
			if(board.indexOf(t)!=-1)
			{
				System.out.println("输入重复，已撤销接线");
				break;
			}
			if(t!='*')board+=t;
			else break;
			System.out.println("线"+(i+1)+"右端:");
			t=(cin1.next().charAt(0));
			if(board.indexOf(t)!=-1)
			{
				System.out.println("输入重复，已撤销接线");
				board+=(board.charAt(i*2));
				break;
			}
			if(t!='*')board+=t;
			else 
			{
				System.out.println("先写完右端才能停止，默认使用原字符");
				board+=(board.charAt(i*2));
				break;
			}
		}
		
		
		System.out.println("解密还是加密?(0为加密，1为加解密)");
		if (cin1.nextInt() == 0)
		{
			encode(key, str,board);
		}

		else 
		{
			decode(key, str,board);
		}
		System.out.println("欢迎下次使用!");
		cin1.close();
	}

	static void encode(int key[], String[] str,String board)
	{
		Scanner cin =new Scanner(System.in);

		String s="";
		String encodemsg="";

		while (true)
		{
			
			encodemsg = "";

			System.out.println("请输入原文:(注意，只能用英文，符号也是)(含有*代表结束)");
			s = cin.nextLine();
			char c;
			for (int i=0;i < s.length();i++)
			{
				if (s.charAt(i) == '*'){cin.close();return;}
				c = s.charAt(i);
				
				if(board.indexOf(c)!=-1)
				{
					if(board.indexOf(c)%2==0)c=board.charAt(board.indexOf(c)+1);
					else c=board.charAt(board.indexOf(c)-1);
				}
				
				for (int j=0;j < 5;j++)
				{
					c = str[j + 1].charAt((str[0].indexOf(c) + (key[j + 1] - key[j]) + 68) % 68);
				}
				key[4]++;
				if (key[4] > 67)
				{
					key[4] -= 68;
					key[3]++;
				}
				if (key[3] > 67)
				{
					key[3] -= 68;
					key[2]++;
				}
				if (key[2] > 67)
				{
					key[2] -= 68;
					key[1]++;
				}
				if (key[1] > 67)
				{
					key[1] -= 68;
				}
				encodemsg += c;
			}

			System.out.println(encodemsg);
		}
		
	}

	static void decode(int key[], String[] str,String board)
	{
		Scanner cin =new Scanner(System.in);
		String s="";
		String encodemsg="";


		while (true)
		{

			encodemsg = "";


			System.out.println("请输入密文:(注意，不要带箭头号)(含有*代表结束)");
			s = cin.nextLine();

			char c;
			for (int i=0;i < s.length();i++)
			{
				if (s.charAt(i) == '*'){cin.close();return;}
				c = s.charAt(i);
				
				for (int j=0;j < 5;j++)
				{
					c = str[0].charAt((str[0].indexOf(str[0].charAt(str[5 - j].indexOf(c))) - (key[5-j] - key[4-j]) + 68) % 68);
				}
				if(board.indexOf(c)!=-1)
				{
					if(board.indexOf(c)%2==0)c=board.charAt(board.indexOf(c)+1);
					else c=board.charAt(board.indexOf(c)-1);
				}
				encodemsg += c;
				key[4]++;
				if (key[4] > 67)
				{
					key[4] -= 68;
					key[3]++;
				}
				if (key[3] > 67)
				{
					key[3] -= 68;
					key[2]++;
				}
				if (key[2] > 67)
				{
					key[2] -= 68;
					key[1]++;
				}
				if (key[1] > 67)
				{
					key[1] -= 68;
				}






			}

			System.out.println("-->" + encodemsg);
		}
	}


}
