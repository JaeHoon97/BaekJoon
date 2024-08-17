import Foundation

func solution(_ s:String) -> Int {
    let words: [String] = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    var str = s
    
    for i in 0..<words.count {
        str = str.replacingOccurrences(of: words[i], with: "\(i)")
    }
    
    return Int(str)!
}