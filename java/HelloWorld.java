import java.io.*;

public class HelloWorld {
/* Because Life must be difficult */

    public static void main(String []args) throws IOException {
        System.out.println("Hello World!\n"); // does the thing

        BufferedReader streamin = null;

        try{
            streamin = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("What's your name, friend?: ");
            String name = streamin.readLine();
            if (name.equals(""))
                System.out.println("Hmm?");
            // TODO: make it get meaner and meaner
            // TODO: play with cond? statementA: statementB for inline ifs
            System.out.println("\nOh, it's you.");
            System.out.println("Fuck you " + name + ".");
        } finally {
            if (streamin != null) {
                streamin.close();
            }
        }

    }

}
