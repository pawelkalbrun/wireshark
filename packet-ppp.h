/* packet-ppp.h
 *
 * $Id: packet-ppp.h,v 1.4 2000/08/11 13:34:03 deniel Exp $
 *
 * Ethereal - Network traffic analyzer
 * By Gerald Combs <gerald@zing.org>
 * Copyright 1998 Gerald Combs
 *
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef __PACKET_PPP_H__
#define __PACKET_PPP_H__

void capture_ppp(const u_char *, int, packet_counts *);
void dissect_ppp(tvbuff_t *, packet_info *, proto_tree *);
void dissect_payload_ppp(const u_char *, int, frame_data *, proto_tree *);

#endif
