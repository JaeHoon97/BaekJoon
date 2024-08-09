import Foundation

func solution(_ array:[Int]) -> Int {
    var result: [Int] = Array(repeating: 0, count: 1005)
    
    array.forEach { result[$0] += 1 }
    
    let dic = Dictionary(grouping: array) { $0 }
    
    let max = dic.max { $0.value.count < $1.value.count }
    let filtered = dic.filter { $0.value.count == max?.value.count }
    
    if filtered.count == 1 {
        return max!.key
    } else {
        return -1
    }
}