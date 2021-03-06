//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"
#import "WLKNotificationCenterDelegate-Protocol.h"

@class AMSMetrics, AMSPushHandler, APSConnection, NSString, WLDMercuryPushHandler, WLKNotificationCenter;

__attribute__((visibility("hidden")))
@interface WLDPushNotificationController : NSObject <APSConnectionDelegate, WLKNotificationCenterDelegate>
{
    APSConnection *_connection;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
    _Bool _notificationsEnabled;	// 24 = 0x18
    AMSMetrics *_metricsController;	// 32 = 0x20
    WLKNotificationCenter *_notifCenter;	// 40 = 0x28
    AMSPushHandler *_amsPushHandler;	// 48 = 0x30
    WLDMercuryPushHandler *_mercuryPushHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100016ba0
- (id)_portNameForEnvironmentName:(id)arg1;	// IMP=0x0000000100016af4
- (void)_loadURLBagWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016608
- (void)_postNotificationWithPayload:(id)arg1;	// IMP=0x0000000100015188
- (void)_reportMercuryMetrics:(id)arg1;	// IMP=0x0000000100014dc0
- (void)_reportBulletinMetrics:(id)arg1;	// IMP=0x00000001000149b8
- (void)_augmentCustomEventInfo:(id)arg1;	// IMP=0x000000010001455c
- (long long)_actionTypeForNotification:(id)arg1;	// IMP=0x00000001000144f4
- (void)setNotificationsEnabled:(_Bool)arg1;	// IMP=0x0000000100014380
- (void)handleAction:(id)arg1;	// IMP=0x0000000100014290
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000001000137ac
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000100013654
@property(readonly, nonatomic) AMSMetrics *metricsController;
- (void)dealloc;	// IMP=0x0000000100013558
- (id)init;	// IMP=0x0000000100012fec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

