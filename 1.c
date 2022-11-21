public class ConToBase {

    public static String convert(int n){
        String res = "";
        while(n>0){
            int rem = n%3;
            n = n/3;
            res = rem + res;
        }
        return res;
    }

    public static void main(String[] args) {
        int num = 10;
        System.out.println("The convertion of " + num + ": " + convert(num));
       
    }
}
