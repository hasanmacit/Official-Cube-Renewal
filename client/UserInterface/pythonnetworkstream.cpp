arat

			Set(HEADER_GC_DRAGON_SOUL_REFINE,		CNetworkPacketHeaderMap::TPacketType(sizeof(TPacketGCDragonSoulRefine), STATIC_SIZE_PACKET));


altına ekle

#ifdef ENABLE_CUBE_RENEWAL_WORLDARD
			Set(HEADER_GC_CUBE_RENEWAL,	CNetworkPacketHeaderMap::TPacketType(sizeof(TPacketGCCubeRenewalReceive), STATIC_SIZE_PACKET));
#endif