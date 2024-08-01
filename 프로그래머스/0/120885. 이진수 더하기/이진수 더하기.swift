import Foundation

func solution(_ bin1:String, _ bin2:String) -> String {
    var num = Int(bin1, radix: 2)! + Int(bin2, radix: 2)!
    var result = String(num, radix: 2)
    return result
}