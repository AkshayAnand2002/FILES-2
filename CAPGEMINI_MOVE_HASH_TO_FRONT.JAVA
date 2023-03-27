import java.util.*;
public class Main
{
    public static void moveHash(String str,int n){
        String str1=new String("");
        String str2=new String("");
        int i=0;
        for(i=0;i<n;i++){
            if(str.charAt(i)=='#'){
                str1=str1+str.charAt(i);
            }
            else{
                str2=str2+str.charAt(i);
            }
        }
        String result=str1.concat(str2);
        System.out.println(result);
    }
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String a=sc.nextLine();
		int len=a.length();
		moveHash(a,len);
	}
}
