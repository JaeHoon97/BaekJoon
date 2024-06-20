import Foundation

func solution(_ numbers:[Int]) -> Double {
    
    var sum: Double = 0
    
    numbers.forEach { value in
        sum += Double(value)
    }
    
    
    
    return sum / Double(numbers.count)
}