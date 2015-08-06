
#[test]
fn it_works() {
}

#[test]
fn make_arrays() {
    let a = [1, 2, 3]; // a: [i32; 3]
    let b = ["a";20]; // b: [i32, 20] ... 20 "a"s.]
    // let c: [i32, 5];

    assert_eq!(a.len(),3);
    assert_eq!(b.len(),20);
}

#[test]
fn access_arrays() {
    let mut zombies = [["carrot", "apple"],["kumquat","potato"],["rutabega","samson"]];
        // should be [[&str,2],3]

    assert_eq!(zombies[1][0],"kumquat");
    
    zombies[0] = ["try this", "and that"];
    assert_eq!(zombies[0][1], "and that");
    // assert_eq!(zombies[2][..], ["try this", "and that"]);
    // why does the below work but not the above?
     assert_eq!(&zombies[2][1..], ["samson"]);
}

