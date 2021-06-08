#ifdef ENABLE_CUBE_RENEWAL_WORLDARD
	PyModule_AddIntConstant(poModule, "ENABLE_CUBE_RENEWAL_WORLDARD",	1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_CUBE_RENEWAL_WORLDARD",	0);
#endif