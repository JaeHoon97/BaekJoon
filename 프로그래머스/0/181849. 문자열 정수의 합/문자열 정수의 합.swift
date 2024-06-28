import Foundation

func solution(_ num_str:String) -> Int {
    
    var sum = 0;
    
    num_str.forEach { ch in
        sum += Int(String(ch))!
    }
    
    return sum
}
