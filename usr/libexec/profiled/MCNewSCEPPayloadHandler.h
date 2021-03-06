//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewCertificatePayloadHandler.h"

@interface MCNewSCEPPayloadHandler : MCNewCertificatePayloadHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
}

+ (void)allowInsecureHTTPLoadsOfURL:(id)arg1 forConfiguration:(id)arg2;	// IMP=0x00000001000745a8
+ (id)atsOverrideDataWithInsecureHTTPForHost:(id)arg1 fromATSOverrideData:(id)arg2;	// IMP=0x000000010007434c
+ (id)mutableATSExceptionInExceptionDomains:(id)arg1 matchingHost:(id)arg2;	// IMP=0x0000000100074190
- (struct __SecIdentity *)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000100075488
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100075104
- (id)_performPKIOperation:(id)arg1 withPayload:(id)arg2 usingPost:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100074f28
- (_Bool)_createKeyPairLength:(unsigned long long)arg1 outPublicKey:(struct __SecKey **)arg2 outPrivateKey:(struct __SecKey **)arg3;	// IMP=0x0000000100074e24
- (id)_invalidRAResponse;	// IMP=0x0000000100074d8c
- (id)_synchronousTransactionWithURL:(id)arg1 method:(id)arg2 content:(id)arg3 contentType:(id)arg4 outResponseCode:(long long *)arg5 outContentType:(id *)arg6 outError:(id *)arg7;	// IMP=0x00000001000746b4
- (id)_SCEPOperationURLWithBaseURLString:(id)arg1 operation:(id)arg2 message:(id)arg3;	// IMP=0x0000000100073fcc
- (id)userInputFields;	// IMP=0x0000000100073e0c
- (void)dealloc;	// IMP=0x0000000100073db8

@end

