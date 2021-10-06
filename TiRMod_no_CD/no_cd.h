#pragma once

DWORD is_cd_inserted_address = 0x403d30;
DWORD is_cd_inserted_instraction_size = 0x5;

// EAX is char *
BOOL __fastcall is_cd_inserted(void)
{
	return 1;
}