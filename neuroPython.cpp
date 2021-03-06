#include <stdio.h>
#include <fstream>
#include <boost/python.hpp>
#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
#include <boost/python/suite/indexing/vector_indexing_suite.hpp>
#include <string>


#include "commandLineArguments.h"
#include "node.h"
#include "neuroPython.h"

#if OPENGL
#include "glNetwork.h"
#endif
#include "globals.h"

#include "docstrings.h"

#include "neuroPythonNodes.h"

//typedef double baseType;
//network<baseType> *netCheat = 0;





using namespace conedy;


template <class N>
	 N* edgeFactory1 (double arg1)
	{
		N* res = new N();
		vector <baseType> allParams;
		allParams.push_back(arg1);
		res->setParameter(allParams);return res;
	}


template <class N>
	 N* edgeFactory2 (double arg1, double arg2)
	{
		N* res = new N();
		vector <baseType> allParams;
		allParams.push_back(arg1);
		allParams.push_back(arg2);
		res->setParameter(allParams);return res;
	}

template <class N>
	 N* edgeFactory3 (double arg1, double arg2, double arg3)
	{
		N* res = new N();
		vector <baseType> allParams;
		allParams.push_back(arg1);
		allParams.push_back(arg2);
		allParams.push_back(arg3);
		res->setParameter(allParams);return res;
	}

template <class N>
	 N* edgeFactory4 (double arg1, double arg2, double arg3, double arg4)
	{
		N* res = new N();
		vector <baseType> allParams;
		allParams.push_back(arg1);
		allParams.push_back(arg2);
		allParams.push_back(arg3);
		allParams.push_back(arg4);
		res->setParameter(allParams);return res;
	}

template <class N>
	 N* edgeFactory5 (double arg1, double arg2, double arg3, double arg4, double arg5)
	{
		N* res = new N();
		vector <baseType> allParams;
		allParams.push_back(arg1);
		allParams.push_back(arg2);
		allParams.push_back(arg3);
		allParams.push_back(arg4);
		allParams.push_back(arg5);
		res->setParameter(allParams);return res;
	}


template <class N>
	 N* edgeFactory6 (double arg1, double arg2, double arg3, double arg4, double arg5, double arg6)
	{
		N* res = new N();
		vector <baseType> allParams;
		allParams.push_back(arg1);
		allParams.push_back(arg2);
		allParams.push_back(arg3);
		allParams.push_back(arg4);
		allParams.push_back(arg5);
		allParams.push_back(arg6);
		res->setParameter(allParams);return res;
	}

template <class N>
	 N* edgeFactory7 (double arg1, double arg2, double arg3, double arg4, double arg5, double arg6, double arg7)
	{
		N* res = new N();
		vector <baseType> allParams;
		allParams.push_back(arg1);
		allParams.push_back(arg2);
		allParams.push_back(arg3);
		allParams.push_back(arg4);
		allParams.push_back(arg5);
		allParams.push_back(arg6);
		allParams.push_back(arg7);
		res->setParameter(allParams);return res;
	}

template <class N>
	 N* edgeFactory8 (double arg1, double arg2, double arg3, double arg4, double arg5, double arg6, double arg7, double arg8)
	{
		N* res = new N();
		vector <baseType> allParams;
		allParams.push_back(arg1);
		allParams.push_back(arg2);
		allParams.push_back(arg3);
		allParams.push_back(arg4);
		allParams.push_back(arg5);
		allParams.push_back(arg6);
		allParams.push_back(arg7);
		allParams.push_back(arg8);
		res->setParameter(allParams);return res;
	}


