//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ESALocalSettings : NSObject
{
}

- (void)reset;	// IMP=0x0000000100006b40
@property(nonatomic) int alertType;
- (void)notificationSnoozed;	// IMP=0x000000010000697c
@property(readonly, nonatomic) _Bool shouldAllowSnooze;
@property(nonatomic, getter=isNotificationDisabled) _Bool notificationDisabled;

@end
