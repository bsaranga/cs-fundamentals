let x = 89
let y = 23

let k = '3141592653589793238462643383279502884197169399375105820974944592'
let m = '2718281828459045235360287471352662497757247093699959574966967627'

let count = 0;

function karatsuba(i, j) {
    count++;
    if(i.length == 1 && j.length == 1) {
        return i * j
    }else{
        let a = i.slice(0, i.length/2)
        let b = i.slice(i.length/2, i.length)
        let c = j.slice(0, j.length/2)
        let d = j.slice(j.length/2, j.length)
        return Math.pow(10,i.length)*karatsuba(a, c) + Math.pow(10,i.length/2)*(karatsuba(a, d) + karatsuba(b, c)) + karatsuba(b,d);
    }
}

console.log(karatsuba('123','123'));
console.log(`Count: ${count}`);