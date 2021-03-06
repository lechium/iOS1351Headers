//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CTEmergencyMode, CTXPCServiceSubscriptionContext;

@protocol CoreTelephonyClientEmergencyDelegateInternal <NSObject>

@optional
- (void)normalEmergencyModeChanged:(CTXPCServiceSubscriptionContext *)arg1 mode:(CTEmergencyMode *)arg2;
- (void)emergencyModeChanged:(CTXPCServiceSubscriptionContext *)arg1 mode:(CTEmergencyMode *)arg2;
@end

