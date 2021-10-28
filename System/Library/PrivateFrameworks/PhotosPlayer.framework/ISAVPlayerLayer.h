/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <AVFoundation/AVPlayerLayer.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ISAVPlayerLayer : AVPlayerLayer {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	/*^block*/id _readyForDisplayChangeHandler;

}

@property (nonatomic,copy) id readyForDisplayChangeHandler;              //@synthesize readyForDisplayChangeHandler=_readyForDisplayChangeHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(void)setWrappedPlayer:(id)arg1 ;
-(void)deferredDealloc;
-(id)readyForDisplayChangeHandler;
-(void)setReadyForDisplayChangeHandler:(id)arg1 ;
@end
