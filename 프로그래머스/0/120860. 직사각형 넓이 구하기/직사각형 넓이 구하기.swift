import Foundation

func solution(_ dots:[[Int]]) -> Int {
    
    let xArr = [dots[0][0], dots[1][0], dots[2][0], dots[3][0]]
    let yArr = [dots[0][1], dots[1][1], dots[2][1], dots[3][1]]
    
    return (xArr.max()! - xArr.min()!) * (yArr.max()! - yArr.min()!)
}