#include "../inc/Graph.h"

Graph::Graph()
{
    v = NUMBER_NODES;
    adj->clear();
    for (int i = 0; i <= v; i++)
    {
        setStatusTower(i, 0);
    }

    generateNodes();
}

Graph::~Graph() = default;

void Graph::addEdge( int u, int v, int p)
{
    adj[u].push_back( pii(p, v) );
    adj[v].push_back( pii(p, u) );
}

int Graph::primAlgorithm ( int startNode )
{
    for( auto & value : weight ) value = BIG_NUMBER;

    weight[startNode] = 0;
    setStatusTower(startNode, 1);

    for( auto & value : statusTower ) value = 0;
    for( auto & value : visited ) value = 0;


	std::priority_queue< pii, std::vector<pii>, std::greater<pii> > fila;
	fila.push( pii(weight[startNode], startNode) );           

	while(true){

		int nextNode = -1;

		while(!fila.empty()){                                                   // seleciona o vértice mais próximo

			int actual = fila.top().second;
			fila.pop();

			if(!visited[actual]){                                               // usa esse vértice porque ele ainda não foi processado
				nextNode = actual;                                                 // se não, continuamos procurando
				break;
			}


		}

		if(nextNode == -1) break;                                                 // se não achou ninguém, é o fim do algoritmo

		visited[nextNode] = true;                                                // marca para não voltar para este vértice

		for(int i = 0;i < (int)adj[nextNode].size();i++){                         // atualiza as distâncias

			int dist  = adj[nextNode][i].first;                                   // possível distância é dist.
			int atual = adj[nextNode][i].second;                                  // compara com peso[atual].

                                                                                // checar se o vértice atual não foi processado ainda
			if( weight[atual] > dist && !visited[atual]){                        // vemos que vale a pena usar o vértice davez
				weight[atual] = dist;                                             // atualizamos a distância
				fila.push( pii(weight[atual], atual) );
			}
		}
	}

	int custo_arvore = 0;
	for(int k = 1;k <= v;k++) {

        if( k > 105 ) break;

        custo_arvore += weight[k];
        for(int i = 0;i < (int)adj[k].size();i++) {

			int atual = adj[k][i].second;

            bool marcou{false};

                for(int i = 0;i < (int)adj[atual].size();i++) {

                    int dist2 = adj[atual][i].first;
                    int atual2 = adj[atual][i].second;

                    if( (weight[k] == dist2) && (k == atual2)  ) {

                      visitedStreet(atual,atual2);
                      marcou = true;
                      break;

                    }

                }

            if ( marcou ) break;
        }

        // std::cout << k << " peso:" << weight[k] << '\n';
    }
	return custo_arvore;
}

int Graph::getV()
{
    return 0;
}
