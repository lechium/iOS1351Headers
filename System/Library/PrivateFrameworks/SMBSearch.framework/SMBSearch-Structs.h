/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct network_uuid {
	unsigned u1;
	unsigned short u2;
	unsigned short u3;
	unsigned char u4[8];
} network_uuid;

typedef struct {
	unsigned msgid;
	unsigned status;
	unsigned checksum;
	unsigned reserved2;
} SCD_Struct_ws1;

typedef struct timespec {
	long long tv_sec;
	long long tv_nsec;
} timespec;
