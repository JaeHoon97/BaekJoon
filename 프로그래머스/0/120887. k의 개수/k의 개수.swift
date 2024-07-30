import Foundation

func solution(_ i:Int, _ j:Int, _ k:Int) -> Int {
    
    var result = 0
    
    for num in i...j {
        String(num).forEach {
            if String($0) == String(k) { result += 1 }
        }
    }
    return result
}