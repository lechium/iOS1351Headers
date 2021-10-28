/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVConferenceXPCClient;

@interface AVCVirtualTTYDevice : NSObject {

	AVConferenceXPCClient* _connection;
	id _delegate;
	BOOL _isStarted;

}

@property (assign,nonatomic) id<AVCVirtualTTYDeviceDelegate> delegate; 
-(void)dealloc;
-(id<AVCVirtualTTYDeviceDelegate>)delegate;
-(void)setDelegate:(id<AVCVirtualTTYDeviceDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(id)initWithStreamToken:(long long)arg1 error:(id*)arg2 ;
-(id)initWithMode:(long long)arg1 error:(id*)arg2 ;
-(BOOL)sendText:(id)arg1 ;
-(id)sendCharacter:(unsigned short)arg1 ;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(id)initWithMode:(long long)arg1 error:(id*)arg2 streamToken:(long long)arg3 ;
@end
