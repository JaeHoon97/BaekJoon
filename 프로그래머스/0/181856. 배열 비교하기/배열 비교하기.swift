import Foundation

func solution(_ arr1:[Int], _ arr2:[Int]) -> Int {
    
    if(arr1.count != arr2.count) {
        return arr1.count > arr2.count ? 1 : -1
    } else {
        if(arr1.reduce(0, +) == arr2.reduce(0, +)) {
            return 0
        } else {
            return (arr1.reduce(0, +) > arr2.reduce(0, +)) ? 1 : -1
        }
    }
}