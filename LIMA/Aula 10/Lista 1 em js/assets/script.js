function ex1(){
    let a = document.getElementById("A").value
    let b = document.getElementById("B").value
    let c = document.getElementById("C").value

    let resultado = (a + b) / c

    let str = document.querySelector(".resultado")
    str.innerHTML = resultado.toFixed(2)
}

function ex2(){
    let a = document.getElementById("velocidade").value
    let b = document.getElementById("distância").value

    document.querySelector(".resultado2").innerHTML = (b / a).toFixed(2)
}

function ex3(){
    let nome = document.getElementById("nome").value
    let b = Number(document.getElementById("salario").value)
    let c = Number(document.getElementById("reajuste").value)

    document.querySelector(".resultado3").innerHTML = `${nome}Seu salario é:${b * ((c + 100) / 100).toFixed(2)}`
}

function ex4(){
    let nome = document.getElementById("nome").value
    let vitorias = Number(document.getElementById("vitorias").value)
    let derrotas = Number(document.getElementById("derrotas").value)

    document.querySelector(".resultado4").innerHTML = `${nome} ${(vitorias * 3) + derrotas}`
}

function ex5(){
    let inteiro = Number(document.getElementById("inteiro").value)

    if(inteiro <= 0){
        document.querySelector(".resultado5").innerHTML = `O valor NÃO pode ser menor ou igual a 0`
    }else{
        document.querySelector(".resultado5").innerHTML = `${inteiro - 1} ${inteiro + 1}`
    }
}

function ex6(){
    let distancia = Number (document.getElementById("distancia").value)
    document.querySelector(".resultado6").innerHTML = (distancia / 900).toFixed(2)
}

function ex7(){
    let caminhoes = Number(document.getElementById("caminhoes").value)
    let alqueires = Number(document.getElementById("alqueires").value)

    let resultado = caminhoes * 250
    resultado = (resultado / 18) / alqueires
    document.querySelector(".resultado7").innerHTML = resultado.toFixed(2)
}

function ex8(){
    const PI = 3.14159

    let raio = Number(document.getElementById("raio").value)
    let altura = Number(document.getElementById("altura").value)

    let resultado = 2 * PI * raio * (raio + altura)
    let resultado2 = PI * raio * raio * altura

    document.querySelector(".resultado8").innerHTML = resultado.toFixed(2), resultado2.toFixed(2)
}