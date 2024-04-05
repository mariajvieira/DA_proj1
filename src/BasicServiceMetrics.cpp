#include "BasicServiceMetrics.h"

void maxAmountWater(Graph<Node> &g, City c){

    Node superSource = Node(0, "SuperSource");
    Node superSink = Node(0, "SuperSink");
    g.addVertex(superSource);
    g.addVertex(superSink);
    for(Vertex<Node> *v: g.getVertexSet()){
        if(v->getInfo().getCode()[0]=='R') g.addPipe(superSource,v->getInfo(),INT_MAX);
    }
    for(Vertex<Node> *v: g.getVertexSet()){
        if(v->getInfo().getCode()[0]=='C') g.addPipe(v->getInfo(),superSink,INT_MAX);
    }

}

