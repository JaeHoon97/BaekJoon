import Foundation

func solution(_ arr:[Int]) -> [Int] {
    
    var size: Double = 0
    var result = arr
    
    while arr.count > Int(pow(2.0, size)) {
        size += 1
    }
    
    var add = Int(pow(2.0, size)) - arr.count
    
    for _ in 0..<add {
        result.append(0)
    }
    
    
    return result
}
