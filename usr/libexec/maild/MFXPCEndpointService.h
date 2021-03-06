//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFDiagnosticsGenerator-Protocol.h"
#import "MFMailService-Protocol.h"

@class NSDictionary, NSString;

@interface MFXPCEndpointService : NSObject <MFDiagnosticsGenerator, MFMailService>
{
    NSDictionary *_endpointInfoByProtocol;	// 8 = 0x8
}

+ (_Bool)handleMessage:(id)arg1 connectionState:(id)arg2 replyObject:(id *)arg3 error:(id *)arg4;	// IMP=0x00000001000cd18c
+ (id)serviceName;	// IMP=0x00000001000cd180
+ (id)requiredEntitlement;	// IMP=0x00000001000cd178
+ (id)sharedInstance;	// IMP=0x00000001000cd10c
- (void).cxx_destruct;	// IMP=0x00000001000ce150
- (id)listenerForProtocolNamed:(id)arg1;	// IMP=0x00000001000ce0a0
- (id)activeListeners;	// IMP=0x00000001000cdffc
- (id)copyDiagnosticInformation;	// IMP=0x00000001000cdb2c
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000001000cd8f8
- (id)init;	// IMP=0x00000001000cd3bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

