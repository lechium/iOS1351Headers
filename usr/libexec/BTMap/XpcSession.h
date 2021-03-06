//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BTXpcSession.h"

#import "MapHandlerDelegate-Protocol.h"

@class MapHandler, NSString;

@interface XpcSession : BTXpcSession <MapHandlerDelegate>
{
    MapHandler *_mapHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100005dc0
@property(retain, nonatomic) MapHandler *mapHandler; // @synthesize mapHandler=_mapHandler;
- (void)dealloc;	// IMP=0x0000000100005ce8
- (void)registerForIMCoreNotifications;	// IMP=0x0000000100005b4c
- (id)serializeIMMessageNotification:(id)arg1;	// IMP=0x0000000100005278
- (id)serializeIMSPIMessage:(id)arg1;	// IMP=0x0000000100004bf0
- (void)getImCoreSeedMessages:(id)arg1;	// IMP=0x000000010000491c
- (void)sendTextMessage:(id)arg1;	// IMP=0x00000001000042ec
- (void)markMessageAsRead:(id)arg1;	// IMP=0x00000001000041b4
- (void)messageSentNotification:(id)arg1;	// IMP=0x0000000100003f18
- (void)messageReceivedNotification:(id)arg1;	// IMP=0x0000000100003d08
- (void)sendReplyToMsg:(id)arg1 status:(unsigned char)arg2 args:(id)arg3;	// IMP=0x0000000100003c3c
- (void)sendMsg:(id)arg1 args:(id)arg2;	// IMP=0x0000000100003b58
- (void)handleMsg:(id)arg1;	// IMP=0x0000000100003a88
- (id)deriveSubject:(id)arg1;	// IMP=0x0000000100003858
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000037d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

