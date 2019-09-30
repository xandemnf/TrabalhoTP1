CREATE DATABASE  IF NOT EXISTS `bancojogos` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `bancojogos`;
-- MySQL dump 10.13  Distrib 8.0.17, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: bancojogos
-- ------------------------------------------------------
-- Server version	5.7.19

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `cadastro`
--

DROP TABLE IF EXISTS `cadastro`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `cadastro` (
  `codCadastro` int(11) NOT NULL AUTO_INCREMENT,
  `nome` varchar(255) NOT NULL,
  `cpf` char(11) NOT NULL,
  `email` varchar(45) NOT NULL,
  `senha` int(11) NOT NULL,
  `cod_cidade` int(11) NOT NULL,
  PRIMARY KEY (`codCadastro`),
  KEY `fk_cadastro_cidade1_idx` (`cod_cidade`),
  CONSTRAINT `fk_cadastro_cidade1` FOREIGN KEY (`cod_cidade`) REFERENCES `cidade` (`cod_cidade`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cadastro`
--

LOCK TABLES `cadastro` WRITE;
/*!40000 ALTER TABLE `cadastro` DISABLE KEYS */;
/*!40000 ALTER TABLE `cadastro` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `cartao`
--

DROP TABLE IF EXISTS `cartao`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `cartao` (
  `codCartao` int(11) NOT NULL AUTO_INCREMENT,
  `numeroCartao` char(16) NOT NULL,
  `codSeguranca` char(11) NOT NULL,
  `dataVencimento` date NOT NULL,
  PRIMARY KEY (`codCartao`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cartao`
--

LOCK TABLES `cartao` WRITE;
/*!40000 ALTER TABLE `cartao` DISABLE KEYS */;
/*!40000 ALTER TABLE `cartao` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `cidade`
--

DROP TABLE IF EXISTS `cidade`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `cidade` (
  `cod_cidade` int(11) NOT NULL AUTO_INCREMENT,
  `nome` varchar(45) NOT NULL,
  `ddd` int(11) NOT NULL,
  `cod_uf` int(11) NOT NULL,
  PRIMARY KEY (`cod_cidade`),
  KEY `fk_cidade_uf1_idx` (`cod_uf`),
  CONSTRAINT `fk_cidade_uf1` FOREIGN KEY (`cod_uf`) REFERENCES `uf` (`cod_uf`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cidade`
--

LOCK TABLES `cidade` WRITE;
/*!40000 ALTER TABLE `cidade` DISABLE KEYS */;
INSERT INTO `cidade` VALUES (1,'PORTO ALEGRE',71,1),(2,'CURITIVA',20,2),(3,'FLORIANOPOLIS',21,3),(4,'SAO PAULO',11,4),(5,'BELO HORIZONTE',31,5);
/*!40000 ALTER TABLE `cidade` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `estadio`
--

DROP TABLE IF EXISTS `estadio`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `estadio` (
  `codEstadio` int(11) NOT NULL AUTO_INCREMENT,
  `nome` varchar(255) NOT NULL,
  `cidade` int(11) NOT NULL,
  PRIMARY KEY (`codEstadio`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `estadio`
--

LOCK TABLES `estadio` WRITE;
/*!40000 ALTER TABLE `estadio` DISABLE KEYS */;
INSERT INTO `estadio` VALUES (1,'BEIRA RIO',1),(2,'CURITIVA',2),(3,'CARLOS PRATE',3),(4,'MORUMBI',4),(5,'MINEIRAO',5);
/*!40000 ALTER TABLE `estadio` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `ingresso`
--

DROP TABLE IF EXISTS `ingresso`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `ingresso` (
  `codIngresso` int(11) NOT NULL AUTO_INCREMENT,
  `quantidade` int(11) NOT NULL,
  `preco` decimal(10,0) NOT NULL,
  `usuario` int(11) NOT NULL,
  `codPagamento` int(11) NOT NULL,
  PRIMARY KEY (`codIngresso`),
  KEY `fk_ingresso_usuario1_idx` (`usuario`),
  KEY `fk_ingresso_pagamento1_idx` (`codPagamento`),
  CONSTRAINT `fk_ingresso_pagamento1` FOREIGN KEY (`codPagamento`) REFERENCES `pagamento` (`codPagamento`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_ingresso_usuario1` FOREIGN KEY (`usuario`) REFERENCES `usuario` (`codUsuario`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ingresso`
--

LOCK TABLES `ingresso` WRITE;
/*!40000 ALTER TABLE `ingresso` DISABLE KEYS */;
/*!40000 ALTER TABLE `ingresso` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `jogo`
--

DROP TABLE IF EXISTS `jogo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `jogo` (
  `codJogo` int(11) NOT NULL AUTO_INCREMENT,
  `nome` varchar(255) NOT NULL,
  `dataInicio` date NOT NULL,
  `dataTermino` date NOT NULL,
  `codIngresso` int(11) NOT NULL,
  `tipojogo` int(11) NOT NULL,
  `partida` int(11) NOT NULL,
  PRIMARY KEY (`codJogo`),
  KEY `fk_jogo_tipoJogo1_idx` (`tipojogo`),
  KEY `fk_jogo_partida1_idx` (`partida`),
  CONSTRAINT `fk_jogo_partida1` FOREIGN KEY (`partida`) REFERENCES `partida` (`codPartida`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_jogo_tipoJogo1` FOREIGN KEY (`tipojogo`) REFERENCES `tipojogo` (`codTipo`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `jogo`
--

LOCK TABLES `jogo` WRITE;
/*!40000 ALTER TABLE `jogo` DISABLE KEYS */;
/*!40000 ALTER TABLE `jogo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `jogo_estadio`
--

DROP TABLE IF EXISTS `jogo_estadio`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `jogo_estadio` (
  `codJogo` int(11) NOT NULL,
  ` codEstadio` int(11) NOT NULL,
  PRIMARY KEY (`codJogo`,` codEstadio`),
  KEY `fk_jogo_has_estadio_estadio1_idx` (` codEstadio`),
  KEY `fk_jogo_has_estadio_jogo1_idx` (`codJogo`),
  CONSTRAINT `fk_jogo_has_estadio_estadio1` FOREIGN KEY (` codEstadio`) REFERENCES `estadio` (`codEstadio`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_jogo_has_estadio_jogo1` FOREIGN KEY (`codJogo`) REFERENCES `jogo` (`codJogo`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `jogo_estadio`
--

LOCK TABLES `jogo_estadio` WRITE;
/*!40000 ALTER TABLE `jogo_estadio` DISABLE KEYS */;
/*!40000 ALTER TABLE `jogo_estadio` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pagamento`
--

DROP TABLE IF EXISTS `pagamento`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pagamento` (
  `codPagamento` int(11) NOT NULL AUTO_INCREMENT,
  `valor_pagamento` float DEFAULT NULL,
  `codCartao` int(11) NOT NULL,
  PRIMARY KEY (`codPagamento`),
  KEY `fk_pagamento_cartao1_idx` (`codCartao`),
  CONSTRAINT `fk_pagamento_cartao1` FOREIGN KEY (`codCartao`) REFERENCES `cartao` (`codCartao`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pagamento`
--

LOCK TABLES `pagamento` WRITE;
/*!40000 ALTER TABLE `pagamento` DISABLE KEYS */;
/*!40000 ALTER TABLE `pagamento` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `partida`
--

DROP TABLE IF EXISTS `partida`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `partida` (
  `codPartida` int(11) NOT NULL AUTO_INCREMENT,
  `nome` varchar(255) NOT NULL,
  `data` date NOT NULL,
  `disponibilidade` varchar(255) NOT NULL,
  `quantDisponivel` int(11) NOT NULL,
  `preco` decimal(10,0) NOT NULL,
  `ingresso` int(11) NOT NULL,
  PRIMARY KEY (`codPartida`),
  KEY `fk_partida_ingresso1_idx` (`ingresso`),
  CONSTRAINT `fk_partida_ingresso1` FOREIGN KEY (`ingresso`) REFERENCES `ingresso` (`codIngresso`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `partida`
--

LOCK TABLES `partida` WRITE;
/*!40000 ALTER TABLE `partida` DISABLE KEYS */;
/*!40000 ALTER TABLE `partida` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tipojogo`
--

DROP TABLE IF EXISTS `tipojogo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tipojogo` (
  `codTipo` int(11) NOT NULL,
  `nomeTipo` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`codTipo`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tipojogo`
--

LOCK TABLES `tipojogo` WRITE;
/*!40000 ALTER TABLE `tipojogo` DISABLE KEYS */;
/*!40000 ALTER TABLE `tipojogo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `uf`
--

DROP TABLE IF EXISTS `uf`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `uf` (
  `cod_uf` int(11) NOT NULL AUTO_INCREMENT,
  `uf` varchar(45) NOT NULL,
  PRIMARY KEY (`cod_uf`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `uf`
--

LOCK TABLES `uf` WRITE;
/*!40000 ALTER TABLE `uf` DISABLE KEYS */;
INSERT INTO `uf` VALUES (1,'RS'),(2,'PR'),(3,'SC'),(4,'SP'),(5,'MG');
/*!40000 ALTER TABLE `uf` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `usuario`
--

DROP TABLE IF EXISTS `usuario`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `usuario` (
  `codUsuario` int(11) NOT NULL AUTO_INCREMENT,
  `cpf` char(11) NOT NULL,
  `senha` int(11) NOT NULL,
  `cadastro` int(11) NOT NULL,
  PRIMARY KEY (`codUsuario`),
  UNIQUE KEY `cpf_UNIQUE` (`cpf`),
  KEY `fk_usuario_cadastro1_idx` (`cadastro`),
  CONSTRAINT `fk_usuario_cadastro1` FOREIGN KEY (`cadastro`) REFERENCES `cadastro` (`codCadastro`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `usuario`
--

LOCK TABLES `usuario` WRITE;
/*!40000 ALTER TABLE `usuario` DISABLE KEYS */;
/*!40000 ALTER TABLE `usuario` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `usuario_jogo`
--

DROP TABLE IF EXISTS `usuario_jogo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `usuario_jogo` (
  `codUsuario` int(11) NOT NULL,
  ` codJogo` int(11) NOT NULL,
  PRIMARY KEY (`codUsuario`,` codJogo`),
  KEY `fk_usuario_has_jogo_jogo1_idx` (` codJogo`),
  KEY `fk_usuario_has_jogo_usuario1_idx` (`codUsuario`),
  CONSTRAINT `fk_usuario_has_jogo_jogo1` FOREIGN KEY (` codJogo`) REFERENCES `jogo` (`codJogo`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `fk_usuario_has_jogo_usuario1` FOREIGN KEY (`codUsuario`) REFERENCES `usuario` (`codUsuario`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `usuario_jogo`
--

LOCK TABLES `usuario_jogo` WRITE;
/*!40000 ALTER TABLE `usuario_jogo` DISABLE KEYS */;
/*!40000 ALTER TABLE `usuario_jogo` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2019-09-29 18:31:32
