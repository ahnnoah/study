public class hello {
	public static void main(String[] arge) {
		for(int i=0; i<100; i++) {
			int first=i/10;
			int second=i%10;
			if(first%3==0&&first!=0) {
				if(second%3==0&&second!=0)
					System.out.println(i+" 박수두번");
			}
			else
				if(second%3==0&&second!=0)
					System.out.println(i+" 박수한번");
		}
		
	}
}
