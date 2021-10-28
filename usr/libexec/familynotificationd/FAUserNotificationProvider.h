//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSLock, NSString, UNUserNotificationCenter;
@protocol FAUserNotificationProviderDelegate;

@interface FAUserNotificationProvider : NSObject <UNUserNotificationCenterDelegate>
{
    id <FAUserNotificationProviderDelegate> _delegate;	// 8 = 0x8
    UNUserNotificationCenter *_notificationCenter;	// 16 = 0x10
    NSLock *_categoryLock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100006220
@property(retain, nonatomic) NSLock *categoryLock; // @synthesize categoryLock=_categoryLock;
@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property __weak id <FAUserNotificationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateOfAction:(id)arg1 forNote:(id)arg2;	// IMP=0x000000010000602c
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005dcc
- (id)_actionsForNotification:(id)arg1;	// IMP=0x0000000100005c30
- (_Bool)customCategoryForNotification:(id)arg1;	// IMP=0x0000000100005ba8
- (void)_addCategoryForNotification:(id)arg1;	// IMP=0x0000000100005ac0
- (id)_customCategoryIdentifierForNotification:(id)arg1;	// IMP=0x0000000100005a40
- (id)_categoryForNotification:(id)arg1;	// IMP=0x0000000100005974
- (void)deliveredNotifications:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005694
- (void)tearDownNotificationWithIdentifier:(id)arg1;	// IMP=0x0000000100005534
- (id)_notificationContent:(id)arg1;	// IMP=0x000000010000514c
- (void)postNotification:(id)arg1;	// IMP=0x0000000100004f78
- (id)_defaultNotificationCategories;	// IMP=0x0000000100004ee4
- (id)init;	// IMP=0x0000000100004de8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
