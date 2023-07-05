package pkt

import "FPSProject/utils"

type S_Test struct {
	Msg string
}

type FSendPacket_Enter struct {
	PlayerId  int32
	RotationY float32
}

type FRecvPacket_PlayerRotation struct {
	PlayerId  int32
	RotationY float32
}
type FSendPacket_PlayerRotation struct {
	PlayerId  int32
	RotationY float32
}

type FSendPacket_PlayerMove struct {
	PlayerId        int32
	InputKey        int32 // 0: Up, 1: Down, 2: Left, 3: Right
	IsPress         bool  // Press 인지 Release 인지 구분
	CurrentLocation utils.Vec3
}
type FRecvPacket_PlayerMove struct {
	PlayerId        int32
	InputKey        int32 // 0: Up, 1: Down, 2: Left, 3: Right
	IsPress         bool  // Press 인지 Release 인지 구분
	CurrentLocation utils.Vec3
}
