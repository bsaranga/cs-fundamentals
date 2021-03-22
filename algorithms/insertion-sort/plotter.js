var canvas = document.getElementById('myChart')
var context = canvas.getContext('2d')

function draw(xPos, yPos, w, h, col) {
    context.fillStyle = col ? col : 'rgb(128, 128, 128)'
    context.fillRect(xPos, canvas.clientHeight - yPos - h, w, h)
}

function drawBarChart(arr, gap, w, ptrsObj) {
    let i = 0
    let max = Math.max(...arr)
    arr.forEach((e, i) => {
        let h = e/max*canvas.clientHeight
        if(i == ptrsObj.i){
            draw(i * (gap + w), 0, w, h, "blue")
        }else if (i == ptrsObj.k){
            draw(i * (gap + w), 0, w, h, "rgb(200, 200, 200)")
        }else if (i == ptrsObj.kp){
            draw(i * (gap + w), 0, w, h, "green")
        }else{
            draw(i * (gap + w), 0, w, h)
        }
        i++
    });
}

function sortAnimation(delay){
    let iter = 0

    setInterval(() => {
        if(iter < snaps.length){
            context.clearRect(0,0,canvas.clientWidth, canvas.clientHeight)
            drawBarChart(snaps[iter], barGap, barWidth, ptrs[iter])
            iter++
        }
    }, delay*1000);
}

let barWidth = 10
let barGap = 1
let snaps = sortData.snaps
let ptrs = sortData.pointers

sortAnimation(0.05)