const myChart = document.getElementById('myChart')
const myChartContext = myChart.getContext('2d')

let data = [12,1,5,6,3,11,8,9]

function drawBar(ctx, upperLeftCornerX, upperLeftCornerY, width, height, color) {
    ctx.save()
    ctx.fillStyle = color
    ctx.fillRect(upperLeftCornerX, upperLeftCornerY, width, height)
    ctx.restore()
}

let barChart = function(options) {

    this.options = options
    this.canvas = options.canvas
    this.ctx = this.canvas.getContext('2d')
    this.colors = options.colors
    let max = Math.max(...options.data)

    this.draw = function() {
        let numBars = this.options.data.length
        let barSize = this.canvas.width / numBars

        this.options.data.forEach((d, barIndex) => {
            let barHeight = Math.round(this.options.height * d/max)
            drawBar(
                this.ctx,
                barIndex * barSize,
                this.canvas.height - barHeight,
                barSize,
                barHeight,
                this.colors[barIndex%this.colors.length]
            )
        })
    }
}

var myBarChart = new barChart({
    canvas: myChart,
    data: data,
    colors: ["#a55ca5","#67b6c7", "#bccd7a","#eb9743"]
})

myBarChart.draw()