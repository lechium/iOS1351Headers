//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface XPCNotificationCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableArray *_notificationClients;	// 16 = 0x10
    NSMutableDictionary *_notificationSources;	// 24 = 0x18
}

+ (id)defaultCenter;	// IMP=0x0000000100294240
- (void).cxx_destruct;	// IMP=0x0000000100294a8c
- (void)unregisterNotificationClient:(id)arg1;	// IMP=0x00000001002949f4
- (void)registerNotificationSource:(id)arg1;	// IMP=0x0000000100294910
- (void)registerNotificationClient:(id)arg1;	// IMP=0x000000010029477c
- (void)postProgress:(id)arg1;	// IMP=0x000000010029458c
- (void)postNotification:(id)arg1;	// IMP=0x000000010029439c
- (id)init;	// IMP=0x00000001002942dc

@end
