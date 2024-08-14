import Foundation

func solution(_ arr:[Int], _ divisor:Int) -> [Int] {
    var result = arr.sorted().filter { $0.isMultiple(of: divisor) }
    if result.isEmpty { return [-1] }
    return result
}
