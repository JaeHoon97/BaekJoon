import Foundation

func solution(_ n:Int) -> Int {
    
    if n == 0 || n == 1 { return n }
    
    let sqaureRoot = sqrt(Double(n))
    var result: Set<Int> = []
    
    for i in 1...Int(sqaureRoot) {
        if n.isMultiple(of: i) {
            result.insert(i)
            result.insert(n / i)
        }
    }
    
    return result.reduce(0, +)
}