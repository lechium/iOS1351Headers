//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FMFServerUserNotificationManager : NSObject
{
    NSMutableDictionary *_activeUserNotifications;	// 8 = 0x8
    NSMutableDictionary *_activeCFNotificationsByCategory;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010003fc50
- (void).cxx_destruct;	// IMP=0x0000000100040a80
@property(retain, nonatomic) NSMutableDictionary *activeCFNotificationsByCategory; // @synthesize activeCFNotificationsByCategory=_activeCFNotificationsByCategory;
@property(retain, nonatomic) NSMutableDictionary *activeUserNotifications; // @synthesize activeUserNotifications=_activeUserNotifications;
- (id)_xpcTransactionNameFor:(id)arg1;	// IMP=0x0000000100040a20
- (void)activateNotification:(id)arg1;	// IMP=0x000000010003ff30
- (void)dealloc;	// IMP=0x000000010003fee0
- (id)initSingleton;	// IMP=0x000000010003fdc0
- (id)init;	// IMP=0x000000010003fd68

@end
