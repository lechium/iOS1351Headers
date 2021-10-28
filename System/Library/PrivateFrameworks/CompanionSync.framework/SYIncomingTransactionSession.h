/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CompanionSync/SYSession.h>

@protocol OS_os_activity;
@class NSObject, SYChangeMessage;

@interface SYIncomingTransactionSession : SYSession {

	NSObject*<OS_os_activity> _sessionActivity;
	SYChangeMessage* _message;
	/*^block*/id _completion;
	BOOL canRestart;
	BOOL canRollback;
	long long state;

}
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)wasCancelled;
-(unsigned long long)protocolVersion;
-(void)start:(/*^block*/id)arg1 ;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)didCompleteSession;
-(void)_sendComplete;
-(void)_sendChanges;
-(void)_sendCancelled;
-(id)initWithService:(id)arg1 transaction:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
