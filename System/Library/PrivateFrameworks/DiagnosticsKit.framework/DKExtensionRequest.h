/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DKExtensionHostAdapterDelegate.h>
#import <libobjc.A.dylib/DKRequest.h>

@protocol DKRequestDelegate, NSCopying, DKExtensionAttributes, DKExtensionHostAdapter, OS_dispatch_semaphore;
@class UIViewController, NSObject, BKSProcessAssertion, NSString;

@interface DKExtensionRequest : NSObject <DKExtensionHostAdapterDelegate, DKRequest> {

	BOOL _canceled;
	BOOL _completed;
	BOOL _interrupted;
	id<DKRequestDelegate> _delegate;
	id _hostServicesDelegate;
	id<NSCopying> _requestIdentifier;
	id<NSCopying> _extensionRequestIdentifier;
	id _context;
	id<DKExtensionAttributes> _extensionAttributes;
	UIViewController* _remoteViewController;
	id<DKExtensionHostAdapter> _hostAdapter;
	id _payload;
	NSObject*<OS_dispatch_semaphore> _connectSemaphore;
	BKSProcessAssertion* _processAssertion;

}

@property (nonatomic,retain) id<DKExtensionAttributes> extensionAttributes;                  //@synthesize extensionAttributes=_extensionAttributes - In the implementation block
@property (nonatomic,retain) id<NSCopying> extensionRequestIdentifier;                       //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (assign,getter=isCanceled,nonatomic) BOOL canceled;                                //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,retain) UIViewController * remoteViewController;                        //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) id<DKExtensionHostAdapter> hostAdapter;                         //@synthesize hostAdapter=_hostAdapter - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;                              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) id payload;                                                     //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> connectSemaphore;              //@synthesize connectSemaphore=_connectSemaphore - In the implementation block
@property (assign,getter=isInterrupted,nonatomic) BOOL interrupted;                          //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * processAssertion;                         //@synthesize processAssertion=_processAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id hostServicesDelegate;                                 //@synthesize hostServicesDelegate=_hostServicesDelegate - In the implementation block
@property (nonatomic,readonly) id<NSCopying> requestIdentifier;                              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<DKRequestDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id context;                                                     //@synthesize context=_context - In the implementation block
+(id)requestWithExtensionAttributes:(id)arg1 ;
-(NSString *)description;
-(id<DKRequestDelegate>)delegate;
-(void)setDelegate:(id<DKRequestDelegate>)arg1 ;
-(void)cancel;
-(id)context;
-(void)interrupt;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setContext:(id)arg1 ;
-(void)setPayload:(id)arg1 ;
-(id)payload;
-(void)complete;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)isInterrupted;
-(void)setCompleted:(BOOL)arg1 ;
-(UIViewController *)remoteViewController;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)extensionRequestIdentifier;
-(void)setRemoteViewController:(UIViewController *)arg1 ;
-(id<NSCopying>)requestIdentifier;
-(BOOL)isCanceled;
-(void)setInterrupted:(BOOL)arg1 ;
-(id)connectWithError:(id*)arg1 ;
-(BOOL)isCompleted;
-(BKSProcessAssertion *)processAssertion;
-(void)setProcessAssertion:(BKSProcessAssertion *)arg1 ;
-(void)_finishWithResult:(id)arg1 error:(id)arg2 ;
-(id<DKExtensionAttributes>)extensionAttributes;
-(void)_dismissViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelExtensionRequest;
-(void)completeWithPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHostServicesDelegate:(id)arg1 ;
-(id)initWithExtensionAttributes:(id)arg1 ;
-(void)beginWithPayload:(id)arg1 ;
-(id)hostServicesDelegate;
-(NSObject*<OS_dispatch_semaphore>)connectSemaphore;
-(id<DKExtensionHostAdapter>)hostAdapter;
-(void)_cancelTimedOutWithInfo:(id)arg1 ;
-(BOOL)_extensionContext:(id)arg1 hasEntitlement:(id)arg2 ;
-(void)setHostAdapter:(id<DKExtensionHostAdapter>)arg1 ;
-(void)setExtensionAttributes:(id<DKExtensionAttributes>)arg1 ;
-(void)setConnectSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

