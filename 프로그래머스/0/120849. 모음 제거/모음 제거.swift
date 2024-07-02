import Foundation

func solution(_ my_string:String) -> String {
    
    let vowels = ["a", "e", "i", "o", "u"]
    
    return my_string.filter { !vowels.contains(String($0)) }
}