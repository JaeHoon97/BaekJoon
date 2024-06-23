import Foundation

func solution(_ a:Int, _ b:Int) -> Int {
    
    var first = Int(String(a) + String(b))!
    var second = a * b * 2
    
    if(first == second) {
        return first
    } else {
        return first > second ? first : second
    }
}