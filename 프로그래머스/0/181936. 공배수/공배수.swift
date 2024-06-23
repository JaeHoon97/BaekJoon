import Foundation

func solution(_ number:Int, _ n:Int, _ m:Int) -> Int {
    
    return number.isMultiple(of: n) && number.isMultiple(of: m) ? 1 : 0
}