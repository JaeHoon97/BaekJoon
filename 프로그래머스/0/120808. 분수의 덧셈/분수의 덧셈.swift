import Foundation

func solution(_ numer1:Int, _ denom1:Int, _ numer2:Int, _ denom2:Int) -> [Int] {
    let numer3 = (numer1 * denom2) + (numer2 * denom1)
    let denom3 = (denom1 * denom2)
    
    let gcd = (numer3 > denom3) ? getGCD(numer3, denom3) : getGCD(denom3, numer3)
    
    return [(numer3 / gcd), (denom3 / gcd)]
}

func getGCD(_ x:Int , _ y:Int) -> Int {
    // a > b
    var a = x
    var b = y
    var r = a % b
    
    while r != 0 {
        a = b
        b = r
        r = a % b
    }
    
    return b
}