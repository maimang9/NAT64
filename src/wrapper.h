/*
 *  WrapSix
 *  Copyright (C) 2008-2010  Michal Zima <xhire@mujmalysvet.cz>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef WRAPPER_H
#define WRAPPER_H

/* MAC address structure */
struct s_mac_addr {
	unsigned char		a;
	unsigned char		b;
	unsigned char		c;
	unsigned char		d;
	unsigned char		e;
	unsigned char		f;
} __attribute__ ((__packed__));

/* Ethernet header structure */
struct s_ethernet {
	struct s_mac_addr	dest;	/* 48 b; destination host (MAC) address */
	struct s_mac_addr	src;	/* 48 b; source host (MAC) address */
	unsigned short		type;	/* 16 b; IP/ARP/RARP/... */
} __attribute__ ((__packed__));

extern struct s_ipv6_addr	ndp_multicast_addr;
extern struct s_ipv6_addr	wrapsix_ipv6_prefix;

#endif /* WRAPPER_H */