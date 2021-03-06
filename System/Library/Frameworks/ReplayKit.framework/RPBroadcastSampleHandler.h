/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReplayKit/ReplayKit-Structs.h>
#import <ReplayKit/RPBroadcastHandler.h>
#import <libobjc.A.dylib/RPExtensionContextDelegate.h>

@protocol RPBroadcastDaemonProtocol;
@class NSString;

@interface RPBroadcastSampleHandler : RPBroadcastHandler <RPExtensionContextDelegate> {

	id<RPBroadcastDaemonProtocol> _daemonProxy;

}

@property (nonatomic,retain) id<RPBroadcastDaemonProtocol> daemonProxy;              //@synthesize daemonProxy=_daemonProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(id)group;
-(id<RPBroadcastDaemonProtocol>)daemonProxy;
-(id)videoQueue;
-(id)audioQueue;
-(void)updateServiceInfo:(id)arg1 ;
-(void)updateBroadcastURL:(id)arg1 ;
-(void)finishBroadcastWithError:(id)arg1 ;
-(void)_setupListenerWithEndpoint:(id)arg1 ;
-(void)_processPayloadWithVideoSample:(id)arg1 ;
-(void)_processPayloadWithAudioSample:(id)arg1 type:(long long)arg2 ;
-(void)broadcastAnnotatedWithApplicationInfo:(id)arg1 ;
-(void)broadcastStartedWithSetupInfo:(id)arg1 ;
-(void)broadcastPaused;
-(void)broadcastResumed;
-(void)broadcastFinished;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 withType:(long long)arg2 ;
-(void)_processPayload:(id)arg1 ;
-(void)processPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDaemonProxy:(id<RPBroadcastDaemonProtocol>)arg1 ;
-(void)extensionContext:(id)arg1 setEndpoint:(id)arg2 ;
@end

