//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UNUserNotificationCenter;

@interface TPSDUserNotification : NSObject
{
    UNUserNotificationCenter *_userNotificationCenter;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010000a808
- (void).cxx_destruct;	// IMP=0x000000010000b3c4
- (id)notificationSettings;	// IMP=0x000000010000b3b4
- (void)showNotificationWithTipDictionary:(id)arg1 trackingIdentifier:(id)arg2 allowExtension:(_Bool)arg3 alwaysShowCollectionThumbnail:(_Bool)arg4;	// IMP=0x000000010000aac0
- (void)clearNotifications;	// IMP=0x000000010000aa40
- (void)remove;	// IMP=0x000000010000a9c0
- (id)init;	// IMP=0x000000010000a874

@end