template <class N>
	 N* edgeFactory9 (double arg1, double arg2, double arg3, double arg4, double arg5, double arg6, double arg7, double arg8, double arg9)
	{
		N* res = new N();
		vector <baseType> allParams;
		allParams.push_back(arg1);
		allParams.push_back(arg2);
		allParams.push_back(arg3);
		allParams.push_back(arg4);
		allParams.push_back(arg5);
		allParams.push_back(arg6);
		allParams.push_back(arg7);
		allParams.push_back(arg8);
		allParams.push_back(arg9);
		res->setParameter(allParams);return res;
	}









	void initializeConedy ()
	{
		gslNoise::initialise();
		//	commandLineArguments::initialize(argc, argv);

#if CONDOR
		uniqueNumber::initialize();
#endif

		registerStandards();


#if OPENGL
		GLNetwork::registerStandardValues();
#endif

		//	params<double>::initialise ( &command::declare );
		//	params<vector<double> >::initialise (&command::declare);


		//	cout << "Conedy erfolgreich initialisiert!" << endl;

	};


	networkTemplate * directedNetworkFactory()
	{
		networkTemplate n;
		n.setDirected();
		return new networkTemplate(n);
	}

	networkTemplate * undirectedNetworkFactory()
	{
		networkTemplate n;
		n.setUndirected();
		return new networkTemplate(n);
	}


