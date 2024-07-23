import Foundation

func solution(_ binomial:String) -> Int {
    
    let arr = binomial.components(separatedBy: " ")
    
    switch arr[1] {
    case "+":
        return Int(arr[0])! + Int(arr[2])!
    case "-":
        return Int(arr[0])! - Int(arr[2])!
    case "*":
        return Int(arr[0])! * Int(arr[2])!
    default:
        return 0
    }
}


