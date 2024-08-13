func solution(_ x:Int) -> Bool {
    var sum = 0
    String(x).forEach { sum += Int(String($0))! }
    return x % sum == 0 ? true : false
}