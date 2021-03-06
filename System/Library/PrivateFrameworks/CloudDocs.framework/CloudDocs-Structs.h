/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned bounceNo : 1;
} SCD_Struct_BR1;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct {
	unsigned downloadStatus : 2;
	unsigned uploadStatus : 2;
	unsigned itemStatus : 2;
	unsigned conflicted : 1;
	unsigned preCrashMarker : 1;
	unsigned isUploadActive : 1;
	unsigned isDownloadActive : 1;
	unsigned isDownloadRequested : 1;
	unsigned shareOptions : 3;
	unsigned isHiddenExt : 1;
	unsigned isBRAlias : 1;
	unsigned isTrashed : 1;
	unsigned itemMode : 3;
	unsigned fromReadOnlyDB : 1;
	unsigned isSharedFolderSubItem : 1;
	unsigned possiblyContainsSharedToMeItem : 1;
	unsigned possiblyContainsSharedByMeItem : 1;
	unsigned editedSinceShared : 1;
	unsigned char BRQueryItemKind;
	unsigned char kind;
} SCD_Struct_BR3;

typedef union {
	SCD_Struct_BR3 field1;
	unsigned long long value;
} SCD_Union_BR4;

typedef struct __CFBundle* CFBundleRef;

typedef struct {
	unsigned long long first_max_num;
	unsigned long long first_max_ms;
	unsigned long long progress_max_num;
	unsigned long long progress_max_ms;
	unsigned long long update_max_num;
	unsigned long long update_max_ms;
} SCD_Struct_BR6;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	long long field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_BR8;

typedef const struct __CFString* CFStringRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_BR10;

typedef struct sqlite3_value* sqlite3_valueRef;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

