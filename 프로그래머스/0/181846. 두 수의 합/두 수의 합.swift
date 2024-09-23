import Foundation

func solution(_ a:String, _ b:String) -> String {
    let num1: [Character] = Array(a).reversed()
    let num2: [Character] = Array(b).reversed()
    var result = ""
    var share = 0
    let size = max(num1.count, num2.count)
    
    for i in 0..<size {
        let n1 = (i < num1.count) ? Int(String(num1[i]))! : 0
        let n2 = (i < num2.count) ? Int(String(num2[i]))! : 0
        result.append(String((n1 + n2 + share) % 10))
        share = (n1 + n2 + share) / 10
    }
    
    if share != 0 { result.append(String(share))}
    
    return String(result.reversed())
}