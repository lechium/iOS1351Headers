/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AOSKit/AOSKit-Structs.h>
#import <libobjc.A.dylib/NSPortDelegate.h>

@class NSThread, NSString;

@interface AOSContext : NSObject <NSPortDelegate> {

	AOSAccountRef _account;
	AOSTransactionC* _transaction;
	/*function pointer*/void* _callback;
	NSThread* _callbackThread;
	id _info;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithAccount:(AOSAccountRef)arg1 andTransaction:(AOSTransactionC*)arg2 ;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id)info;
-(AOSAccountRef)account;
-(void)setAccount:(AOSAccountRef)arg1 ;
-(AOSTransactionC*)transaction;
-(void)setTransaction:(AOSTransactionC*)arg1 ;
-(void)setInfo:(id)arg1 ;
-(id)_callbackThread;
-(void)_performCallback;
-(BOOL)scheduleCallback;
@end

