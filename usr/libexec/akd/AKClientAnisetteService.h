//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKAnisetteServiceProtocol-Protocol.h"

@class AKAppleIDAuthenticationContext, NSString;
@protocol AKAnisetteProvisioningClientProtocol;

@interface AKClientAnisetteService : NSObject <AKAnisetteServiceProtocol>
{
    id <AKAnisetteProvisioningClientProtocol> _clientProxy;	// 8 = 0x8
    AKAppleIDAuthenticationContext *_context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010006635c
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066278
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000661b0
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000660e8
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066004
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100065f34
- (id)initWithClient:(id)arg1 context:(id)arg2;	// IMP=0x0000000100065e2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
