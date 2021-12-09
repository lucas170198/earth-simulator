# Atividade 3 - Computação Gráfica

**Nome** : Lucas Silva Amorim

**RA** : 11201720968

**Live Demo**: https://lucas170198.github.io/earth-simulator/earthsimulator/

## Eath Simulator
### Descrição da Aplicação
Modelo de simulação 3D do planeta terra, com iluminação e textura. O modelo simula a terra em constante rotação, e permite mudar a direção da iluminação de acordo com a estação do ano selecionada (simulando como a iluminação do sol muda de acordo com a estação do ano).

### Assets utilizados
- [Eath V1 modelo 3D - free3d.com](https://free3d.com/3d-model/earth-v1--590680.html)

### Referências
- [Aula 9 / Iluminação - Computação Gráfica - Harlen Batagelo e Bruno Marques] (https://hbatagelo.github.io/cg/lighting.html)
- [Aula 10 / Texturização - Computação Gráfica - Harlen Batagelo e Bruno Marques] (https://hbatagelo.github.io/cg/texturing.html)
- [learnopengl.com] (https://learnopengl.com/Model-Loading/Mesh)
- [weather.gov - Why do we have seasons] (https://www.weather.gov/lmk/seasons)

### Técnicas Utilizadas
- **Texturização** : A descrição da textura do planeta está contida no arquivo `world.mtl`, e utiliza o arquivo externo `world_giant.png` para criação da textura difusa do modelo.
- **Iluminação** : Para uma aproximação mais precisa da luz solar, a iluminação é construída a partir da técnica de iluminação direcional utilizando Blinn-Phong como modelo de reflexão.
-  **Classe Planet** : A classe `Planet.cpp` é uma adaptação de `Trackball.cpp` apresentado em aula, utilizado a mesma ideia para movimentação do modelo, porém sem o uso do mouse. A ideia da classe é que ela facilite a criação de novos planetas para o cenário, ou até a adição de outros movimentos (como o de translação).
- **Mudança de direção da fonte de luz** : A iluminação que simula a diferença entre as estações do ano, é controlada pela mudança na variável `lightDirWorldSpace` de acordo com o valor selecionado via combo box.

## Possíveis melhorias
- Adicionar um cubeMap para simular um background com estrelas.
- Adicionar outros astros na simulação.
- Mapeamento de normais.