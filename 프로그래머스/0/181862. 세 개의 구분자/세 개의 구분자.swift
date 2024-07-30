import Foundation

func solution(_ myStr:String) -> [String] {
    
    var result = myStr.components(separatedBy: ["a", "b", "c"]).filter { !$0.isEmpty }
    
    return result
}