//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSEngramKeyStoreListener-Protocol.h"

@class CUTDeferredTaskQueue, IDSGetDependentRegistrationsCenter, IDSKeyTransparencyVerifier, IDSPushHandler, IDSValidationSession, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSString;
@protocol IDSRegistrationCenterMessageDelivery;

@interface IDSRegistrationCenter : NSObject <IDSEngramKeyStoreListener>
{
    NSMutableArray *_queuedRegistrations;	// 8 = 0x8
    NSMutableArray *_queuedAuthentications;	// 16 = 0x10
    NSMutableArray *_currentAuthentications;	// 24 = 0x18
    NSMutableArray *_currentRegistrations;	// 32 = 0x20
    NSMutableArray *_handlers;	// 40 = 0x28
    _Bool _pendingDequeue;	// 48 = 0x30
    _Bool _pendingDeregistration;	// 49 = 0x31
    NSMutableDictionary *_currentGetHandlesBlocks;	// 56 = 0x38
    NSMutableDictionary *_currentGetHandlesRegistrations;	// 64 = 0x40
    NSMutableArray *_successfulRegistrations;	// 72 = 0x48
    _Bool _shouldUseAbsinthe;	// 80 = 0x50
    _Bool _isBuildingContext;	// 81 = 0x51
    struct NACContextOpaque_ *_validationContext;	// 88 = 0x58
    _Bool _validationContextDisabled;	// 96 = 0x60
    NSDate *_validateContextDate;	// 104 = 0x68
    NSNumber *_validateContextTTL;	// 112 = 0x70
    IDSValidationSession *_validationSession;	// 120 = 0x78
    NSMutableArray *_validationContextQueue;	// 128 = 0x80
    NSDate *_dateSentLastHTTPMessage;	// 136 = 0x88
    NSDate *_dateLastRegistered;	// 144 = 0x90
    NSDate *_accountingHour;	// 152 = 0x98
    unsigned long long _registrations;	// 160 = 0xa0
    id <IDSRegistrationCenterMessageDelivery> _httpMessageDelivery;	// 168 = 0xa8
    IDSPushHandler *_pushHandler;	// 176 = 0xb0
    IDSGetDependentRegistrationsCenter *_gdrCenter;	// 184 = 0xb8
    IDSKeyTransparencyVerifier *_keyTransparencyVerifier;	// 192 = 0xc0
    CUTDeferredTaskQueue *_sendAuthenticateRegistrationTask;	// 200 = 0xc8
    CUTDeferredTaskQueue *_sendRegistrationTask;	// 208 = 0xd0
    CUTDeferredTaskQueue *_sendDeregistrationTask;	// 216 = 0xd8
    CUTDeferredTaskQueue *_cleanupAbsintheTask;	// 224 = 0xe0
}

