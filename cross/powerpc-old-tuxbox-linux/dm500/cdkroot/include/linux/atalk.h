#ifndef __LINUX_ATALK_H__
#define __LINUX_ATALK_H__
/*
 * AppleTalk networking structures
 *
 * The following are directly referenced from the University Of Michigan
 * netatalk for compatibility reasons.
 */
#define ATPORT_FIRST	1
#define ATPORT_RESERVED	128
#define ATPORT_LAST	254		/* 254 is only legal on localtalk */ 
#define ATADDR_ANYNET	(__u16)0
#define ATADDR_ANYNODE	(__u8)0
#define ATADDR_ANYPORT  (__u8)0
#define ATADDR_BCAST	(__u8)255
#define DDP_MAXSZ	587
#define DDP_MAXHOPS     15		/* 4 bits of hop counter */

#define SIOCATALKDIFADDR       (SIOCPROTOPRIVATE + 0)

struct atalk_addr {
	__u16	s_net;
	__u8	s_node;
};

struct sockaddr_at {
	sa_family_t	  sat_family;
	__u8		  sat_port;
	struct atalk_addr sat_addr;
	char		  sat_zero[8];
};

struct atalk_netrange {
	__u8	nr_phase;
	__u16	nr_firstnet;
	__u16	nr_lastnet;
};

struct atalk_route {
	struct net_device  *dev;
	struct atalk_addr  target;
	struct atalk_addr  gateway;
	int		   flags;
	struct atalk_route *next;
};

/**
 *	struct atalk_iface - AppleTalk Interface
 *	@dev - Network device associated with this interface
 *	@address - Our address
 *	@status - What are we doing?
 *	@nets - Associated direct netrange
 *	@next - next element in the list of interfaces
 */
struct atalk_iface {
	struct net_device	*dev;
	struct atalk_addr	address;
	int			status;
#define ATIF_PROBE	1		/* Probing for an address */
#define ATIF_PROBE_FAIL	2		/* Probe collided */
	struct atalk_netrange	nets;
	struct atalk_iface	*next;
};
	
struct atalk_sock {
	unsigned short	dest_net;
	unsigned short	src_net;
	unsigned char	dest_node;
	unsigned char	src_node;
	unsigned char	dest_port;
	unsigned char	src_port;
};

#endif /* __LINUX_ATALK_H__ */
