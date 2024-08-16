import Foundation

func solution(_ number:[Int]) -> Int {
    var result = 0
    let size = number.count
    
    for i in 0..<(size-2) {
        for j in i+1..<(size-1) {
            for k in j+1..<(size) {
                if (number[i] + number[j] + number[k]) == 0 { result += 1}
            }
        }
    }
    return result
}