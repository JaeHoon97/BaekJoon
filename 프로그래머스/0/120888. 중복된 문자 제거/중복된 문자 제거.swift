import Foundation

func solution(_ my_string:String) -> String {
    
    var result: Set<String> = []
    
    return my_string.filter { result.insert(String($0)).inserted }
}