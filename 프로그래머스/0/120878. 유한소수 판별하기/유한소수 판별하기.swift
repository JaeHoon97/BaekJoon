import Foundation

func solution(_ a:Int, _ b:Int) -> Int {
    // 최대 공약수
    let gcd = (a > b) ? getGCD(a, b) : getGCD(b, a)
    // 분모
    var y = b / gcd
    // 유한 소수 판별
    
    while y != 1 {
        for num in 2...y {
            if y.isMultiple(of: num) {
                if num == 2 || num == 5 {
                    y /= num
                    break
                } else {
                    return 2
                }
            }
        }
    }
    
    return 1
}

func getGCD(_ x: Int, _ y: Int) -> Int {
    // x > y
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