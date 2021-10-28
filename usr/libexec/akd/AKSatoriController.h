//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKClient, AKSatoriReport, DIVerificationSession;

@interface AKSatoriController : NSObject
{
    AKClient *_client;	// 8 = 0x8
    DIVerificationSession *_localVerificationSession;	// 16 = 0x10
    AKSatoriReport *_analyticsReport;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100011ee0
@property(retain, nonatomic) AKSatoriReport *analyticsReport; // @synthesize analyticsReport=_analyticsReport;
- (void)_executeVerificationRequestForRequest:(id)arg1 verificationResult:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011740
- (void)fetchRealUserLikelihoodForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001139c
- (void)warmUpVerificationSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010ea0
- (id)_verificationSessionForReason:(unsigned long long)arg1;	// IMP=0x0000000100010da4
- (id)initWithClient:(id)arg1;	// IMP=0x0000000100010d2c

@end
