//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKHIDEventProcessor-Protocol.h"

@class NSMutableDictionary, NSString;

@interface BKGenericGestureHIDEventProcessor : NSObject <BKHIDEventProcessor>
{
    NSMutableDictionary *_pendingDestinationsPerSenderID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000129b4
@property(retain, nonatomic) NSMutableDictionary *pendingDestinationsPerSenderID; // @synthesize pendingDestinationsPerSenderID=_pendingDestinationsPerSenderID;
- (long long)processEvent:(struct __IOHIDEvent *)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x0000000100012448

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
