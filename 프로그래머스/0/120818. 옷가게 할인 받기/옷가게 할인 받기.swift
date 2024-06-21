import Foundation

func solution(_ price:Int) -> Int {
    var result: Int = 0
    var discount: Double = 0.0
    
    switch(price) {
    case 100000..<300000:
        discount = 0.05
    case 300000..<500000:
        discount = 0.1
    case 500000...:
        discount = 0.2
    default:
        discount = 0.0
    }
    
    result = Int(Double(price) - (Double(price) * discount))
    
    return result
}