import Foundation

func solution(_ my_string:String) -> Int {
    
    var sum = 0
    
    my_string.forEach {
        if($0.isNumber) {
            sum += Int(String($0))!
        }
    }
    
    return sum
}