import Foundation

func solution(_ left:Int, _ right:Int) -> Int {
    var arr: [Int] = Array(repeating: 0, count: 1005)
    var result = 0
    
    for i in 1...right {
        for j in left...right {
            if j.isMultiple(of: i) { arr[j] += 1 }
        }
    }
    
    for i in left...right {
        arr[i].isMultiple(of: 2) ? (result += i) : (result -= i)
    }
    return result
}