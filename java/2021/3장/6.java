import java.util.Scanner;

public class practice {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String eng[] = {"student","love","java","happy","future"};
		String kor[] = {"학생","사랑","자바","행복한","미래"};
		String n;
		int a;              //a가 0이라면 단어가 없음, 1이라면 단어가 있음
		while(true) {
			a = 0;            //초기화
			System.out.println("영어 단어를 입력하세요>>");
			n = sc.next();
			if(n.equals("exit")) {
				System.out.println("종료합니다...");
				break;
			}
			for(int i=0; i<eng.length; i++) {
				if(n.equals(eng[i])) {
					System.out.println(kor[i]);
					a = 1;        //단어가 있다고 알려줌
					break;
				}
			}
			if(a==0)
				System.out.println("그런 영어 단어가 없습니다.");
		}
		
		sc.close();
	}
}
