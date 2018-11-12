class Driver {
    Driver() {
        File f = new File("./inFile");
        BufferedReader br = new BufferedReader(f);
    }
}
public static void main(String[] args) {
    Driver d= new Driver();
}