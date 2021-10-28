/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVAudioDeviceTestServiceProtocol;
@class NSXPCConnection;

@interface AVAudioDeviceTest : NSObject {

	NSXPCConnection* _connection;
	id<AVAudioDeviceTestServiceProtocol> _serviceDelegateAsync;
	id<AVAudioDeviceTestServiceProtocol> _serviceDelegateSync;

}

@property (retain) NSXPCConnection * connection;                                           //@synthesize connection=_connection - In the implementation block
@property (retain) id<AVAudioDeviceTestServiceProtocol> serviceDelegateAsync;              //@synthesize serviceDelegateAsync=_serviceDelegateAsync - In the implementation block
@property (retain) id<AVAudioDeviceTestServiceProtocol> serviceDelegateSync;               //@synthesize serviceDelegateSync=_serviceDelegateSync - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancel;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)startWithSequence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<AVAudioDeviceTestServiceProtocol>)serviceDelegateAsync;
-(void)setServiceDelegateAsync:(id<AVAudioDeviceTestServiceProtocol>)arg1 ;
-(id<AVAudioDeviceTestServiceProtocol>)serviceDelegateSync;
-(void)setServiceDelegateSync:(id<AVAudioDeviceTestServiceProtocol>)arg1 ;
@end
