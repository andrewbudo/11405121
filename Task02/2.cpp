use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let n: usize = input.trim().parse().unwrap();

    input.clear();
    io::stdin().read_line(&mut input).unwrap();
    let lengths: Vec<i32> = input.split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let sum: i32 = lengths.iter().sum();
    let avg = sum / n as i32;

    let mut cost = 0;
    for &length in &lengths {
        cost += (length - avg).abs();
    }

    println!("{}", cost);
}
