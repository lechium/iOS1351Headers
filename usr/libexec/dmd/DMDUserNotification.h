//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface DMDUserNotification : NSObject
{
    struct __CFUserNotification *_notificationRef;	// 8 = 0x8
    _Bool _displayWhenLocked;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    NSString *_header;	// 32 = 0x20
    NSString *_message;	// 40 = 0x28
    NSString *_defaultButtonTitle;	// 48 = 0x30
    NSString *_alternateButtonTitle;	// 56 = 0x38
    NSString *_otherButtonTitle;	// 64 = 0x40
    double _timeout;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000831f8
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool displayWhenLocked; // @synthesize displayWhenLocked=_displayWhenLocked;
@property(copy, nonatomic) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
@property(copy, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(copy, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)setNotificationRef:(struct __CFUserNotification *)arg1;	// IMP=0x000000010008311c
- (struct __CFUserNotification *)notificationRef;	// IMP=0x0000000100083114
- (void)dealloc;	// IMP=0x00000001000830c8
- (id)init;	// IMP=0x0000000100083058

@end

