//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HFDiscoveredAccessory, HFSetupAccessoryResult, HMAccessorySetupCompletedInfo, HSSetupConfigurator, NSError, NSSet, UIViewController;
@protocol HSSetupStep;

@protocol HSSetupStepDelegate <NSObject>
- (void)retryPairingForSetupStep:(id <HSSetupStep>)arg1;
- (void)clearSetupResultForSetupStep:(id <HSSetupStep>)arg1;
- (void)setupStep:(id <HSSetupStep>)arg1 handleSetupResult:(HFSetupAccessoryResult *)arg2;
- (void)setupStep:(id <HSSetupStep>)arg1 handleUpdateForConfigurator:(HSSetupConfigurator *)arg2;
- (void)setupStep:(id <HSSetupStep>)arg1 didPairWithAccessories:(NSSet *)arg2 completedInfo:(HMAccessorySetupCompletedInfo *)arg3;
- (void)setupStep:(id <HSSetupStep>)arg1 didSelectDiscoveredAccessory:(HFDiscoveredAccessory *)arg2;
- (void)setupStep:(id <HSSetupStep>)arg1 didFailWithError:(NSError *)arg2;
- (void)setupStepDidFinish:(id <HSSetupStep>)arg1;
- (void)setupStepDidCancel:(id <HSSetupStep>)arg1;
- (void)setupStep:(id <HSSetupStep>)arg1 willAppearWithViewController:(UIViewController *)arg2;
@end
