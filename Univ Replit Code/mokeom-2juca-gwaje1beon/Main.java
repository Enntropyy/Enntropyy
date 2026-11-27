/* 

1. 문장을 입력받아서 1번 이상 나온 알파벳과 횟수 출력 (대소문자 구분)
 (ex. 입력: AaBB -> 출력. A:1, a:1, B:2)

 2. 정수(int)를 String으로 변환하는 여러가지 방법들 코드 설명

 3. String을 Double로 변환하는 방법
 (ex. “23.45” -> 23.45)

 4. String에서 단어의 개수 출력하기
 (ex. “This is” -> 2, “A good dog” -> 3)

*/
import java.util.Scanner;

class CountAlphabet {
  public static void main(String[] args) {
    int cnt_c = new int[26];
    int cnt_s = new int[26];

    Scanner sc = new Scanner(System.in);
    String str;
    System.out.print("문자열을 입력하시오 : ");
    str = sc.nextLine();

    for(int i = 0; i<str.length(); i++) {
      char alp = str.charAt(i);

      if(alp > 'A' && alp <= 'Z') {
        cnt_c[alp - 'A']++;
      }
      else if(alp >= 'a' && alp <= 'z') {
        cnt_s[alp - 'a']++;
      }
    }

    for (int i = 0; i < 26; i++) {
      if(cnt_c[i] != 0) {
        System.out.println((char)(65 + i)+":"+cnt_c[i]);
      }
    }
    
    for (int i = 0; i < 26; i++) {
      if(cnt_s[i] != 0) {
        System.out.println((char)(97 + i)+":"+cnt_s[i]);
      }
    }
    
  }
}