import Foundation

func solution(_ quiz:[String]) -> [String] {
    var result: [String] = []
    
    quiz.forEach {
        let equation = $0.components(separatedBy: " = ")
        if equation[0].contains("+") {
            let numbers = equation[0].components(separatedBy: " + ")
            Int(numbers[0])! + Int(numbers[1])! == Int(equation[1])! ? result.append("O") : result.append("X")
        } else {
            let numbers = equation[0].components(separatedBy: " - ")
            Int(numbers[0])! - Int(numbers[1])! == Int(equation[1])! ? result.append("O") : result.append("X")
        }
    }
    
    return result
}