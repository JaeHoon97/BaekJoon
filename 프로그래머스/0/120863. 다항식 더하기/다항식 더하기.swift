import Foundation

func solution(_ polynomial:String) -> String {
    let componentsOfpolynomial = polynomial.components(separatedBy: " + ")
    var numbers: [Int] = []
    var x: [Int] = []
    
    componentsOfpolynomial.forEach {
        if $0.contains("x") {
            $0 == "x" ? x.append(1) : x.append(Int($0.replacingOccurrences(of: "x", with: ""))!)
        } else {
            numbers.append(Int($0)!)
        }
    }
    
    let linear = x.reduce(0, +)
    let const = numbers.reduce(0, +)
    
    if linear != 0 {
        if const != 0 {
            return linear != 1 ? "\(linear)x + \(const)" : "x + \(const)"
        } else {
            return linear != 1 ? "\(linear)x" : "x"
        }
    } else {
        return "\(const)"
    }
}