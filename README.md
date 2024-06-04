# Integrantes

Rafael Panhoca RM555014   
Guilherme oliveira RM558797

## Link simulação arduino
[Link para acessar a simulação do circuito.](https://www.tinkercad.com/things/bcqNrDfFGeI-gs-edge?sharecode=_YDHr0weDzYbh3Dkvx_XXUrBPPkq9xsOVJ9w0YGvYAA)


## Descrição do projeto

#### A FIAP propos ao seus alunos pensarem em como resolver um dos diversos problemas causados pelo ser humano e que afetam os oceanos e vida marinha
---
### Problema:
Desde 1862, quando foi criado o primeiro plástico, esse material passou a ser a matéria-prima mais produzida no mundo, devido à sua resistência, facilidade e baixo custo de fabricação. Atualmente, praticamente qualquer produto que se possa imaginar contém plástico. Produzido em escala global, o plástico é rapidamente descartado após o uso mais breve. Esse plástico descartado pode seguir diversos destinos, como a reciclagem, aterros sanitários, ou acabar na natureza e nos oceanos.

Não é à toa que a poluição marinha vem atingindo níveis recordes devido ao descarte inadequado de plásticos. O problema se agrava, pois esses plásticos (embalagens, garrafas, copos) de tamanhos “normais” se degradam em pedaços cada vez menores, os chamados microplásticos e nanoplásticos, que causam danos ainda maiores por serem quase invisíveis a olho nu. Eles afetam os corais, diminuem a fotossíntese das bactérias marinhas responsáveis pela produção de oxigênio para o planeta, contribuem para a acidificação dos oceanos, entre outros impactos negativos.

Portanto, é necessário impedir que mais plásticos cheguem à natureza e aos oceanos, bem como lidar com o plástico que já está presente nos oceanos, que já chega a 150 milhões de toneladas.

### Nossa Solução

Pensamos em um dispositivo de IoT simples e acessível para ser acoplado ao casco de embarcações, especialmente aquelas que operam em áreas costeiras. Esse dispositivo filtra a água enquanto a embarcação navega, removendo microplásticos e nanoplásticos, além de capturar plásticos de tamanhos maiores. Paralelamente, ele coletará e armazenará dados sobre a qualidade da água.

Nosso objetivo é criar uma solução prática para embarcações menores, que poderão instalar o dispositivo e deixá-lo funcionando automaticamente enquanto realizam suas atividades habituais. Quando o armazenamento do dispositivo estiver cheio, os navegadores poderão levar o material coletado a centros de coleta nos portos, onde poderão descartá-lo em troca de uma compensação financeira.

Nossa principal intenção é utilizar a infraestrutura já existente, ou seja, a grande quantidade de barcos que já navegam pelos mares. Queremos desenvolver um dispositivo barato e simples, que possa ser produzido em massa e instalado gratuitamente no maior número possível de embarcações interessadas. O foco principal será nas embarcações menores e litorâneas, pois o plástico tende a se acumular mais nessas áreas. Dessa forma, enquanto realizam suas atividades habituais, essas embarcações contribuirão simultaneamente para a despoluição dos mares, em uma espécie de "ação passiva".

Além disso, haverá uma recompensa financeira como incentivo. À medida que o dispositivo acumula mais plástico, o consumo de combustível da embarcação aumenta devido ao peso extra e ao arrasto. No entanto, o plástico coletado será vendido como matéria-prima ou enviado para reciclagem, gerando um retorno econômico.

No quesito coleta de informações, os dados são extremamente úteis para análises ambientais. O dispositivo também ajudará nesse aspecto, enviando dados sobre pH, oxigenação, concentração de CO2, entre outros, o que permitirá identificar onde são necessárias intervenções mais significativas.



## Simulação Arduino

#### Como apresentado a cima, o nosso IoT terá também como função secundária a constante coleta de dados das águas em que estão
---
Criamos um circuito no tinkercad com o intuito de demostrar de maneira visual como seria a coleta de dados, fazemos o uso adaptado de alguns componentes para simular alguns tipos de informações coletadas

#### Componentes
- 2 LCD i2c
- Sensor de gás (para simular a quantidade de micro plásticos na água)
- Sensor de temperatura
- Potenciômetro (para simular o ph da água)
- Protoboard
- Arduino

#### Lógica de funcionamento
A intenção é que em um dos LCDs fique constantemente aparecendo asa informações coletadas pelos sensores (Partic, Temp, Ph)

Mas se um dessas medições extrapolar o um certo limite, aparecerá um alerta piscante dizendo qual medição está muito alta e um led referente ao sensor também começará a piscar.  
Os limites são de:
- 600 para partículas
- 30°c para temperatura
- 6 para Ph

![Tela de alerta](images/alertScreen.png)
![Led de alerta](images/ledAlert.png)

##### EasterEgg

Caso todos os sensores estrapolem o limite, uma mensagem aparecerá e todos os leds piscarão junto.

[MIT](https://choosealicense.com/licenses/mit/)