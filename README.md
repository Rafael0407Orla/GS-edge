# Integrantes

Rafael Panhoca RM555014   
Guilherme oliveira RM558797

## Link simulação arduino
[Link para acessar a simulação do circuito.](https://www.tinkercad.com/things/bcqNrDfFGeI-gs-edge?sharecode=_YDHr0weDzYbh3Dkvx_XXUrBPPkq9xsOVJ9w0YGvYAA)


## Descrição do projeto

#### A FIAP propos ao seus alunos pensarem em como resolver um dos diversos problemas causados pelo ser humano e que afetam os oceanos e vida marinha
---
### Problema:
Desde 1862, quando foi criado o primeiro plástico, esse material se tornou a matéria-prima mais produzida no mundo, devido à sua resistência, facilidade e baixo custo de fabricação. Atualmente, praticamente qualquer produto contém plástico. Produzido em escala global, o plástico é rapidamente descartado após um uso breve, seguindo para diversos destinos, como a reciclagem, aterros sanitários ou, infelizmente, acabando na natureza e nos oceanos.
A poluição marinha vem atingindo níveis recordes devido ao descarte inadequado de plásticos. O problema se agrava à medida que esses plásticos (embalagens, garrafas, copos) se degradam em pedaços cada vez menores, os chamados microplásticos e nanoplásticos. Esses fragmentos minúsculos causam danos ainda maiores, pois são quase invisíveis a olho nu. Eles afetam os corais, diminuem a fotossíntese das bactérias marinhas responsáveis pela produção de oxigênio para o planeta e contribuem para a acidificação dos oceanos.
Além disso, o plástico pode fazer o caminho ‘reverso’ e entrar na cadeia alimentar humana. Estudos mostram que microplásticos foram encontrados dentro do corpo humano, resultado da ingestão de frutos do mar contaminados. Essa presença de plástico no organismo humano levanta preocupações sobre possíveis impactos na saúde.
Portanto, é crucial impedir que mais plásticos cheguem à natureza e aos oceanos e lidar com o plástico já presente nos oceanos, cuja quantidade já chega a 150 milhões de toneladas.


### Nossa Solução

Pensamos em um dispositivo de IoT simples para ser acoplado ao casco de embarcações pesqueiras. Este dispositivo terá dupla função. A primeira é atuar como um grande coletor de dados sobre o estado da água, medindo parâmetros como pH, amônia e iodo. Esses dados serão coletados continuamente e enviados para um banco de dados central, onde serão processados, analisados e usados para criar dashboards, mapas e uma série informações.
A segunda função, embora secundária, é filtrar a água enquanto a embarcação navega, removendo microplásticos e nanoplásticos. Quando o armazenamento do dispositivo estiver cheio, os navegadores poderão levar o material coletado a centros de coleta nos portos, onde poderão descartá-los
Nosso objetivo é criar uma solução prática para a falta de dados sobre as águas dos oceanos e obter mais informações sobre as áreas de onde vêm os peixes selvagens que consumimos. A ideia é utilizar a infraestrutura já existente das embarcações pesqueiras, que poderão instalar o dispositivo e deixá-lo funcionando automaticamente enquanto realizam suas atividades habituais.


Nossa principal intenção é utilizar a infraestrutura já existente, especialmente a grande quantidade de barcos pesqueiros que já navegam pelos mares. Queremos começar "unindo o útil ao agradável", criando valor para os pescadores que adquirirem este dispositivo, ao mesmo tempo em que eles nos ajudam a aprimorar e melhorar nosso sistema.

O dispositivo coleta dados sobre a qualidade da água, e nosso sistema os processa para criar um dashboard. Essa rede de dados mostrará onde a água está mais limpa, indicando regiões com peixes e outras mercadorias de pesca de melhor qualidade. Com base nesses dados, os pescadores poderão receber selos de qualidade para seus produtos, semelhantes aos selos de inspeção utilizados na pecuária, como o S.I.F.

Dessa forma, os pescadores não apenas contribuirão para o monitoramento ambiental e a limpeza dos oceanos, mas também poderão aumentar o valor de seus produtos no mercado, obtendo reconhecimento pela qualidade superior de suas capturas.

Nosso objetivo é criar uma estrutura de coleta de dados para as mais diversas funcionalidades. Queremos maximizar o uso da infraestrutura já existente nos oceanos, começando com os barcos pesqueiros, mas também considerando iniciativas para outros tipos de embarcações, como navios. Ao fazer isso, esperamos mapear os oceanos de forma mais abrangente e eficiente.


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
