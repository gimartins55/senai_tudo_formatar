
DROP DATABASE IF EXISTS clinica;
CREATE DATABASE clinica;
USE clinica;
CREATE TABLE paciente (
    id INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    cpf VARCHAR(11) NOT NULL,
    telefone VARCHAR(15) NOT NULL,
    endereco VARCHAR(200) NOT NULL,
    data_nascimento DATE NOT NULL
);
CREATE TABLE medico (
    id INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    crm VARCHAR(20) NOT NULL,
    especialidade VARCHAR(80) NOT NULL,
    telefone VARCHAR(15) NOT NULL
);
CREATE TABLE consulta (
    id INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
    id_paciente INT NOT NULL,
    id_medico INT NOT NULL,
    data DATE NOT NULL,
    hora TIME NOT NULL,
    motivo VARCHAR(200) NOT NULL,
    observacoes VARCHAR(500),
    CONSTRAINT fk_consulta_paciente
        FOREIGN KEY (id_paciente)
        REFERENCES paciente(id),
    CONSTRAINT fk_consulta_medico
        FOREIGN KEY (id_medico)
        REFERENCES medico(id)
);
SHOW TABLES;
DESCRIBE paciente;
DESCRIBE medico;
DESCRIBE consulta;