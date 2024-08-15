import Foundation

func solution(_ arr:[Int], _ k:Int) -> [Int] {
    
    var s: Set<Int> = []
    let uniqueArr = arr.filter { s.insert($0).inserted }
    
    if uniqueArr.count >= k {
        return Array(uniqueArr[0..<k])
    } else {
        return uniqueArr + Array(repeating: -1, count: k - uniqueArr.count)
    }
}