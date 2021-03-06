//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSString;
@protocol OS_dispatch_queue;

@interface ADFMIPListener : NSObject <APSConnectionDelegate>
{
    APSConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedListener;	// IMP=0x0000000100206948
- (void).cxx_destruct;	// IMP=0x0000000100206c50
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0000000100206b54
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000100206b14
- (void)startListening;	// IMP=0x0000000100206a5c
- (id)init;	// IMP=0x00000001002069b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

