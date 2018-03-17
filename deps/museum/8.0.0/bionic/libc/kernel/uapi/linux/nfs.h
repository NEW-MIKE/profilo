/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_LINUX_NFS_H
#define _UAPI_LINUX_NFS_H
#define UAPI_LINUX_NFS_H
#define UAPI_LINUX_NFS_H_
#define _LINUX_NFS_H
#define _LINUX_NFS_H_
#define _UAPI_LINUX_NFS_H_
#include <museum/8.0.0/bionic/libc/linux/types.h>
#define NFS_PROGRAM 100003
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_PORT 2049
#define NFS_MAXDATA 8192
#define NFS_MAXPATHLEN 1024
#define NFS_MAXNAMLEN 255
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_MAXGROUPS 16
#define NFS_FHSIZE 32
#define NFS_COOKIESIZE 4
#define NFS_FIFO_DEV (- 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFSMODE_FMT 0170000
#define NFSMODE_DIR 0040000
#define NFSMODE_CHR 0020000
#define NFSMODE_BLK 0060000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFSMODE_REG 0100000
#define NFSMODE_LNK 0120000
#define NFSMODE_SOCK 0140000
#define NFSMODE_FIFO 0010000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_MNT_PROGRAM 100005
#define NFS_MNT_VERSION 1
#define NFS_MNT3_VERSION 3
#define NFS_PIPE_DIRNAME "nfs"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum nfs_stat {
  NFS_OK = 0,
  NFSERR_PERM = 1,
  NFSERR_NOENT = 2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_IO = 5,
  NFSERR_NXIO = 6,
  NFSERR_EAGAIN = 11,
  NFSERR_ACCES = 13,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_EXIST = 17,
  NFSERR_XDEV = 18,
  NFSERR_NODEV = 19,
  NFSERR_NOTDIR = 20,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_ISDIR = 21,
  NFSERR_INVAL = 22,
  NFSERR_FBIG = 27,
  NFSERR_NOSPC = 28,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_ROFS = 30,
  NFSERR_MLINK = 31,
  NFSERR_OPNOTSUPP = 45,
  NFSERR_NAMETOOLONG = 63,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_NOTEMPTY = 66,
  NFSERR_DQUOT = 69,
  NFSERR_STALE = 70,
  NFSERR_REMOTE = 71,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_WFLUSH = 99,
  NFSERR_BADHANDLE = 10001,
  NFSERR_NOT_SYNC = 10002,
  NFSERR_BAD_COOKIE = 10003,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_NOTSUPP = 10004,
  NFSERR_TOOSMALL = 10005,
  NFSERR_SERVERFAULT = 10006,
  NFSERR_BADTYPE = 10007,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_JUKEBOX = 10008,
  NFSERR_SAME = 10009,
  NFSERR_DENIED = 10010,
  NFSERR_EXPIRED = 10011,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_LOCKED = 10012,
  NFSERR_GRACE = 10013,
  NFSERR_FHEXPIRED = 10014,
  NFSERR_SHARE_DENIED = 10015,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_WRONGSEC = 10016,
  NFSERR_CLID_INUSE = 10017,
  NFSERR_RESOURCE = 10018,
  NFSERR_MOVED = 10019,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_NOFILEHANDLE = 10020,
  NFSERR_MINOR_VERS_MISMATCH = 10021,
  NFSERR_STALE_CLIENTID = 10022,
  NFSERR_STALE_STATEID = 10023,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_OLD_STATEID = 10024,
  NFSERR_BAD_STATEID = 10025,
  NFSERR_BAD_SEQID = 10026,
  NFSERR_NOT_SAME = 10027,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_LOCK_RANGE = 10028,
  NFSERR_SYMLINK = 10029,
  NFSERR_RESTOREFH = 10030,
  NFSERR_LEASE_MOVED = 10031,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_ATTRNOTSUPP = 10032,
  NFSERR_NO_GRACE = 10033,
  NFSERR_RECLAIM_BAD = 10034,
  NFSERR_RECLAIM_CONFLICT = 10035,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_BAD_XDR = 10036,
  NFSERR_LOCKS_HELD = 10037,
  NFSERR_OPENMODE = 10038,
  NFSERR_BADOWNER = 10039,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_BADCHAR = 10040,
  NFSERR_BADNAME = 10041,
  NFSERR_BAD_RANGE = 10042,
  NFSERR_LOCK_NOTSUPP = 10043,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_OP_ILLEGAL = 10044,
  NFSERR_DEADLOCK = 10045,
  NFSERR_FILE_OPEN = 10046,
  NFSERR_ADMIN_REVOKED = 10047,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFSERR_CB_PATH_DOWN = 10048,
};
enum nfs_ftype {
  NFNON = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFREG = 1,
  NFDIR = 2,
  NFBLK = 3,
  NFCHR = 4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFLNK = 5,
  NFSOCK = 6,
  NFBAD = 7,
  NFFIFO = 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif