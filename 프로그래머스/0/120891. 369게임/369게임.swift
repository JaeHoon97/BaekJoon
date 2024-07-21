import Foundation

func solution(_ order:Int) -> Int {
    
    
    
    
    
    return String(order).filter { Int(String($0))!.isMultiple(of: 3) && Int(String($0))! != 0 }.count
}
