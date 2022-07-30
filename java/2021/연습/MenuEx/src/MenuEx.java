import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class MenuEx extends JFrame{
	private JTextArea ta = new JTextArea(20,40);
	public MenuEx() {
		setTitle("메모장");
		createMenu();
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		c.add(new JScrollPane(ta));
		setSize(500,500);
		setVisible(true);
	}
	private void createMenu() {
		JMenuBar mb = new JMenuBar();
		JMenu fileMenu = new JMenu("파일");		
		fileMenu.add(new JMenuItem("새로만들기"));
		fileMenu.add(new JMenuItem("새 창"));
		fileMenu.add(new JMenuItem("열기"));
		mb.add(fileMenu);
		
		JMenu editMenu = new JMenu("편집");
		editMenu.add(new JMenuItem("실행 취소"));
		editMenu.addSeparator();
		editMenu.add(new JMenuItem("잘라내기"));
		editMenu.add(new JMenuItem("복사"));
		mb.add(editMenu);
		
		JMenu fomulaMenu = new JMenu("서식");
		fomulaMenu.add(new JMenuItem("자동 줄 바꿈"));
		fomulaMenu.add(new JMenuItem("글꼴"));
		mb.add(fomulaMenu);
		
		JMenu seeMenu = new JMenu("보기");
		seeMenu.add(new JMenuItem("확대/축소"));
		seeMenu.add(new JMenuItem("상태 표시줄"));
		mb.add(seeMenu);
		
		JMenu helpMenu = new JMenu("도움말");
		helpMenu.add(new JMenuItem("도움말 보기"));
		helpMenu.add(new JMenuItem("피드백 보내기"));
		helpMenu.addSeparator();
		helpMenu.add(new JMenuItem("메모장 정보"));
		mb.add(helpMenu);
		
		setJMenuBar(mb);
	}
	
	
	public static void main(String[] args) {
		new MenuEx();
	}
}