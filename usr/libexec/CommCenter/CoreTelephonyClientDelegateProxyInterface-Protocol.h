//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CoreTelephonyClientCallDelegateInternal-Protocol.h"
#import "CoreTelephonyClientCapabilitiesDelegateInternal-Protocol.h"
#import "CoreTelephonyClientCarrierBundleDelegateInternal-Protocol.h"
#import "CoreTelephonyClientCarrierServicesDelegateInternal-Protocol.h"
#import "CoreTelephonyClientCellularUsagePolicyDelegateInternal-Protocol.h"
#import "CoreTelephonyClientDataDelegateInternal-Protocol.h"
#import "CoreTelephonyClientDelegateInternal-Protocol.h"
#import "CoreTelephonyClientEmergencyDelegateInternal-Protocol.h"
#import "CoreTelephonyClientPNRDelegateInternal-Protocol.h"
#import "CoreTelephonyClientRegistrationDelegateInternal-Protocol.h"
#import "CoreTelephonyClientSMSDelegateInternal-Protocol.h"
#import "CoreTelephonyClientSubscriberDelegateInternal-Protocol.h"
#import "CoreTelephonyClientSuppServicesDelegateInternal-Protocol.h"
#import "CoreTelephonyClientVoicemailDelegateInternal-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol CoreTelephonyClientDelegateProxyInterface <NSObject, CoreTelephonyClientDelegateInternal, CoreTelephonyClientCellularUsagePolicyDelegateInternal, CoreTelephonyClientRegistrationDelegateInternal, CoreTelephonyClientDataDelegateInternal, CoreTelephonyClientSubscriberDelegateInternal, CoreTelephonyClientEmergencyDelegateInternal, CoreTelephonyClientSMSDelegateInternal, CoreTelephonyClientVoicemailDelegateInternal, CoreTelephonyClientPNRDelegateInternal, CoreTelephonyClientCarrierBundleDelegateInternal, CoreTelephonyClientCapabilitiesDelegateInternal, CoreTelephonyClientSuppServicesDelegateInternal, CoreTelephonyClientCallDelegateInternal, CoreTelephonyClientCarrierServicesDelegateInternal>
- (void)clientDidTriggerFault:(NSString *)arg1;
@end
