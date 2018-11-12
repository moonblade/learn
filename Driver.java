import java.io.*;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;
class Driver {
    Driver() {
        try{

            File f = new File("./inFile");
            Scanner sc = new Scanner(f);
            ArrayList<ArrayList<Integer>> a = new ArrayList<ArrayList<Integer>>();
            String s;
            HashMap<String, Integer> lineMap = new HashMap<String, Integer>();
            
            while (sc.hasNextLine()) {
                s = sc.nextLine();
                ArrayList<Integer> line = new ArrayList<Integer>();
                lineMap.clear();
                for (String x: s.split(" ")) {
                    if (lineMap.get(x) != null) {
                        lineMap.put(x, lineMap.get(x) + 1);
                    }else {
                        lineMap.put(x, 1);
                    }
                }
                for (String x: s.split(" ")) {
                    if (lineMap.get(x) != 0) {
                        line.add(lineMap.get(x));
                        lineMap.put(x, 0);
                    }
                }
                a.add(line);
            }
            for (ArrayList<Integer> arLine: a) {
                for (Integer ar: arLine) {
                    System.out.printf(ar + " ");
                }
                System.out.println();
            }
            sc.close();
        }catch (Exception e) {

        }
    }
    public static void main(String[] args) {
        Driver d = new Driver();
    }
}