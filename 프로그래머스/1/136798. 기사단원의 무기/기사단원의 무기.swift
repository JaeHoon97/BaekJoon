import Foundation

func solution(_ number:Int, _ limit:Int, _ power:Int) -> Int {
    var result: [Int] = Array(repeating: 0, count: number + 1)
    
    for num in 1...number {
        var sqrtOfNum = Int(sqrt(Double(num)))
        var cnt = 0
        
        for i in 1...sqrtOfNum {
            if num % i == 0 {
                ((num / i) == i) ? (cnt += 1) : (cnt += 2)
            }
        }
        result[num] = cnt
    }
    
    return result
        .map { ($0 > limit) ? power : $0  }
        .reduce(0, +)
}