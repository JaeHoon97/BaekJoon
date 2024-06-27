import Foundation

func solution(_ a:Int, _ b:Int) -> Int {
    
    var n1 = 0
    var n2 = 0
    
    a.isMultiple(of: 2) ? (n1 = 0) : (n1 = 1)
    b.isMultiple(of: 2) ? (n2 = 0) : (n2 = 1)
    
    if(n1 + n2 == 2) {
        return a * a + b * b
    } else if(n1 + n2 == 1) {
        return 2 * (a + b)
    } else {
        return (a - b < 0) ? (b - a) : (a - b)
    }
}