+ (id)sharedInstance;	// IMP=0x0000000100303c00
- (void).cxx_destruct;	// IMP=0x000000010032c598
@property(readonly, nonatomic) CUTDeferredTaskQueue *cleanupAbsintheTask; // @synthesize cleanupAbsintheTask=_cleanupAbsintheTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendDeregistrationTask; // @synthesize sendDeregistrationTask=_sendDeregistrationTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendRegistrationTask; // @synthesize sendRegistrationTask=_sendRegistrationTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendAuthenticateRegistrationTask; // @synthesize sendAuthenticateRegistrationTask=_sendAuthenticateRegistrationTask;
- (void)sendValidateCredential:(id)arg1 withDeliveryCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010032bfc0
- (id)dateLastRegistered;	// IMP=0x000000010032bfa0
- (void)_noteRegistration;	// IMP=0x000000010032bcd8
- (_Bool)_checkOverRegistrations;	// IMP=0x000000010032bb04
- (void)handler:(id)arg1 pushTokenChanged:(id)arg2;	// IMP=0x000000010032b998
- (void)removeListener:(id)arg1;	// IMP=0x000000010032b8fc
- (void)addListener:(id)arg1;	// IMP=0x000000010032b82c
- (id)activeRegistrations;	// IMP=0x000000010032b70c
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x000000010032b294
- (void)cancelRegisterActionsForRegistrationInfo:(id)arg1;	// IMP=0x000000010032ac64
- (_Bool)sendDeregistration:(id)arg1;	// IMP=0x000000010032a948
- (_Bool)sendRegistration:(id)arg1;	// IMP=0x000000010032a268
- (void)__reallySendRegistration;	// IMP=0x000000010032a174
- (_Bool)authenticateRegistration:(id)arg1;	// IMP=0x0000000100329544
- (void)__reallySendAuthenticateRegistration;	// IMP=0x0000000100329408
- (_Bool)queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100329108
- (_Bool)_queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100327d60
- (void)_processGetHandlesMessage:(id)arg1 registrations:(id)arg2 deliveredWithError:(id)arg3 resultCode:(long long)arg4 resultDictionary:(id)arg5 allowPasswordPrompt:(_Bool)arg6;	// IMP=0x0000000100326d38
- (_Bool)isRegistering:(id)arg1;	// IMP=0x0000000100326c7c
- (id)_geoRegion;	// IMP=0x0000000100326ba8
- (void)reportiMessageSpamCheckUnknown:(id)arg1 count:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100326628
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(_Bool)arg3 messageServerTimestamp:(id)arg4 selfURI:(id)arg5 registration:(id)arg6;	// IMP=0x0000000100326030
- (void)reportSpamWithMessages:(id)arg1 selfURI:(id)arg2 registration:(id)arg3;	// IMP=0x0000000100325b30
- (void)_sendAuthenticateRegistration:(id)arg1;	// IMP=0x00000001003252cc
- (id)_authMessageForRegistration:(id)arg1;	// IMP=0x0000000100322044
- (CDUnknownBlockType)_authMessageCompletionWithRegistration:(id)arg1 withOverallSuccessBlock:(CDUnknownBlockType)arg2 overallFailure:(CDUnknownBlockType)arg3;	// IMP=0x0000000100321470
- (void)sendHardDeregisterCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001003203cc
- (void)_sendDeregistration:(id)arg1;	// IMP=0x000000010032011c
- (void)__reallySendDeregistration;	// IMP=0x000000010032001c
- (void)_sendRegistrationAsDeregister:(_Bool)arg1;	// IMP=0x00000001003190a8
- (id)_trustedDeviceForRegistrations:(id)arg1 transparencyLoggableDatasByServiceType:(id)arg2;	// IMP=0x00000001003187d0
- (id)_URIsToRegisterForRegistration:(id)arg1;	// IMP=0x000000010031842c
- (void)_processRegistrationMessage:(id)arg1 sentRegistrations:(id)arg2 descriptionString:(id)arg3 actionID:(id)arg4 actionString:(id)arg5 isDeregister:(_Bool)arg6 deliveredWithError:(id)arg7 resultCode:(long long)arg8 resultDictionary:(id)arg9;	// IMP=0x0000000100310b54
- (id)_keyTransparencyLoggableDataFromRegistrationMessage:(id)arg1 service:(id)arg2 URI:(id)arg3;	// IMP=0x0000000100310558
- (_Bool)_hasRegistration:(id)arg1 inQueue:(id)arg2;	// IMP=0x000000010030fddc
- (void)_notifyRegistrationIdentitiesUpdated;	// IMP=0x000000010030fa50
- (void)_notifyEmailQuerySuccess:(id)arg1 emailInfo:(id)arg2;	// IMP=0x000000010030f550
- (void)_notifyEmailQueryFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x000000010030ec4c
- (void)_notifyAllSuccessfulRegistrations:(id)arg1;	// IMP=0x000000010030e868
- (void)_notifyRegistrationSuccess:(id)arg1;	// IMP=0x000000010030de24
- (void)_notifyRegistrationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x000000010030cee0
- (void)_notifyIDSAuthenticationSuccess:(id)arg1;	// IMP=0x000000010030c488
- (void)_notifyProvisionFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 fatal:(_Bool)arg5 info:(id)arg6;	// IMP=0x000000010030b584
- (void)buildValidationCredentialsIfNeeded;	// IMP=0x000000010030b470
- (void)_queueBuildingValidationDataIfNecessaryForMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010030a550
- (void)_sendAbsintheValidationCertRequestIfNeeded;	// IMP=0x0000000100307c14
- (void)__cleanupValidationInfo;	// IMP=0x0000000100307acc
- (void)__flushValidationQueue;	// IMP=0x000000010030743c
- (void)__failValidationQueueWithErrorResponseCode:(long long)arg1;	// IMP=0x000000010030709c
- (void)__failValidationQueue;	// IMP=0x0000000100307060
- (void)__queueValidationMessage:(id)arg1;	// IMP=0x0000000100306e98
- (void)_dequeuePendingRequestsIfNecessary;	// IMP=0x0000000100306058
- (_Bool)_hasCurrentAuthenticationsOrRegistrations;	// IMP=0x0000000100305fdc
- (_Bool)_hasOngoingAuthentications;	// IMP=0x0000000100305f60
- (void)__sendMessage:(id)arg1;	// IMP=0x0000000100305db8
- (void)logState;	// IMP=0x0000000100305bb8
- (void)__dumpState;	// IMP=0x0000000100304fdc
- (void)engramKeyStoreDidUpdateIdentities:(id)arg1;	// IMP=0x0000000100304c20
- (id)keyTransparencyVerifier;	// IMP=0x0000000100304c00
- (id)gdrCenter;	// IMP=0x0000000100304be0
- (void)dealloc;	// IMP=0x0000000100304ac4
- (id)init;	// IMP=0x0000000100304944
- (id)initWithMessageDelivery:(id)arg1 pushHandler:(id)arg2 keyTransparencyVerifier:(id)arg3;	// IMP=0x0000000100303dc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

