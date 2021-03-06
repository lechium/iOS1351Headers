/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EMMessageRepositoryMailboxPredictionObserver_xpc.h>
#import <libobjc.A.dylib/EMRecoverableObserver.h>

@class NSArray, EFCancelationToken, NSString;

@interface _EMMessageRepositoryMailboxPredictionObserver : NSObject <EMMessageRepositoryMailboxPredictionObserver_xpc, EMRecoverableObserver> {

	NSArray* _messageObjectIDs;
	/*^block*/id _completionHandler;
	EFCancelationToken* _cancelationToken;

}

@property (nonatomic,copy,readonly) NSArray * messageObjectIDs;                    //@synthesize messageObjectIDs=_messageObjectIDs - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) EFCancelationToken * cancelationToken;              //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(id)completionHandler;
-(EFCancelationToken *)cancelationToken;
-(void)mailboxWasPredicted:(id)arg1 ;
-(void)recoverQueryWithRemoteConnection:(id)arg1 ;
-(void)performQueryWithRemoteConnection:(id)arg1 ;
-(id)initWithMessageObjectIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performQueryWithRemoteConnection:(id)arg1 forRecovery:(BOOL)arg2 ;
-(NSArray *)messageObjectIDs;
@end

