/**
 * The Forgotten Server - a free and open-source MMORPG server emulator
 * Copyright (C) 2015  Mark Samman <mark.samman@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef FS_IOLOGINDATA_H_28B0440BEC594654AC0F4E1A5E42B2EF
#define FS_IOLOGINDATA_H_28B0440BEC594654AC0F4E1A5E42B2EF

#include "account.h"
#include "database.h"

class IOLoginData
{
	public:
		static Account loadAccount(uint32_t accno);
		static bool saveAccount(const Account& acc);

		static bool loginserverAuthentication(const std::string& name, const std::string& password, Account& account);

		static AccountType_t getAccountType(uint32_t accountId);
		static void setAccountType(uint32_t accountId, AccountType_t accountType);

		static void addPremiumDays(uint32_t accountId, int32_t addDays);
		static void removePremiumDays(uint32_t accountId, int32_t removeDays);
};

#endif
