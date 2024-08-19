import Foundation

func solution(_ n:Int, _ arr1:[Int], _ arr2:[Int]) -> [String] {
    var answer: [String] = []
    
    let binaryArr = zip(arr1, arr2).map { String($0.0 | $0.1, radix: 2) }
    
    let result = binaryArr.map {
        return n == $0.count ? $0 : Array(repeating: "0", count: n - $0.count) + $0
    }
    
    result.forEach { str in
        answer.append(str.map { ch in ch == "1" ? "#" : " " }.joined())
    }
    
    return answer
}