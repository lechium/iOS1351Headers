//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NFFieldNotification, NFHostCardEmulationDeviceHandle, NSArray, NSString;

@protocol NFDriverWrapperDelegate <NSObject>
- (void)handleReaderBurnoutCleared;
- (void)handleReaderBurnoutTimer;
- (void)handleRemoteTagsDetected:(NSArray *)arg1;
- (void)handleSecureElementRemoved:(int)arg1 withReason:(unsigned int)arg2;
- (void)handleSecureElementEndOfOperation;
- (void)handleHostCardReaderDetected:(NFHostCardEmulationDeviceHandle *)arg1;
- (void)handleSelectEvent:(NSString *)arg1;
- (void)handleFieldReset;
- (void)handleFieldNotification:(NFFieldNotification *)arg1;
- (void)handleFieldChanged:(_Bool)arg1;
- (void)handleSecureElementEnteredRestrictedModeExit:(int)arg1;
- (void)handleSecureElementEnteredRestrictedMode:(int)arg1;
- (void)handleStackLoad;
- (void)handleStackUnload;
- (void)handleHardwareReset:(NSString *)arg1;
- (void)handleRestartDiscovery;
@end

