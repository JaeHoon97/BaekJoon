import Foundation

func solution(_ arr:[Int], _ flag:[Bool]) -> [Int] {
    
    var result: [Int] = []
    
    for i in 0..<arr.count {
        flag[i] ? result.append(contentsOf: repeatElement(arr[i], count: arr[i]*2)) : result.removeLast(arr[i])
    }
    
    return result
}