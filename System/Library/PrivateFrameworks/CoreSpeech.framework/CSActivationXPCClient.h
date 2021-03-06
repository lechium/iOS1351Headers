/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSObject;

@interface CSActivationXPCClient : NSObject {

	NSObject*<OS_xpc_object> _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(id)init;
-(void)dealloc;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)connect;
-(void)notifyActivationEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleListenerEvent:(id)arg1 ;
-(void)_handleListenerError:(id)arg1 ;
-(void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_decodeError:(id)arg1 ;
@end

