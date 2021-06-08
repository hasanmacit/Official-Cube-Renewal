arat

	case HEADER_CG_REFINE:
		Refine(ch, c_pData);
		break;

altına ekle

#ifdef ENABLE_CUBE_RENEWAL_WORLDARD
	case HEADER_CG_CUBE_RENEWAL:
		CubeRenewalSend(ch, c_pData);
		break;
#endif

arat

int CInputDead::Analyze(LPDESC d, BYTE bHeader, const char* c_pData)

üstüne ekle

#ifdef ENABLE_CUBE_RENEWAL_WORLDARD
void CInputMain::CubeRenewalSend(LPCHARACTER ch, const char* data)
{
	struct packet_send_cube_renewal * pinfo = (struct packet_send_cube_renewal *) data;
	switch (pinfo->subheader)
	{
		case CUBE_RENEWAL_SUB_HEADER_MAKE_ITEM:
		{

			int index_item = pinfo->index_item;
			int count_item = pinfo->count_item;
			int index_item_improve = pinfo->index_item_improve;

			Cube_Make(ch,index_item,count_item,index_item_improve);
		}
		break;

		case CUBE_RENEWAL_SUB_HEADER_CLOSE:
		{
			Cube_close(ch);
		}
		break;
	}
}
#endif