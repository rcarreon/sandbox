/* status.h - Status codes
 *	Copyright (C) 2007 Free Software Foundation, Inc.
 *
 * This file is part of GnuPG.
 *
 * GnuPG is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * GnuPG is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GNUPG_COMMON_STATUS_H
#define GNUPG_COMMON_STATUS_H

enum 
  {
    STATUS_ENTER,
    STATUS_LEAVE,
    STATUS_ABORT,

    STATUS_GOODSIG,
    STATUS_BADSIG,
    STATUS_ERRSIG,

    STATUS_BADARMOR,

    STATUS_RSA_OR_IDEA,

    STATUS_TRUST_UNDEFINED,
    STATUS_TRUST_NEVER,
    STATUS_TRUST_MARGINAL,
    STATUS_TRUST_FULLY,
    STATUS_TRUST_ULTIMATE,
  
    STATUS_NEED_PASSPHRASE,
    STATUS_VALIDSIG,
    STATUS_SIG_ID,
    STATUS_ENC_TO,
    STATUS_NODATA,
    STATUS_BAD_PASSPHRASE,
    STATUS_NO_PUBKEY,
    STATUS_NO_SECKEY,
    STATUS_NEED_PASSPHRASE_SYM,
    STATUS_DECRYPTION_INFO,
    STATUS_DECRYPTION_FAILED,
    STATUS_DECRYPTION_OKAY,
    STATUS_MISSING_PASSPHRASE,
    STATUS_GOOD_PASSPHRASE,
    STATUS_GOODMDC,
    STATUS_BADMDC,
    STATUS_ERRMDC,
    STATUS_IMPORTED,
    STATUS_IMPORT_OK,
    STATUS_IMPORT_PROBLEM, 
    STATUS_IMPORT_RES,
    STATUS_IMPORT_CHECK,

    STATUS_FILE_START,
    STATUS_FILE_DONE,
    STATUS_FILE_ERROR,
  
    STATUS_BEGIN_DECRYPTION,
    STATUS_END_DECRYPTION,
    STATUS_BEGIN_ENCRYPTION,
    STATUS_END_ENCRYPTION,
    STATUS_BEGIN_SIGNING,
  
    STATUS_DELETE_PROBLEM,

    STATUS_GET_BOOL,
    STATUS_GET_LINE,
    STATUS_GET_HIDDEN,
    STATUS_GOT_IT,

    STATUS_PROGRESS,
    STATUS_SIG_CREATED,
    STATUS_SESSION_KEY,
    STATUS_NOTATION_NAME,
    STATUS_NOTATION_DATA,
    STATUS_POLICY_URL,
    STATUS_BEGIN_STREAM,
    STATUS_END_STREAM,
    STATUS_KEY_CREATED,
    STATUS_USERID_HINT,
    STATUS_UNEXPECTED,
    STATUS_INV_RECP,
    STATUS_INV_SGNR,
    STATUS_NO_RECP,
    STATUS_NO_SGNR,

    STATUS_ALREADY_SIGNED,
    STATUS_KEYEXPIRED,
    STATUS_KEYREVOKED,
    STATUS_SIGEXPIRED,
    STATUS_EXPSIG,
    STATUS_EXPKEYSIG,

    STATUS_ATTRIBUTE,

    STATUS_REVKEYSIG,

    STATUS_NEWSIG,
    STATUS_SIG_SUBPACKET,

    STATUS_PLAINTEXT,
    STATUS_PLAINTEXT_LENGTH,
    STATUS_KEY_NOT_CREATED,
    STATUS_NEED_PASSPHRASE_PIN,

    STATUS_CARDCTRL,
    STATUS_SC_OP_FAILURE,
    STATUS_SC_OP_SUCCESS,

    STATUS_BACKUP_KEY_CREATED,

    STATUS_PKA_TRUST_BAD,
    STATUS_PKA_TRUST_GOOD,

    STATUS_TRUNCATED,
    STATUS_ERROR,
    STATUS_SUCCESS
};


const char *get_status_string (int code);
const char *get_inv_recpsgnr_code (gpg_error_t err);


#endif /*GNUPG_COMMON_STATUS_H*/
