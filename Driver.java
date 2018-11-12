import java.io.*;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;
class Driver {
    Driver() {
        try{
            // MAke a scanner for readine file
            File f = new File("./inFile");
            Scanner sc = new Scanner(f);

            // Arraylist of arraylist will function as matrix
            ArrayList<ArrayList<Integer>> a = new ArrayList<ArrayList<Integer>>();

            // String to read each line
            String s;

            // For each line to keep track of word count
            HashMap<String, Integer> lineMap = new HashMap<String, Integer>();
            
            while (sc.hasNextLine()) {
                // Read line
                s = sc.nextLine();

                // Make a new row for matrix
                ArrayList<Integer> line = new ArrayList<Integer>();

                // Clear hashmap for new line
                lineMap.clear();

                // For each word in line
                for (String x: s.split(" ")) {
                    // Add to linemap if exists, else set as one
                    if (lineMap.get(x) != null) {
                        lineMap.put(x, lineMap.get(x) + 1);
                    }else {
                        lineMap.put(x, 1);
                    }
                }

                // Go through it again, but only take one word once by setting the value to 0 once read
                for (String x: s.split(" ")) {
                    if (lineMap.get(x) != 0) {
                        line.add(lineMap.get(x));
                        lineMap.put(x, 0);
                    }
                }

                // Add row to matrix
                a.add(line);
            }

            // Print matrix
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