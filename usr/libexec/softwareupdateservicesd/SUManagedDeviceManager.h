//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SUManagedDeviceUpdateDelay;
@protocol SUManagedDeviceManagerDelegate;

@interface SUManagedDeviceManager : NSObject
{
    SUManagedDeviceUpdateDelay *mdmDelay;	// 8 = 0x8
    id <SUManagedDeviceManagerDelegate> _delegate;	// 16 = 0x10
    NSString *_assetAudience;	// 24 = 0x18
    int _notifyToken;	// 32 = 0x20
    SUManagedDeviceUpdateDelay *_mdmDelay;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100009920
@property(nonatomic) id <SUManagedDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SUManagedDeviceUpdateDelay *mdmDelay; // @synthesize mdmDelay=_mdmDelay;
- (_Bool)isDelayed;	// IMP=0x000000010000a18c
- (id)delayedStartDate;	// IMP=0x000000010000a17c
- (_Bool)shouldDelayUpdate:(id)arg1;	// IMP=0x0000000100009f20
- (void)startDelayWindow:(id)arg1;	// IMP=0x0000000100009df0
- (void)refreshDelayedState;	// IMP=0x0000000100009bd8
- (void)refreshAssetAudience;	// IMP=0x0000000100009b9c
- (void)setAssetAudience:(id)arg1;	// IMP=0x0000000100009b14
- (void)profileChanged;	// IMP=0x0000000100009a48
- (void)unregisterProfileChangeListener;	// IMP=0x0000000100009a38
- (void)registerProfileChangeListener;	// IMP=0x0000000100009984
- (void)dealloc;	// IMP=0x00000001000098bc
- (id)init;	// IMP=0x00000001000097f4

@end
