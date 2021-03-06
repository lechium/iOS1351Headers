//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDMessage;

@interface FMDMessageMgr_iOS : NSObject
{
    FMDMessage *_activeMessage;	// 8 = 0x8
    struct __CFUserNotification *_cfNotification;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010000da9c
- (void).cxx_destruct;	// IMP=0x000000010000f4a8
@property(retain, nonatomic) struct __CFUserNotification *cfNotification; // @synthesize cfNotification=_cfNotification;
@property(retain, nonatomic) FMDMessage *activeMessage; // @synthesize activeMessage=_activeMessage;
- (id)_vibrationPattern;	// IMP=0x000000010000ee3c
- (id)_fillVibrationPattern:(id)arg1 toDuration:(double)arg2;	// IMP=0x000000010000ece0
- (id)_xpcTransactionNameFor:(id)arg1;	// IMP=0x000000010000eca8
- (void)stopSound;	// IMP=0x000000010000ebb8
- (void)_playSoundFor:(id)arg1;	// IMP=0x000000010000ea08
- (void)stopAllSounds;	// IMP=0x000000010000e9fc
- (void)activateMessage:(id)arg1;	// IMP=0x000000010000dd18
- (void)dealloc;	// IMP=0x000000010000dc94
- (id)initSingleton;	// IMP=0x000000010000dc0c
- (id)init;	// IMP=0x000000010000dbb4

@end

