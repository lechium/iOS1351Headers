//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSDSessionAvailabilityCheck-Protocol.h"

@interface IDSDSessionDefaultAvailabilityCheck : NSObject <IDSDSessionAvailabilityCheck>
{
}

- (void)checkLocalConnectivityForSession:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001004b959c
- (void)checkNetworkAvailabilityForSession:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001004b7ff8
- (long long)networkCheckOverrideBehavior;	// IMP=0x00000001004b7ebc

@end

