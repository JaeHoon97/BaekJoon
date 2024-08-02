import Foundation

func solution(_ my_string:String) -> [Int] {
    
    var result: [Int] = Array(repeating: 0, count: 52)
    
    my_string.forEach {
        let ascii = Int(UnicodeScalar(String($0))!.value)
        if $0.isUppercase {
            result[ascii - 65] += 1
        } else {
            result[ascii - 71] += 1
        }
    }
    
    return result
}