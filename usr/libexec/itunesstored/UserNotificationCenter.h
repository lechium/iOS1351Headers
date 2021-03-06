//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface UserNotificationCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableArray *_userNotifications;	// 16 = 0x10
}

+ (id)defaultCenter;	// IMP=0x0000000100130e20
- (void)_showPreparedNotification:(id)arg1;	// IMP=0x0000000100131b04
- (void)_finishUserNotification:(struct __CFUserNotification *)arg1 withResponseFlags:(unsigned long long)arg2;	// IMP=0x00000001001318c8
- (void)updateUserNotification:(id)arg1 withUserNotification:(id)arg2;	// IMP=0x0000000100131860
- (void)updateUserNotification:(id)arg1 withDictionary:(struct __CFDictionary *)arg2 options:(unsigned long long)arg3;	// IMP=0x00000001001317ac
- (void)updateUserNotification:(id)arg1 withDialog:(id)arg2;	// IMP=0x0000000100131754
- (id)showUserNotification:(struct __CFDictionary *)arg1 withOptions:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010013157c
- (id)showUserNotification:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100131514
- (void)showPreparedNotification:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001313f0
- (id)showDialog:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010013138c
- (id)prepareUserNotificationWithDialog:(id)arg1;	// IMP=0x00000001001312f8
- (void)cancelUserNotifications:(id)arg1;	// IMP=0x0000000100130f30
- (void)cancelUserNotification:(id)arg1;	// IMP=0x0000000100130ecc
- (void)dealloc;	// IMP=0x0000000100130dd0
- (id)init;	// IMP=0x0000000100130d64

@end

