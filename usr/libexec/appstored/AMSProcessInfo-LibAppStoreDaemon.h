//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSProcessInfo.h>

@interface AMSProcessInfo (LibAppStoreDaemon)
+ (struct __CFDictionary *)_copyInfoDictionaryForExecutablePath:(id)arg1;	// IMP=0x000000010018e3cc
+ (id)_copyExecutablePathForPID:(int)arg1;	// IMP=0x000000010018e330
+ (struct __CFBundle *)_copyBundleForExecutablePath:(id)arg1;	// IMP=0x000000010018e2a8
+ (id)lib_newProcessInfoForConnection:(id)arg1;	// IMP=0x000000010018e01c
+ (id)lib_daemonProcessInfo;	// IMP=0x000000010018df9c
+ (id)lib_appProcessInfo;	// IMP=0x000000010018df1c
+ (id)lib_agentProcessInfo;	// IMP=0x000000010018de9c
@end
