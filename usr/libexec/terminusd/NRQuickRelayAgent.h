//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NWNetworkAgent-Protocol.h"

@class NSString, NSUUID, NWNetworkAgentRegistration;
@protocol NRQuickRelayAgentDelegate, OS_dispatch_queue;

@interface NRQuickRelayAgent : NSObject <NWNetworkAgent>
{
    _Bool active;	// 8 = 0x8
    _Bool kernelActivated;	// 9 = 0x9
    _Bool userActivated;	// 10 = 0xa
    _Bool voluntary;	// 11 = 0xb
    _Bool specificUseOnly;	// 12 = 0xc
    _Bool networkProvider;	// 13 = 0xd
    _Bool _isRegistered;	// 14 = 0xe
    unsigned int _assertCount;	// 16 = 0x10
    NSUUID *agentUUID;	// 24 = 0x18
    NSString *agentDescription;	// 32 = 0x20
    NSUUID *_nrUUID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NWNetworkAgentRegistration *_registrationObject;	// 56 = 0x38
    id <NRQuickRelayAgentDelegate> _delegate;	// 64 = 0x40
    NSString *_policyIdentifier;	// 72 = 0x48
    NSString *_localDeviceStringForLogging;	// 80 = 0x50
}

+ (id)agentFromData:(id)arg1;	// IMP=0x0000000100011c68
+ (id)agentDomain;	// IMP=0x0000000100011c24
+ (id)agentType;	// IMP=0x0000000100011be0
- (void).cxx_destruct;	// IMP=0x0000000100011880
@property(retain, nonatomic) NSString *localDeviceStringForLogging; // @synthesize localDeviceStringForLogging=_localDeviceStringForLogging;
@property(retain, nonatomic) NSString *policyIdentifier; // @synthesize policyIdentifier=_policyIdentifier;
@property(nonatomic) __weak id <NRQuickRelayAgentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int assertCount; // @synthesize assertCount=_assertCount;
@property(nonatomic) _Bool isRegistered; // @synthesize isRegistered=_isRegistered;
@property(retain, nonatomic) NWNetworkAgentRegistration *registrationObject; // @synthesize registrationObject=_registrationObject;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSUUID *nrUUID; // @synthesize nrUUID=_nrUUID;
@property(copy, nonatomic) NSString *agentDescription; // @synthesize agentDescription;
@property(nonatomic, getter=isNetworkProvider) _Bool networkProvider; // @synthesize networkProvider;
@property(nonatomic, getter=isSpecificUseOnly) _Bool specificUseOnly; // @synthesize specificUseOnly;
@property(nonatomic, getter=isVoluntary) _Bool voluntary; // @synthesize voluntary;
@property(nonatomic, getter=isUserActivated) _Bool userActivated; // @synthesize userActivated;
@property(nonatomic, getter=isKernelActivated) _Bool kernelActivated; // @synthesize kernelActivated;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (void)unassertAgentWithOptions:(id)arg1;	// IMP=0x00000001000116d4
- (_Bool)assertAgentWithOptions:(id)arg1;	// IMP=0x0000000100011654
- (_Bool)registerAgent;	// IMP=0x00000001000111dc
- (void)activateAgent;	// IMP=0x0000000100011040
- (void)suspendAgent;	// IMP=0x0000000100010eb8
- (_Bool)unregisterAgent;	// IMP=0x0000000100010cc4
- (id)copyAgentData;	// IMP=0x0000000100010cbc
- (id)description;	// IMP=0x0000000100010b1c
- (void)dealloc;	// IMP=0x0000000100010a78
- (id)initWithNRUUID:(id)arg1 queue:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000100010544

// Remaining properties
@property(nonatomic, getter=isNexusProvider) _Bool nexusProvider;
@property(nonatomic) _Bool requiresAssert;
@property(nonatomic) _Bool supportsBrowseRequests;
@property(nonatomic) _Bool supportsResolveRequests;
@property(nonatomic) _Bool updateClientsImmediately;

@end

