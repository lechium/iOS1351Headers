//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSQuickSwitchHelper : NSObject
{
    _Bool _isQuickSwitchingToAnotherDevice;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _isQuickSwitchingMutex;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010012e774
- (void)_resetCommunicationStateBeforeQuickSwitchDeactivatePairedDevices:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010012fab0
- (void)resetCommunicationStateBeforeQuickSwitchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010012fa40
- (void)initiateQuickSwitchToDeviceWithCBUUID:(id)arg1 force:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010012ec30
- (void)_setIsQuickSwitchingToAnotherDevice:(_Bool)arg1;	// IMP=0x000000010012eac4
- (_Bool)isQuickSwitchingToAnotherDevice;	// IMP=0x000000010012ea58
- (void)dealloc;	// IMP=0x000000010012e9f4
- (id)init;	// IMP=0x000000010012e93c

@end
