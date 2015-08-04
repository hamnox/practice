use std::io;
use std::io::stdout as stdout;
use std::io::Write;

fn response_to_str(buf: &mut String) {
    io::stdin().read_line(buf)
        .ok()                       // morphs to Option
        .expect("Failed to read line"); // yields Some, or panics
}

fn main() {
    println!("Hello World!");

    println!("Let's play echo chamber: (say bye to leave)");
    stdout().flush(); // doesn't seem to print before the loop unless i do this 
    
    let mut mah_string = String::new();
    loop {
        mah_string.clear();
        stdout().flush();

        response_to_str(&mut mah_string);

        if mah_string == "bye\n" {
            println!("> Adios amigo");
            break;
        }
        println!("> {}",mah_string);
    }
}


#[test]
fn it_works() {
}
