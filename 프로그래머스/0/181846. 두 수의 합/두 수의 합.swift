import Foundation

func solution(_ a:String, _ b:String) -> String {
    var num1 = a
    var num2 = b
    var remain = 0
    var result = ""
    
    
    while true {
        let num = Int(String((num1.popLast() ?? "0")))! + Int(String((num2.popLast() ?? "0")))! + remain
        remain = num / 10
        result.append(String(num % 10))
        if num1.isEmpty && num2.isEmpty && remain == 0 { break }
    }
    
    return String(result.reversed())
}