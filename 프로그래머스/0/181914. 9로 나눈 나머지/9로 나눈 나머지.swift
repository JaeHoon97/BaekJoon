import Foundation

func solution(_ number:String) -> Int {
    return number.reduce(0) { $0 + Int(String($1))! } % 9
}
