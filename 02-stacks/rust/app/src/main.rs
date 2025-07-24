fn main() {
    // Create a stack using the standard vector.
    let mut stack: Vec<i32> = vec![];

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    println!("Before pop");
    println!("{:#?}", stack);

    stack.pop();

    println!("After pop");
    println!("{:#?}", stack);

    println!("{}", stack.last().unwrap());

    println!("After peek");
    println!("{:#?}", stack);
}
