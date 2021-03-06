/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, AirPlayRemoteSlideshowDelegate;
@class NSObject, MediaControlClient;

@interface AirPlayRemoteSlideshow : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	MediaControlClient* _client;
	id<AirPlayRemoteSlideshowDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _userQueue;
	BOOL _started;
	double _startTime;

}

@property (assign,nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<AirPlayRemoteSlideshowDelegate>)delegate;
-(void)setDelegate:(id<AirPlayRemoteSlideshowDelegate>)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setHost:(id)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(void)_configureEventHandler;
-(void)getFeaturesWithOptions:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)getFeaturesWithCompletion:(/*^block*/id)arg1 ;
-(void)startWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

