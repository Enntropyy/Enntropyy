import java.util.Scanner;

public class CountWord {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("문장을 입력하시오: ");
    String str = sc.nextLine();
    int count = 1;

    for(int i=1; i<str.length()-1; i++){
      if(str.charAt(i) == 32) {
        count++;
      }
    }
    if(str.length() == 0 || str.equals(" ")) {
      System.out.println(0);
    }
    else {
      System.out.println(count);
    }
  }
}