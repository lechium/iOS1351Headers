/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/libCommCenterBase.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct object {
	dispatch_object_s fObj;
} object;

typedef struct queue {
	object fObj;
} queue;

typedef struct OSSharedRef<os_log_s> {
	os_log_s fRef;
} OSSharedRef<os_log_s>;

typedef struct OsLogContext {
	char* domain;
	OSSharedRef<os_log_s> handle;
} OsLogContext;
