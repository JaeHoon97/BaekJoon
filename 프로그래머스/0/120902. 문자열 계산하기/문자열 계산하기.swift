import Foundation

func solution(_ my_string:String) -> Int {
    var valStack:[Int] = []
    var operStack:[String] = []

    let strArr = my_string.components(separatedBy: " ")
    
    strArr.forEach { ($0 == "+" || $0 == "-") ? operStack.append($0) : valStack.append(Int($0)!) }
    
    while !operStack.isEmpty {
        let num1 = valStack.removeFirst()
        let num2 = valStack.removeFirst()
        let oper = operStack.removeFirst()
        (oper == "+") ? valStack.insert(num1 + num2, at: 0) : valStack.insert(num1 - num2, at: 0)
    }
    
    return valStack.removeLast()
}