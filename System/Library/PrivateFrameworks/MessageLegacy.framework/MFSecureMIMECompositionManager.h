/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, MFSecureMIMECompositionManagerDelegate;
#import <MessageLegacy/MessageLegacy-Structs.h>
@class NSLock, NSObject, MailAccount, NSString, MFError, NSMutableSet, NSMutableDictionary, NSSet;

@interface MFSecureMIMECompositionManager : NSObject {

	NSLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	MailAccount* _sendingAccount;
	NSString* _sendingAddress;
	SecIdentityRef _signingIdentity;
	MFError* _signingIdentityError;
	SecIdentityRef _encryptionIdentity;
	MFError* _encryptionIdentityError;
	NSMutableSet* _recipients;
	NSMutableDictionary* _errorsByRecipient;
	NSMutableDictionary* _certificatesByRecipient;
	int _signingPolicy;
	int _encryptionPolicy;
	int _signingStatus;
	int _encryptionStatus;
	unsigned long long _encryptionStatusSemaphore;
	unsigned long long _signingStatusSemaphore;
	BOOL _invalidated;
	id<MFSecureMIMECompositionManagerDelegate> _delegate;

}

@property (__weak) id<MFSecureMIMECompositionManagerDelegate> delegate; 
@property (copy) NSString * sendingAddress; 
@property (readonly) MailAccount * sendingAccount; 
@property (readonly) int signingPolicy; 
@property (readonly) int encryptionPolicy; 
@property (readonly) int signingStatus; 
@property (readonly) int encryptionStatus; 
@property (readonly) NSSet * recipients; 
+(SecIdentityRef)copySigningIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3 ;
+(SecIdentityRef)copyEncryptionIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3 ;
+(unsigned)evaluateTrustForSigningCertificate:(SecCertificateRef)arg1 sendingAddress:(id)arg2 ;
+(id)copyEncryptionCertificatesForAccount:(id)arg1 recipientAddresses:(id)arg2 errorsByAddress:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<MFSecureMIMECompositionManagerDelegate>)delegate;
-(void)setDelegate:(id<MFSecureMIMECompositionManagerDelegate>)arg1 ;
-(NSSet *)recipients;
-(void)addRecipients:(id)arg1 ;
-(void)setSendingAddress:(NSString *)arg1 ;
-(id)compositionSpecification;
-(id)initWithSendingAccount:(id)arg1 signingPolicy:(int)arg2 encryptionPolicy:(int)arg3 ;
-(BOOL)_updateSigningStatus_nts;
-(BOOL)_updateEncryptionStatus_nts;
-(void)_notifyDelegateEncryptionStatusDidChange:(int)arg1 certsByRecipient:(id)arg2 errorsByRecipient:(id)arg3 identity:(SecIdentityRef)arg4 error:(id)arg5 ;
-(void)_determineEncryptionStatusWithNewRecipients:(id)arg1 ;
-(void)_notifyDelegateSigningStatusDidChange:(int)arg1 identity:(SecIdentityRef)arg2 error:(id)arg3 ;
-(void)_determineIdentitiesWithSendingAddress:(id)arg1 forSigning:(BOOL)arg2 encryption:(BOOL)arg3 ;
-(void)_determineSigningStatusWithSendingAddress:(id)arg1 ;
-(void)_determineEncryptionStatusWithSendingAddress:(id)arg1 ;
-(void)_nts_setSigningIdentity:(SecIdentityRef)arg1 error:(id)arg2 ;
-(void)_nts_setEncryptionIdentity:(SecIdentityRef)arg1 error:(id)arg2 ;
-(void)_nts_copySigningIdentity:(_SecIdentity*)arg1 error:(id*)arg2 ;
-(void)_determineTrustStatusForSigningIdentity:(SecIdentityRef)arg1 sendingAddress:(id)arg2 ;
-(void)_nts_copyEncryptionIdentity:(_SecIdentity*)arg1 error:(id*)arg2 certificatesByRecipient:(id*)arg3 errorsByRecipient:(id*)arg4 ;
-(BOOL)_shouldAllowSend_nts;
-(BOOL)_shouldSign_nts;
-(BOOL)_shouldEncrypt_nts;
-(id)initWithSigningPolicy:(int)arg1 encryptionPolicy:(int)arg2 ;
-(void)removeRecipients:(id)arg1 ;
-(NSString *)sendingAddress;
-(MailAccount *)sendingAccount;
-(int)signingPolicy;
-(int)encryptionPolicy;
-(int)signingStatus;
-(int)encryptionStatus;
-(BOOL)shouldAllowSend;
@end

