import Foundation

func solution(_ num:Int, _ k:Int) -> Int {
    var result = -1
    for (index, offset) in String(num).enumerated() {
        if Int(String(offset))! == k {
            result = index + 1;
            break
        }
    }
    return result
}