// 	using namespace boost::python;

	int i;

	// Python requires an exported function called init<module-name> in every
	// extension module. This is where we build the module contents.


	//BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(rewire_overloads, networkTemplate::rewire, 1, 3)


	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (lattice_overloads, lattice, 2,5);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (printNodeStatistics_overloads, printNodeStatistics, 0,1);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (replaceEdges_overloads, replaceEdges, 1,3);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (addNode_overloads, addNode, 0,1);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (scaleFreeNetwork_overloads, scaleFreeNetwork, 2,4);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (beeWeb_overloads, beeWeb, 2,3);
	//BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (evolve_overloads, evolve, 2,3);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (rewire_overloads, rewire, 1,2);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (randomizeWeights_overloads, randomizeWeights, 1,3);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (removeNodes_overloads, removeNodes, 0,1);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (addEdge_overloads, addEdge, 2,3);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (rewireUndirected_overloads, rewireUndirected, 1,2);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (randomNetwork_overloads, randomNetwork, 2,4);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (randomUndirectedNetwork_overloads, randomUndirectedNetwork, 2,4);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (randomizeStates_overloads, randomizeStates, 2,4);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (observe_overloads, observe, 2,3);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (observeAll_overloads, observeAll, 1,3);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (completeNetwork_overloads, completeNetwork, 1,3);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (cycle_overloads, cycle, 2,4);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (numberVertices_overloads, numberVertices, 0,1);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (createFromAdjacencyList_overloads, createFromAdjacencyList, 1,3);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (createFromAdjacencyMatrix_overloads, createFromAdjacencyMatrix, 1,3);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (observePhaseCoherence_overloads, observePhaseCoherence, 1,3);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (observeSum_overloads, observeSum, 1,2);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (setState_overloads, setInitialCondition, 2,13);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (getState_overloads, getState, 1,2);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (setStateTemplate_overloads, setState, 1,12);

	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (addRandomEdges_overloads, addRandomEdges, 1,2);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (addRandomEdgesDegreeDistribution_overloads, addRandomEdgesDegreeDistribution, 1,2);

	void translator (const char *c)
	{ PyErr_SetString (PyExc_UserWarning, c); }




	BOOST_PYTHON_MODULE(conedy)
	{

		boost::python::register_exception_translator<const char *>(translator);

#if RECOMPILE

		if (!system ("recompileConedy python-conedy.recompile 2> /dev/null"))
		{
			cout << "Mission accomplished. You can restart your script now." << endl;
			exit (1);
		}

#endif



		initializeConedy();


		//	docstring_options doc_options(1,1,0);


		//	scope current;
		//	current.attr("aa") = &i;

		boost::python::object o = boost::python::object (i);

		//	scope().attr("aa") = &i;

		boost::python::scope().attr("__doc__") =
			"What is Conedy"
			"================"
			"Conedy is a tool which allows you to integrate networks where each node is represented by some dynamical system. It is designed to allow for an change of the network structure or differential equation sperarately. ";



		boost::python::class_<std::vector<double> >("PyVec")
			.def(boost::python::vector_indexing_suite<std::vector<double> >());


		//	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS (
		// Add regular functions to the module.


		boost::python::def("set", &globals::setGlobal<baseType>);
		boost::python::def("set", &globals::setGlobal<string>);
		boost::python::def("set", &globals::setGlobal<bool>);
		boost::python::def("set", &globals::setGlobal<int>);
		boost::python::def("get", &globals::getGlobal<baseType>);
		boost::python::def("get", &globals::getGlobal<string>);
		boost::python::def("get", &globals::getGlobal<bool>);
		boost::python::def("get", &globals::getGlobal<int>);
		boost::python::def("setRandomSeed", &gslNoise::setSeed);

		boost::python::class_<createNetwork>("createNetwork");
		boost::python::class_<statisticsNetwork>("statisticsNetwork");
		boost::python::class_<spatialNetwork>("spatialNetwork");

		boost::python::class_<network>("net");
		boost::python::class_<dynNetwork, boost::python::bases <network> >("dynNetwork");
	
		boost::python::class_<networkTemplate, boost::python::bases <createNetwork, dynNetwork, statisticsNetwork, spatialNetwork> >("network")
			//	 class_<networkTemplate >("directedNetwork")
			.def("__init__", boost::python::make_constructor(directedNetworkFactory))
			.def("__del__", &networkTemplate::clear, reinterpret_cast<const char *>(__network_clear))


			////network commands
			.def("addNode", &networkTemplate::addNode, addNode_overloads(reinterpret_cast<const char *>(__network_addNode)))
			.def("addEdge", &networkTemplate::addEdge, addEdge_overloads(reinterpret_cast<const char *>(__network_addEdge)))
			.def("addWeightedEdge", &networkTemplate::addWeightedEdge, reinterpret_cast<const char *>(__network_addWeightedEdge))
			.def("clear", &dynNetwork::clear, reinterpret_cast<const char *>(__network_clear))
			.def("isDirected", &networkTemplate::isDirected, reinterpret_cast<const char *>(__network_isDirected))
			.def("isLinked", &networkTemplate::isLinked, reinterpret_cast<const char *>(__network_isLinked))
			.def("linkStrength", &networkTemplate::linkStrength, reinterpret_cast<const char *>(__network_linkStrength))
			.def("randomizeWeights", &networkTemplate::randomizeWeights,  randomizeWeights_overloads( reinterpret_cast<const char *>(__network_randomizeWeights)))
			.def("replaceNode", &networkTemplate::replaceNode, reinterpret_cast<const char *>(__network_replaceNode))
			.def("removeEdge", &networkTemplate::removeEdge, reinterpret_cast<const char *>(__network_removeEdge))
			.def("removeEdges", &networkTemplate::removeEdges, reinterpret_cast<const char *>(__network_removeEdges))
			.def("removeNodes", &networkTemplate::removeNodes, reinterpret_cast<const char *>(__network_removeNodes))
			.def("numberVertices", &networkTemplate::numberVertices, numberVertices_overloads (reinterpret_cast<const char *>(__network_numberVertices)))	
			.def("setDirected", &networkTemplate::setDirected, reinterpret_cast<const char *>(__network_setDirected))
			.def("setUndirected", &networkTemplate::setUndirected, reinterpret_cast<const char *>(__network_setUndirected))

			// createNetwork commands
			.def("addRandomEdges", &networkTemplate::addRandomEdges, addRandomEdges_overloads (reinterpret_cast<const char *>(__createNetwork_addRandomEdges)))
			.def("addRandomEdgesDegreeDistribution", &networkTemplate::addRandomEdgesDegreeDistribution, addRandomEdgesDegreeDistribution_overloads (reinterpret_cast<const char *>(__createNetwork_addRandomEdgesDegreeDistribution)))
			.def("beeWeb", &networkTemplate::beeWeb, beeWeb_overloads(reinterpret_cast<const char *>(__createNetwork_beeWeb)))
			.def("createFromAdjacencyMatrix", &networkTemplate::createFromAdjacencyMatrix ,  createFromAdjacencyMatrix_overloads( reinterpret_cast< const char *> (__createNetwork_createFromAdjacencyMatrix)))
			.def("createFromAdjacencyList", &networkTemplate::createFromAdjacencyList, createFromAdjacencyList_overloads( reinterpret_cast<const char *>(__createNetwork_createFromAdjacencyList)))
			.def("completeNetwork", &networkTemplate::completeNetwork, completeNetwork_overloads( reinterpret_cast<const char *>(__createNetwork_completeNetwork)))
			.def("cycle", &networkTemplate::cycle, cycle_overloads( reinterpret_cast<const char *>(__createNetwork_cycle)))
			.def("lattice", &networkTemplate::lattice, lattice_overloads(reinterpret_cast<const char *>(__createNetwork_lattice)))
			.def("line", &networkTemplate::line, reinterpret_cast<const char *>(__createNetwork_line))
			.def("normalizeInputs", &networkTemplate::normalizeInputs, reinterpret_cast<const char *>(__createNetwork_normalizeInputs))
			.def("normalizeOutputs", &networkTemplate::normalizeOutputs, reinterpret_cast<const char *>(__createNetwork_normalizeOutputs))
			.def("randomNetwork", &networkTemplate::randomNetwork ,  randomNetwork_overloads( reinterpret_cast< const char *> (__createNetwork_randomNetwork)))
			.def("removeRandomEdges", &networkTemplate::removeRandomEdges, reinterpret_cast<const char *>(__createNetwork_removeRandomEdges))
			.def("rewire", &networkTemplate::rewire ,  rewire_overloads( reinterpret_cast< const char *> (__createNetwork_rewire)))
			.def("replaceEdges", &networkTemplate::replaceEdges ,  replaceEdges_overloads( reinterpret_cast< const char *> (__createNetwork_replaceEdges)))
			.def("scaleFreeNetwork", &networkTemplate::scaleFreeNetwork, scaleFreeNetwork_overloads(reinterpret_cast<const char *>(__createNetwork_scaleFreeNetwork)))
//			.def("streamInLattice", &networkTemplate::streamInLattice, reinterpret_cast<const char *>(__createNetwork_streamInLattice))   
			.def("torus", &networkTemplate::torus, reinterpret_cast<const char *>(__createNetwork_torus))
			.def("torusNearestNeighbors", &networkTemplate::torusNearestNeighbors,  reinterpret_cast<const char *>(__createNetwork_torusNearestNeighbors))


			////statisticsNetworkCommands
			.def("betweennessCentrality", &networkTemplate::betweennessCentrality, reinterpret_cast<const char *>(__statisticsNetwork_betweennessCentrality))
			.def("closenessCentrality", &networkTemplate::closenessCentrality, reinterpret_cast<const char *>(__statisticsNetwork_closenessCentrality))
			.def("degreeCentrality", &networkTemplate::degreeCentrality, reinterpret_cast<const char *>(__statisticsNetwork_degreeCentrality))
			.def("degree", &networkTemplate::degree, reinterpret_cast<const char *>(__statisticsNetwork_degree))
			.def("meanDegree", &networkTemplate::meanDegree, reinterpret_cast<const char *>(__statisticsNetwork_meanDegree))
			.def("meanWeight", &networkTemplate::meanWeight, reinterpret_cast<const char *>(__statisticsNetwork_meanWeight))
			.def("meanClustering", &networkTemplate::meanClustering, reinterpret_cast<const char *>(__statisticsNetwork_meanClustering))
			.def("meanPathLength", &networkTemplate::meanPathLength, reinterpret_cast<const char *>(__statisticsNetwork_meanPathLength))
			.def("isConnected", &networkTemplate::isConnected, reinterpret_cast<const char *>(__statisticsNetwork_isConnected))
			.def("getState", &networkTemplate::getState, getState_overloads(reinterpret_cast<const char *>(__statisticsNetwork_getState)))
			.def("setParam", &networkTemplate::setParam, reinterpret_cast<const char *>(__dynNetwork_setParam))


			// dynNetwork commands
			.def("evolve", &networkTemplate::evolve, reinterpret_cast<const char *>(__dynNetwork_evolve))
			.def("getParam", &networkTemplate::getParam, reinterpret_cast<const char *>(__statisticsNetwork_getParam))
			.def("snapshot", &networkTemplate::snapshot, reinterpret_cast<const char *>(__dynNetwork_snapshot))
			.def("observe", &networkTemplate::observe, observe_overloads (reinterpret_cast<const char *>(__dynNetwork_observe)))
			.def("observeAll", &networkTemplate::observeAll, observeAll_overloads (reinterpret_cast<const char *>(__dynNetwork_observeAll)))
			.def("observeComponents", &networkTemplate::observeComponents, reinterpret_cast<const char *>(__dynNetwork_observeComponents))
			.def("observeTime", &networkTemplate::observeTime, reinterpret_cast<const char *>(__dynNetwork_observeTime))
			.def("observePhaseCoherence", &networkTemplate::observePhaseCoherence, observePhaseCoherence_overloads( reinterpret_cast<const char *>(__dynNetwork_observePhaseCoherence)))
			.def("observeSum", &networkTemplate::observeSum, observeSum_overloads( reinterpret_cast<const char *>(__dynNetwork_observeSum)))
			.def("printNodeStatistics", &networkTemplate::printNodeStatistics, printNodeStatistics_overloads(reinterpret_cast<const char *>(__statisticsNetwork_printNodeStatistics)))
			.def("readInitialCondition", &networkTemplate::readInitialCondition, reinterpret_cast<const char *>(__createNetwork_readInitialCondition))
			.def("removeObserver", &networkTemplate::removeObserver, reinterpret_cast<const char *>(__dynNetwork_removeObserver))
			.def("setTime", &networkTemplate::setTime, reinterpret_cast<const char *>(__dynNetwork_setTime))







			//		.def("loadGraphML", &networkTemplate::loadGraphML, reinterpret_cast<const char *>(__createNetwork_loadGraphXml))
			.def("saveGraphML", &networkTemplate::saveGraphML, reinterpret_cast<const char *>(__createNetwork_saveGraphML))
			.def("saveAdjacencyList", &networkTemplate::saveAdjacencyList, reinterpret_cast<const char *>(__createNetwork_saveAdjacencyList))
			.def("saveAdjacencyMatrix", &networkTemplate::saveAdjacencyMatrix, reinterpret_cast<const char *>(__createNetwork_saveAdjacencyMatrix))


			.def("setState", &networkTemplate::setInitialCondition, setState_overloads (reinterpret_cast<const char *>(__createNetwork_setState)))
//			.def("rewireUndirected", &networkTemplate::rewireUndirected ,  rewireUndirected_overloads( reinterpret_cast< const char *> (__createNetwork_rewireUndirected)))
			.def("randomizeStates", &networkTemplate::randomizeStates ,  randomizeStates_overloads( reinterpret_cast< const char *> (__createNetwork_randomizeStates)))
			.def("randomizeParameter", &networkTemplate::randomizeParameter, reinterpret_cast<const char *>(__createNetwork_randomizeParameter));








		// random objects

		//	 class ("random", boost::function<double ()>);
		//

		boost::python::class_<boost::function<double ()> > ("random");

		boost::python::def ("uniform", &gslNoise::functionUniform);
		boost::python::def ("constant", &gslNoise::functionConstant);
		boost::python::def ("gaussian", &gslNoise::functionGaussian);
		boost::python::def ("bimodal", &gslNoise::functionBimodal);
		boost::python::def ("powerLaw", &gslNoise::functionPowerLaw);



		boost::python::class_<nodeBlueprint> ("nodeBlueprint")
			.def("setState", &dynNode::setState, setStateTemplate_overloads ( reinterpret_cast <const char *> (__dynNetwork_setState)))  ;








		//	class_< edgeVirtual, boost::python::bases <edgeBlueprint> > ("unweightedEdge");

		boost::python::class_< nodeVirtualEdges < dynNode >, boost::python::bases <nodeBlueprint> > ("node");

		revealNodesToPython();


		boost::python::class_<edgeBlueprint> ("edge");


		boost::python::class_< weightedEdge < edgeVirtual >, boost::python::bases <edgeBlueprint> > ("weightedEdge",   reinterpret_cast<const char *>(__edges_weightedEdge)       ). def (boost::python::init<baseType>());

		boost::python::class_< staticWeightedEdge < edgeVirtual >  , boost::python::bases <edgeBlueprint> > ("staticWeightedEdge", reinterpret_cast<const char *>(__edges_staticWeightedEdge)   ).
			def (boost::python::init <baseType> ());



		boost::python::class_< component < edgeVirtual > , boost::python::bases <edgeBlueprint> >("component", reinterpret_cast<const char *>(__edges_component))
					.def ("__init__", boost::python::make_constructor (edgeFactory1 <component< edgeVirtual > > ));
		boost::python::class_< component < weightedEdgeVirtual>, boost::python::bases <edgeBlueprint>   > ("component_weightedEdge" ,reinterpret_cast<const char *>(__edges_weightedEdge))
					.def ("__init__",boost::python::make_constructor (edgeFactory2 <component< weightedEdgeVirtual > > ));

		boost::python::class_< component < staticWeightedEdgeVirtual>, boost::python::bases <edgeBlueprint>  >("component_staticWeightedEdge" ,reinterpret_cast<const char *>(__edges_component_staticWeightedEdge))
					.def ("__init__",boost::python::make_constructor (edgeFactory2 <component< staticWeightedEdgeVirtual > > ));



		boost::python::class_< staticComponent < edgeVirtual > , boost::python::bases <edgeBlueprint> >("staticComponent", reinterpret_cast<const char *>(__edges_component))
					.def ("__init__",boost::python::make_constructor (edgeFactory1 <staticComponent < edgeVirtual > > ));

		boost::python::class_< staticComponent < weightedEdgeVirtual>, boost::python::bases <edgeBlueprint>   > ("staticComponent_weightedEdge" ,reinterpret_cast<const char *>(__edges_weightedEdge))
					.def ("__init__",boost::python::make_constructor (edgeFactory2 <staticComponent < weightedEdgeVirtual> > ));
		boost::python::class_< staticComponent < staticWeightedEdgeVirtual>, boost::python::bases <edgeBlueprint>  >("staticComponent_staticWeightedEdge" ,reinterpret_cast<const char *>(__edges_component_staticWeightedEdge))
					.def ("__init__",boost::python::make_constructor (edgeFactory2 <staticComponent < staticWeightedEdgeVirtual> > ));


		boost::python::class_< randomTarget < edgeVirtual>, boost::python::bases <edgeBlueprint>  > ("randomTarget",  reinterpret_cast<const char *>(__edges_randomTarget))
					.def ("__init__",boost::python::make_constructor (edgeFactory2 < randomTarget < edgeVirtual>   > ));
		boost::python::class_< randomTarget < weightedEdgeVirtual>, boost::python::bases <edgeBlueprint>  > ("randomTarget_weightedEdge",  reinterpret_cast<const char *>(__edges_weightedEdge))
					.def ("__init__",boost::python::make_constructor (edgeFactory3 < randomTarget < weightedEdgeVirtual>   > ));
		boost::python::class_< randomTarget < staticWeightedEdgeVirtual>, boost::python::bases <edgeBlueprint>  >("randomTarget_staticWeightedEdge", reinterpret_cast<const char *>(__edges_randomTarget_staticWeightedEdge))
					.def ("__init__",boost::python::make_constructor (edgeFactory3 < randomTarget < staticWeightedEdgeVirtual>   > ));

		boost::python::class_< stepEdge < edgeVirtual>, boost::python::bases <edgeBlueprint>  > ("step" ,reinterpret_cast<const char *>(__edges_stepEdge))
					.def ("__init__",boost::python::make_constructor (edgeFactory1 < stepEdge <edgeVirtual > > ));
		boost::python::class_< stepEdge < weightedEdgeVirtual>, boost::python::bases <edgeBlueprint>  > ("step_weightedEdge", reinterpret_cast<const char *>(__edges_weightedEdge))
					.def ("__init__",boost::python::make_constructor (edgeFactory2 < stepEdge <weightedEdgeVirtual > > ));
		boost::python::class_< stepEdge < staticWeightedEdgeVirtual>, boost::python::bases <edgeBlueprint>  >("step_staticWeightedEdge", reinterpret_cast<const char *>(__edges_step_staticWeightedEdge))
					.def ("__init__",boost::python::make_constructor (edgeFactory2 < stepEdge <staticWeightedEdgeVirtual > > ));




		boost::python::class_<directedNetwork, boost::python::bases <networkTemplate> >("directedNetwork");
//				.def ("__init__");


		boost::python::class_<undirectedNetwork, boost::python::bases <networkTemplate> >("undirectedNetwork");
//				.def ("__init__");

	}
