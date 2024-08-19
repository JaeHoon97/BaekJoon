import Foundation

func solution(_ food:[Int]) -> String {
    var result = ""
    
    for index in 1..<food.count {
        for _ in 0..<(food[index] / 2) {
            result.append("\(index)")
        }
    }
    
    let reversed = String(result.reversed())
    
    result.append("0")
    
    result.append(reversed)
    
    return result
}