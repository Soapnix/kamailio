/**
 * Copyright (C) 2016 Daniel-Constantin Mierla (asipto.com)
 *
 * This file is part of Kamailio, a free SIP server.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*!
 * \file
 * \brief Kamailio topos ::
 * \ingroup topos
 * Module: \ref topos
 */

#ifndef _TOPOS_STORAGE_H_
#define _TOPOS_STORAGE_H_

#include "../../parser/msg_parser.h"

#define TPS_DATA_SIZE	4096
typedef struct tps_data {
	char cbuf[TPS_DATA_SIZE];
	char *cp;
	str a_uuid;
	str b_uuid;
	str a_callid;
	str a_rr;
	str b_rr;
	str a_contact;
	str b_contact;
} tps_data_t;

int tps_storage_dialog_find(sip_msg_t *msg, tps_data_t *td);
int tps_storage_dialog_save(sip_msg_t *msg, tps_data_t *td);
int tps_storage_dialog_rm(sip_msg_t *msg, tps_data_t *td);

int tps_storage_branch_find(sip_msg_t *msg, tps_data_t *td);
int tps_storage_branch_save(sip_msg_t *msg, tps_data_t *td);
int tps_storage_branch_rm(sip_msg_t *msg, tps_data_t *td);

#endif