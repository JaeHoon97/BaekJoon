import Foundation

func solution(_ numbers:[Int], _ direction:String) -> [Int] {
    
    var result = numbers
    
    if direction == "right" {
        var num = numbers.last!
        result.removeLast()
        result.insert(num, at: 0)
    } else {
        var num = numbers.first!
        result.removeFirst()
        result.append(num)
    }

    return result
}
