import Foundation

func solution(_ ineq:String, _ eq:String, _ n:Int, _ m:Int) -> Int {
    var result = true
    
    if ineq == "<" {
        result = (eq == "=") ? (n <= m) : (n < m)
    } else {
        result = (eq == "=") ? (n >= m) : (n > m)
    }
    
    return result ? 1 : 0
}
