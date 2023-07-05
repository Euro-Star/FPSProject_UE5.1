package content

import (
	"log"
	"net"
)

type PacketHandler struct {
	TCPHandlerFunc map[string]func(net.Conn, string)
	UDPHandlerFunc map[string]func(*net.UDPAddr, string)
}

func (ph *PacketHandler) Init() {

	log.Println("INIT_PacketHandler")

	ph.TCPHandlerFunc = make(map[string]func(net.Conn, string))
	ph.UDPHandlerFunc = make(map[string]func(*net.UDPAddr, string))

	/* ------------------------------------------------------------
						TCP Packet Handler
	------------------------------------------------------------ */

	// GStar 전용
	ph.TCPHandlerFunc["Enter"] = ph.Handle_Enter
	ph.TCPHandlerFunc["PlayerRotation"] = ph.Handle_PlayerRotation
	ph.TCPHandlerFunc["PlayerMove"] = ph.Handle_PlayerMove

	//ph.UDPHandlerFunc["PlayerMove"] = ph.Handle_PlayerMove
}

/* ------------------------------------------------------------
					TCP Handler Function
------------------------------------------------------------ */

func (ph *PacketHandler) Handle_Enter(c net.Conn, json string) {

	//recvpkt := utils.JsonStrToStruct[pkt.C_GStarSelect](json)
	//GetGlobalSession().GStarSelect(c, recvpkt)
}

func (ph *PacketHandler) Handle_PlayerRotation(c net.Conn, json string) {

	//recvpkt := utils.JsonStrToStruct[pkt.C_GStarSelect](json)
	//GetGlobalSession().GStarSelect(c, recvpkt)
}
func (ph *PacketHandler) Handle_PlayerMove(c net.Conn, json string) {

	//recvpkt := utils.JsonStrToStruct[pkt.C_GStarSelect](json)
	//GetGlobalSession().GStarSelect(c, recvpkt)
}
