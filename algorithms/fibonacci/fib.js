function fib(n) {
    if(n == 1){
        return 1
    }
    if (n == 0) {
        return 0
    }

    return fib(n - 1) + fib(n - 2)
}

function fib2(n){

    if(n == 0){
        return 0
    }

    let arr = [0,1]

    for (let i = 2; i < n; i++) {
        arr.push(arr[i - 1] + arr[i - 2])
    }

    return arr[arr.length - 1]
}