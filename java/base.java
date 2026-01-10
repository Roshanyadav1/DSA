import java.util.*;

class base {
    public static void main(String[] args) {
        ArrayList<Integer> List = new ArrayList<Integer>();

        List.add(10);
        List.add(20);
        List.add(30);
        List.add(40);

        for (int i = 0; i < List.size(); i++) {
            System.out.println(List.get(i));
        }

    }
}