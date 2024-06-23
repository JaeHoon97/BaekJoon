import Foundation

func solution(_ num:Int, _ n:Int) -> Int {
    return num.isMultiple(of: n) ? 1 : 0
}