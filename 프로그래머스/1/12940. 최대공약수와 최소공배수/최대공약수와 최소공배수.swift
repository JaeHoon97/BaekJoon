import Foundation

func solution(_ n:Int, _ m:Int) -> [Int] {
    let gcd = getGCD(n ,m)
    let lcm = (n * m) / gcd
    
    return [gcd, lcm]
}

func getGCD(_ x:Int , _ y: Int) -> Int {
    // a > b
    let a = max(x, y)
    let b = min(x, y)
    
    return (a % b != 0) ? getGCD(b, a % b) : b
}
