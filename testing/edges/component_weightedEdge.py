import conedy as co

net = co.network()







firstNode = net.addNode(co.roessler())
secondNode = net.addNode(co.roessler())

net.addEdge (firstNode,secondNode, co.component_weightedEdge (2) )


net.printNodeStatistics()
