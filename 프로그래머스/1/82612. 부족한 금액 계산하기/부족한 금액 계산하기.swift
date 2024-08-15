import Foundation

func solution(_ price:Int, _ money:Int, _ count:Int) -> Int64{
    var totalPrice: Int64 = 0
    
    for cnt in 1...count {
        totalPrice += Int64(price * cnt)
    }
    
    return totalPrice - Int64(money) <= 0 ? 0 : totalPrice - Int64(money)
}
