//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EFLoggable-Protocol.h"

@class NSString;

@interface MFMarkLibraryPurgeableActivityManager : NSObject <EFLoggable>
{
}

+ (void)_unregisterXPCActivity;	// IMP=0x0000000100097ab8
+ (void)_registerLibraryPurgeableUpgrader;	// IMP=0x000000010009767c
+ (void)scheduleIfNeeded;	// IMP=0x000000010009758c
+ (id)log;	// IMP=0x000000010009749c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

