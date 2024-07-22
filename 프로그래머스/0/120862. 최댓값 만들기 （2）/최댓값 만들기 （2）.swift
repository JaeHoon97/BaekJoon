import Foundation

func solution(_ numbers:[Int]) -> Int {
    
    let sortedArr = numbers.sorted()
    var result = Int.min
    
    for i in 0..<sortedArr.count  {
        for j in i+1..<sortedArr.count {
            result = max(result, sortedArr[i] * sortedArr[j])
        }
    }
    
    return result
}

