//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CRVehicleAccessoryAlert.h"

@interface CROutstandingWirelessVehicleApprovalAlert : CRVehicleAccessoryAlert
{
    _Bool _shouldEnableWiFi;	// 16 = 0x10
}

@property(nonatomic) _Bool shouldEnableWiFi; // @synthesize shouldEnableWiFi=_shouldEnableWiFi;
- (_Bool)presentAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022a98
- (id)alertDeclinedAnalyticsKey;	// IMP=0x0000000100022a88
- (id)alertAcceptedAnalyticsKey;	// IMP=0x0000000100022a78
- (id)alertDeclineButtonTitle;	// IMP=0x0000000100022a6c
- (id)alertAcceptButtonTitle;	// IMP=0x00000001000229f4
- (id)alertMessage;	// IMP=0x00000001000229e8
- (id)alertTitle;	// IMP=0x0000000100022910

@end
