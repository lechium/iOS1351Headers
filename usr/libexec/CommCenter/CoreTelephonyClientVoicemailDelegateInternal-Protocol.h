//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CTVoicemailInfoType, CTXPCServiceSubscriptionContext;

@protocol CoreTelephonyClientVoicemailDelegateInternal <NSObject>

@optional
- (void)voicemailInfoAvailableNotification:(CTXPCServiceSubscriptionContext *)arg1 voicemailInfo:(CTVoicemailInfoType *)arg2;
- (void)voicemailDatabaseReset:(CTXPCServiceSubscriptionContext *)arg1;
@end

