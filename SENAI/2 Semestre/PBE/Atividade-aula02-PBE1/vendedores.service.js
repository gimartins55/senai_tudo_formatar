let vendedores = require("./mockup.vendedores"); 

const cadastrar = (matricula, nome, salario, comissao) => {
    let vendedor = {
        matricula,
        nome, 
        salario,
        comissao
    };

    vendedores.push(vendedor);
};

const listar = () => {
    vendedores.forEach((vendedor, indice) => {
        console.log(indice, vendedor);
    });
};

const buscar = (busca) => {
    let resultado = [];

    vendedores.forEach((vendedor) => {
        if(JSON.stringify(vendedor).toLowerCase().includes(busca.toLowerCase())) {
            resultado.push(vendedor);
        }
    })

    console.log(resultado);
};

const buscarPorMatricula = (matricula) => {
    let resultado = [];

    vendedores.forEach((vendedor) => {
        if(JSON.stringify(vendedor.matricula).toLowerCase().includes(matricula.toLowerCase())) {
            resultado.push(vendedor);
        }
    })

    console.log(resultado);
};

const buscarPorNome = (nome) => {
    let resultado = [];

    vendedores.forEach((vendedor) => {
        if(JSON.stringify(vendedor.nome).toLowerCase().includes(nome.toLowerCase())) {
            resultado.push(vendedor);
        }
    })

    console.log(resultado);
};

const excluir = (indice) => {
    vendedores.splice(indice, 1);
};

const excluirPorMatricula = (matricula) => {
    vendedores.forEach((vendedor, indice) => {
        if(JSON.stringify(vendedor.matricula).toLowerCase().includes(matricula.toLowerCase())) {
            vendedores.splice(indice, 1);
        }
    })
};

cadastrar(1005, "Heloisa Fagundes", 3000, 0.5);
listar();
buscar("Martina");
buscarPorMatricula("1002");
buscarPorNome("camila");
excluir(0);
listar();
excluirPorMatricula("1003");
listar();