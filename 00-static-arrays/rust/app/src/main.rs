fn main() {
    // This creates a static array of the size 5.
    let static_array: [i32; 5] = [1, 2, 3, 4, 5];

    for element in static_array {
        println!("Hello: {}", element);
    }
}
