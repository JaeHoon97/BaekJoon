import Foundation

func solution(_ n:Int) -> Int {
    
    if n == 0 || n == 1 { return n }
    
    var arr: [Int] = [0, 1]
    
    for num in 2...n {
        let next = arr[0] + arr[1]
        arr[0] = arr[1] % 1234567
        arr[1] = next % 1234567
    }
    
    return arr[1]
}