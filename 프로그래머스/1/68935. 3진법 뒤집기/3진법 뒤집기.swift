import Foundation

func solution(_ n:Int) -> Int {
    
    var tenToThree = String(n, radix: 3)
    
    return Int(String(tenToThree.reversed()), radix: 3)!
}