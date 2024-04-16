# Projeto-Sensor-Aquecedor-Solar-
Desenvolvimento de um sensor de Aquecedor Solar com o intuito de ao aquecedor atingir a temperatura necessária entre em funcionamento o despejamento do fluido (água) para a limpeza Clean In Place. Realizado com base e intuito de finalidade para o projeto de TCC da escola estadual Walfredo Gurguel, Aquecedor Solar de Baixo Custo.

## Trabalho de conclusão em Energia Solar Térmica voltada para a área da pecuária leiteira, Ordenhadeira Solar de baixo custo, construída em materiais recicláveis com parceria de SESI Escola e Fazenda Caju ( fazenda queijeira localizada em Ceara-Mirim), projeto ganhou visibilidade na TV Tropical e Cabugi.

# Resumo do Projeto
RESUMO
O presente trabalho apresenta a caracterização de uma ordenhadeira solar térmica com a finalidade de limpeza Clean in Place (CIP) - limpeza local, onde ocorre a limpeza por circulação através do uso do calor do sol diretamente para aquecer outros meios, aproveitando tubos a vácuo a fim de realizar a captação e transferir o calor para um meio líquido, a água.  Utilizando esta para a limpeza dos equipamentos da ordenhadeira que entra em contato com o leite das vacas.  Com a finalidade de que a limpeza e desinfecção não aumente a carga microbiana responsável pela baixa qualidade do leite, após a ordenha. Os benefícios da Ordenhadeira Solar são a produção de energia mais limpa, que a gerada por grande parte do sistema de energia do país que em geral trabalha com biocombustíveis, petróleo, carvão mineral, gás natural e energia nuclear, e também a utilização de materiais recicláveis como latinha que sendo reutilizados na construção da Ordenhadeira reduzem o impacto ambiental e geram mais consciência ecológica na reciclagem de materiais.
Palavras-Chave: Ordenhadeira; Produção de leite; Limpeza. Energia solar; Energias renováveis.


O sensor de temperatura foi criado através da plataforma de projetos do tinkercad, seguindo um modelo de processos com o intuito de atender a demanda ou seja que no horário desejado pelo pecuarista a água aquecida e na temperatura ideal fosse despejada.

# Materiais necessários:
- Arduino ou outro microcontrolador compatível- foi utilizado o arduíno UNO;
- Sensor de temperatura (por exemplo, DS18B20) - Foi utilizado o sensor TMP36;
- Módulo de relé. - Apenas para conectar fisicamente ao projeto, o que não foi realizado este caso foi utilizado apenas para simulação;
- Aquecedor de água. - Aquecedor Solar de baixo Custo;
- Módulo de tempo real (opcional).
- 
## Passos para o projeto:
1. Montagem do Hardware:
Conectou-se o sensor de temperatura ao Arduino da seguinte forma:
- Foi Conectado o pino de sinal do sensor (geralmente o pino central) a uma porta analógica do Arduino, A0.
- Conectou-se o pino VCC do sensor ao pino 5V do Arduino - responsável pela alimentação (potência);
- Conectou-se o pino GND do sensor ao pino GND do Arduino.
2. Programação do Microcontrolador:
- Fez-se necessário um código que lê-se os dados do sensor de temperatura em intervalos regulares;
- Foi definido uma temperatura de referência para acionar o aquecedor de água;
- Utilizando a lógica de controle para ativar o relé (e, portanto, o aquecedor) quando a temperatura medida ultrapassar a temperatura de referência.

3. Teste e Calibração:
- Carregou-se o código no microcontrolador e teste o sistema;
- A lógica foi ajustada de acordo com o controle conforme necessário para garantir que o aquecedor de água seja ativado corretamente quando a temperatura ultrapassar o limite definido.
  
