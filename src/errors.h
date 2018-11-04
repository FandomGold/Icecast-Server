/* Icecast
 *
 * This program is distributed under the GNU General Public License, version 2.
 * A copy of this license is included with this source.
 *
 * Copyright 2018,      Philipp "ph3-der-loewe" Schafft <lion@lion.leolix.org>
 */

#ifndef __ERRORS_H__
#define __ERRORS_H__

typedef enum {
    ICECAST_ERROR_ADMIN_DEST_NOT_RUNNING,
    ICECAST_ERROR_ADMIN_METADAT_BADCALL,
    ICECAST_ERROR_ADMIN_METADAT_NO_SUCH_ACTION,
    ICECAST_ERROR_ADMIN_MISSING_PARAMETER,
    ICECAST_ERROR_ADMIN_missing_parameter,                      /* what is this? */
    ICECAST_ERROR_ADMIN_MOUNT_NOT_ACCEPT_URL_UPDATES,
    ICECAST_ERROR_ADMIN_NO_SUCH_DESTINATION,
    ICECAST_ERROR_ADMIN_ROLEMGN_ADD_NOSYS,
    ICECAST_ERROR_ADMIN_ROLEMGN_DELETE_NOSYS,
    ICECAST_ERROR_ADMIN_ROLEMGN_ROLE_NOT_FOUND,
    ICECAST_ERROR_ADMIN_SOURCE_DOES_NOT_EXIST,
    ICECAST_ERROR_ADMIN_SOURCE_IS_NOT_AVAILABLE,
    ICECAST_ERROR_ADMIN_SUPPLIED_MOUNTPOINTS_ARE_IDENTICAL,
    ICECAST_ERROR_ADMIN_UNRECOGNISED_COMMAND,
    ICECAST_ERROR_AUTH_BUSY,
    ICECAST_ERROR_CON_CONTENT_TYPE_NOSYS,
    ICECAST_ERROR_CON_INTERNAL_FORMAT_ALLOC_ERROR,
    ICECAST_ERROR_CON_MISSING_PASS_PARAMETER,
    ICECAST_ERROR_CON_MOUNT_IN_USE,
    ICECAST_ERROR_CON_MOUNTPOINT_NOT_STARTING_WITH_SLASH,
    ICECAST_ERROR_CON_NO_CONTENT_TYPE_GIVEN,
    ICECAST_ERROR_CON_PER_CRED_CLIENT_LIMIT,
    ICECAST_ERROR_CON_rejecting_client_for_whatever_reason,     /* ??? */
    ICECAST_ERROR_CON_SOURCE_CLIENT_LIMIT,
    ICECAST_ERROR_CON_UNIMPLEMENTED,
    ICECAST_ERROR_CON_UNKNOWN_REQUEST,
    ICECAST_ERROR_CON_UPGRADE_ERROR,
    ICECAST_ERROR_FSERV_FILE_NOT_FOUND,
    ICECAST_ERROR_FSERV_FILE_NOT_READABLE,
    ICECAST_ERROR_FSERV_REQUEST_RANGE_NOT_SATISFIABLE,
    ICECAST_ERROR_GEN_BUFFER_REALLOC,
    ICECAST_ERROR_GEN_CLIENT_LIMIT,
    ICECAST_ERROR_GEN_CLIENT_NEEDS_TO_AUTHENTICATE,
    ICECAST_ERROR_GEN_HEADER_GEN_FAILED,
    ICECAST_ERROR_GEN_MEMORY_EXHAUSTED,
    ICECAST_ERROR_SOURCE_MOUNT_UNAVAILABLE,
    ICECAST_ERROR_SOURCE_STREAM_PREPARATION_ERROR,
    ICECAST_ERROR_XSLT_PARSE,
    ICECAST_ERROR_XSLT_problem,
    ICECAST_ERROR_RECURSIVE_ERROR
} icecast_error_id_t;

struct icecast_error_tag {
    const icecast_error_id_t id;
    const int http_status;
    const char *uuid;
    const char *message;
};

typedef struct icecast_error_tag icecast_error_t;

const icecast_error_t * error_get_by_id(icecast_error_id_t id);
const icecast_error_t * error_get_by_uuid(const char *uuid);

#endif  /* __ERRORS_H__ */