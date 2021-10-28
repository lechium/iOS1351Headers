//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSData, NSMutableDictionary, NSMutableSet, NSString;

@interface STNotificationManager : NSObject <APSConnectionDelegate>
{
    NSMutableDictionary *_delegates;	// 8 = 0x8
    NSMutableSet *_topics;	// 16 = 0x10
    APSConnection *_connection;	// 24 = 0x18
    NSData *_pushToken;	// 32 = 0x20
}

+ (id)sharedNotificationManager;	// IMP=0x000000010002823c
- (void).cxx_destruct;	// IMP=0x0000000100028c5c
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(retain, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableSet *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) NSMutableDictionary *delegates; // @synthesize delegates=_delegates;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00000001000289a8
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00000001000286e0
- (void)_connectToAPNS;	// IMP=0x00000001000284f0
- (void)_updateAPNSConnection;	// IMP=0x0000000100028448
- (void)registerWithTopic:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000100028328
- (id)init;	// IMP=0x00000001000282a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
