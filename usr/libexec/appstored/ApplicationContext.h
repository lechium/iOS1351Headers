//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ApplicationProxy;

@interface ApplicationContext : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    ApplicationProxy *_application;	// 16 = 0x10
}

+ (void)_recordAttemptToLaunchApplication:(id)arg1;	// IMP=0x00000001002968f4
+ (_Bool)_hasRecentlyAttemptedToLaunchApplication:(id)arg1;	// IMP=0x00000001002967ec
- (void).cxx_destruct;	// IMP=0x0000000100296b28
- (void)launchApplicationWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001002967e8
@property(readonly, copy, nonatomic) ApplicationProxy *application; // @synthesize application=_application;
- (id)initWithApplicationProxy:(id)arg1;	// IMP=0x00000001002966dc

@end
