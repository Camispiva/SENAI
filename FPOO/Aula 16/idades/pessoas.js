class Pessoa {
    constructor(nome, nascimento, sexo,) {
        this.nome = nome;
        this.nascimento = nascimento;
        this.sexo = sexo;
        this.idade = this.calcIdade(); //Atributo calculado
    }

    calcIdade() {
        if (this.nascimento == undefined) return 0;
        let hoje = new Date();
        let difAno = hoje.getFullYear() - this.nascimento.getFullYear();
        let difMes = hoje.getMonth() - this.nascimento.getMonth();
        let difDia = hoje.getDate() - this.nascimento.getDate();
        if (difMes < 0 || (difMes == 0 && difDia < 0)) {
            difAno--;
        }
        return difAno;
    }

    toTable() {
        return `<tr>
                    <td>${this.nome}</td>
                    <td>${this.nascimento.toLocaleDateString()}</td>
                    <td>${this.sexo}</td>
                    <td>${this.idade}</td>
                </tr>`;
    }
    classificar(){
        if(this.calcIdade() > 0 && this.calcIdade() < 11){
            return "Criança";
        }else if(this.calcIdade() > 12 && this.calcIdade() < 17){
            return "Adolescente";
        }else if(this.calcIdade() > 18 && this.calcIdade() < 29){
            return "Jovem";
        }else if(this.calcIdade() > 30 && this.calcIdade() < 59){
            return "Adulto";
        }else if{
            return "Idoso";
        }
    }

const pessoas = [];

pessoas.push(new Pessoa("João Silva", new Date(1990, 8, 10), "M"));
pessoas.push(new Pessoa("Maria Santos", new Date(2018, 13, 10), "F"));
pessoas.push(new Pessoa("José Oliveira", new Date(2007, 9, 16), "M"));
pessoas.push(new Pessoa("Joana Gimenes", new Date(2002, 7, 21), "F"));
pessoas.push(new Pessoa("Pedro Martins", new Date(1998, 4, 1), "M"));

const form = document.getElementById("novaPessoa");
const corpo = document.getElementById("corpoTabela");

form.addEventListener("submit", (event) => {
    event.preventDefault();
    let pessoa = new Pessoa(form.nome.value, new Date(form.nascimento.value), form.sexo.value);
    pessoas.push(pessoa);
    form.reset();
    atualizaTabela();
});

function atualizaTabela() {
    corpo.innerHTML = "";
    pessoas.forEach((pessoa) => {
        corpo.innerHTML += pessoa.toTable();
    });
}