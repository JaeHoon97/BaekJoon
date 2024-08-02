import Foundation

func solution(_ numbers:String) -> Int64 {
    var result = numbers
    var num = 0
    
    for number in ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"] {
        while result.contains(number) {
            result = result.replacingOccurrences(of: number, with: String(num))
        }
        num += 1
    }

    return Int64(result)!
}