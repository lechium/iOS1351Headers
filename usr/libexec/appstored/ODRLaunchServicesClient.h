//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ODRLaunchServicesProtocol-Protocol.h"

@class NSString;

@interface ODRLaunchServicesClient : NSObject <ODRLaunchServicesProtocol>
{
}

- (void)bytesUsedForApplicationWithBundleID:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010015dd0c
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010015dbb8
- (id)interface;	// IMP=0x000000010015db9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
