//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MapsDefaults : NSObject
{
    int _unlockNotifyToken;	// 8 = 0x8
}

+ (void)synchronize;	// IMP=0x000000010001fce0
+ (void)set:(id)arg1 value:(id)arg2;	// IMP=0x000000010001fc58
+ (id)get:(id)arg1;	// IMP=0x000000010001fbd8
+ (_Bool)unlockedSinceBoot;	// IMP=0x000000010001fbcc
+ (id)sharedInstance;	// IMP=0x000000010001f794
- (void)_synchronize;	// IMP=0x000000010001fb1c
- (void)_set:(id)arg1 value:(id)arg2;	// IMP=0x000000010001fa60
- (id)_get:(id)arg1;	// IMP=0x000000010001f9a8
- (id)init;	// IMP=0x000000010001f800

@end

