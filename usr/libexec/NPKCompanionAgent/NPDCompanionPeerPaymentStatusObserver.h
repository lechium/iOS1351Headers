//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPKRemoteAdminConnectionServiceAgent, NPSDomainAccessor;

@interface NPDCompanionPeerPaymentStatusObserver : NSObject
{
    NPKRemoteAdminConnectionServiceAgent *_serviceAgent;	// 8 = 0x8
    NPSDomainAccessor *_globalDomainAccessor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000072fc
@property(retain, nonatomic) NPSDomainAccessor *globalDomainAccessor; // @synthesize globalDomainAccessor=_globalDomainAccessor;
@property(retain, nonatomic) NPKRemoteAdminConnectionServiceAgent *serviceAgent; // @synthesize serviceAgent=_serviceAgent;
- (void)_compareCompanionAndWatchPeerPaymentRegistrationStatus;	// IMP=0x0000000100006f5c
- (_Bool)_shouldCheckPeerPaymentStatus;	// IMP=0x0000000100006e0c
- (void)handleWatchRequestForCompanionPeerPaymentRegistrationState;	// IMP=0x0000000100006d5c
- (void)handleCompanionPeerPaymentWebServiceContextChanged;	// IMP=0x0000000100006cac
- (id)initWithRemoteAdminConnectionServiceAgent:(id)arg1;	// IMP=0x0000000100006c10

@end

