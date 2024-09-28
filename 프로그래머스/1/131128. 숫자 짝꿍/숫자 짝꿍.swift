import Foundation

func solution(_ X:String, _ Y:String) -> String {
    var countX: [Int] = Array(repeating: 0, count: 10) // X에서 숫자 빈도
    var countY: [Int] = Array(repeating: 0, count: 10) // Y에서 숫자 빈도
    var result = ""
    X.forEach { countX[Int(String($0))!] += 1 }
    Y.forEach { countY[Int(String($0))!] += 1 }
    for i in stride(from: 9, through: 0, by: -1) {
        let commonCount = min(countX[i], countY[i])
        result += String(repeating: "\(i)", count: commonCount)
    }
    
    if result.isEmpty { 
        return "-1" 
    } else {
        return result.first! == "0" ? "0" : result
    }
}