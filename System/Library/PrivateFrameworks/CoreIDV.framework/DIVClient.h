/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DIVerificationClientSideProtocol.h>

@protocol DIVerificationServerSideProtocol;
@class NSXPCConnection, DIVerificationSessionContext, NSMutableSet, NSString;

@interface DIVClient : NSObject <DIVerificationClientSideProtocol> {

	unsigned long long _state;
	NSXPCConnection* _serverConnection;
	DIVerificationSessionContext* _context;
	id<DIVerificationServerSideProtocol> _remoteObjectProxy;
	NSMutableSet* _disconnectionCallbacks;
	BOOL _isDisconnected;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)performVerificationWithAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shareVerificationResultWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configure:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVerificationResultWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)concludeVerification:(id)arg1 ;
-(id)createDaemonDisconnectedError;
@end

