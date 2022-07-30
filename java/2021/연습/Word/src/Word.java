import java.util.Scanner;

public class Word {
	String str;
	char[] word;
	int changeNum = 0;
	int wordLen;
	
	public Word() {
		Scanner sc = new Scanner(System.in);
		while(true) {
			str = sc.next();
			word = str.toCharArray();
			wordLen = word.length;
			change();
			sort();
			System.out.println(new String(word));
		}
	}
	public void change() {
		char tmp;
		int flag = 0;
		for(int i = word.length-2; i>0; i--) {
			if(word[i] < word[wordLen-1]) {
				tmp = word[i];
				word[i] = word[wordLen-1];
				word[wordLen-1] = tmp;
				changeNum = i;
				flag = 1;
				break;
			}
		}
		if(flag == 0) {
			tmp = word[wordLen-1];
			word[wordLen-1] = word[wordLen-2];
			word[wordLen-2] = tmp;
		}
	}
	public void sort() {
		if(changeNum>0) {
			char tmp;
			int least;
			for(int i = changeNum; i<wordLen-1; i++) {
				least = i;
				for(int j = i+1; j<wordLen; j++) {
					if(word[least]>word[j])
						least = j;
				}
				tmp = word[i];
				word[i] = word[least];
				word[least] = tmp;
			}
		}
	}
}
