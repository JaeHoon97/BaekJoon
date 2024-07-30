import Foundation

func solution(_ strArr:[String]) -> Int {
    
    var arr: [Int] = Array(repeating: 0, count: 100001)
    
    strArr.forEach {
        arr[$0.count] += 1
    }
    return arr.max()!
}