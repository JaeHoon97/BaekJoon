import Foundation

func solution(_ num:Int, _ total:Int) -> [Int] {
    var result: [Int] = []
    var a1 = (total / num) + (1 - num) / 2

    for _ in 0..<num {
        result.append(a1)
        a1 += 1
    }
    return result
}