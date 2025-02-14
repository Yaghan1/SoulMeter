#include "pch.h"
#include ".\Soulworker Packet\SWPacketMazeStart.h"
#include ".\Damage Meter\Damage Meter.h"

SWPacketMazeStart::SWPacketMazeStart(SWHEADER* swheader, BYTE* data) : SWPacket(swheader, data) {

}

VOID SWPacketMazeStart::Do() {
	DAMAGEMETER.SetMazeState(FALSE);
}

VOID SWPacketMazeStart::Log() {

}

VOID SWPacketMazeStart::Debug() {
	//Log::WriteLog(const_cast<LPTSTR>(_T("[TEST] [MAZE START]")));

	Log::MyLog(_T("Maze Start\n"));
	for (int i = sizeof(SWHEADER); i < _swheader->_size; i++)
		Log::MyLog(_T("%02x "), _data[i]);
	Log::MyLog(_T("\n"));
}