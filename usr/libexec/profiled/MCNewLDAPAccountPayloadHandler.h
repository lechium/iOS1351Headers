//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCACAccountPayloadHandler.h"

#import "DAValidityCheckConsumer-Protocol.h"

@class NSError, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface MCNewLDAPAccountPayloadHandler : MCACAccountPayloadHandler <DAValidityCheckConsumer>
{
    NSObject<OS_dispatch_semaphore> *_doneSema;	// 32 = 0x20
    _Bool _validationComplete;	// 40 = 0x28
    NSError *_validationError;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100068514
- (void)remove;	// IMP=0x00000001000683a8
- (void)unsetAside;	// IMP=0x000000010006802c
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x0000000100067f00
- (_Bool)isInstalled;	// IMP=0x0000000100067ec4
- (id)accountTypeIdentifiers;	// IMP=0x0000000100067e54
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100067cd0
- (id)_reallyInstallInstaller:(id)arg1 isInstalledByMDM:(_Bool)arg2 personaID:(id)arg3;	// IMP=0x00000001000674d8
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x00000001000671e8
- (void)_preflightWithAccount:(id)arg1;	// IMP=0x0000000100067068
- (void)account:(id)arg1 isValid:(_Bool)arg2 validationError:(id)arg3;	// IMP=0x0000000100066e7c
- (id)_errorFromValidationError:(id)arg1;	// IMP=0x0000000100066b00
- (id)_accountFromPayloadWithUserInputResponses:(id)arg1;	// IMP=0x0000000100065f48
- (id)unhashedAccountIdentifier;	// IMP=0x0000000100065e3c
- (void)setUserInputResponses:(id)arg1;	// IMP=0x0000000100065b74
- (id)userInputFields;	// IMP=0x0000000100065838

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

