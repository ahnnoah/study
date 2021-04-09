import java.util.Scanner;

public class hello {
	public static void main(String[] arge) {
		Scanner sc = new Scanner(System.in);
		String str[] = {"가위", "바위", "보"};
		int com;
		String me;
		System.out.println("컴퓨터와 가위 바위 보 게임을 합니다.");
		while(true) {
			System.out.println("가위 바위 보! >> ");
			me=sc.next();
			if(me.equals("그만")) {
				System.out.println("게임을 종료합니다...");
				break;
			}
			com=(int)(Math.random()*3);
			System.out.print("사용자 = "+me+" , 컴퓨터 = "+str[com]+", ");
			if(str[com].equals("가위")) {
				if(me.equals("가위"))
					System.out.println("비겼습니다.");
				else if(me.equals("바위"))
					System.out.println("사용자가 이겼습니다.");
				else if(me.equals("보"))
					System.out.println("컴퓨터가 이겼습니다.");
			}
			else if(str[com].equals("바위")) {
				if(me.equals("가위"))
					System.out.println("컴퓨터가 이겻습니다.");
				else if(me.equals("바위"))
					System.out.println("비겼습니다.");
				else if(me.equals("보"))
					System.out.println("사용자가 이겼습니다.");
			}
			else if(str[com].equals("보")) {
				if(me.equals("가위"))
					System.out.println("사용자가 이겼습니다.");
				else if(me.equals("바위"))
					System.out.println("컴퓨터가 이겼습니다.");
				else if(me.equals("보"))
					System.out.println("비겼습니다.");
			}
		}
		
		sc.close();
	}
}
