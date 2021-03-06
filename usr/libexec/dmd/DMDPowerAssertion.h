//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UMUserSwitchBlockingTask;

@interface DMDPowerAssertion : NSObject
{
    _Bool _isParked;	// 8 = 0x8
    NSString *_operation;	// 16 = 0x10
    UMUserSwitchBlockingTask *_blockingTask;	// 24 = 0x18
}

+ (id)assertionForOperation:(id)arg1;	// IMP=0x00000001000718f8
- (void).cxx_destruct;	// IMP=0x00000001000720b4
@property(retain, nonatomic) UMUserSwitchBlockingTask *blockingTask; // @synthesize blockingTask=_blockingTask;
@property(retain, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(nonatomic) _Bool isParked; // @synthesize isParked=_isParked;
- (void)_release;	// IMP=0x0000000100071f28
- (void)_retain;	// IMP=0x0000000100071d38
- (void)unpark;	// IMP=0x0000000100071c38
- (void)park;	// IMP=0x0000000100071b38
- (void)stayAliveThroughHereAtLeast;	// IMP=0x0000000100071b34
- (void)dealloc;	// IMP=0x0000000100071a8c
- (id)initForOperation:(id)arg1;	// IMP=0x00000001000719a0

@end

