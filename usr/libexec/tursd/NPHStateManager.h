//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NPHStateManagerDelegate;

@interface NPHStateManager : NSObject
{
    id <NPHStateManagerDelegate> _delegate;	// 8 = 0x8
}

+ (_Bool)_isInNanoPhoneApp;	// IMP=0x000000010000289c
+ (void)initializeSharedCallCenter;	// IMP=0x00000001000025b8
+ (void)clearSharedCallCenter;	// IMP=0x0000000100002444
+ (id)sharedCallCenter;	// IMP=0x00000001000023f8
+ (id)currentCallConfigurationWithSource:(id)arg1;	// IMP=0x000000010000228c
- (void).cxx_destruct;	// IMP=0x0000000100002970
@property(readonly, nonatomic) __weak id <NPHStateManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleStateChanged:(id)arg1;	// IMP=0x000000010000270c
- (void)dealloc;	// IMP=0x0000000100002214
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100001e40
- (id)init;	// IMP=0x0000000100001e30

@end

