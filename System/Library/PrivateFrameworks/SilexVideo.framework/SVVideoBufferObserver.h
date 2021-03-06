/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVVideoBufferObserving.h>

@protocol SVPlayerItemObserving;
@class SVKeyValueObserver, NSString;

@interface SVVideoBufferObserver : NSObject <SVVideoBufferObserving> {

	BOOL _playbackBufferFull;
	BOOL _playbackLikelyToKeepUp;
	/*^block*/id _changeBlock;
	id<SVPlayerItemObserving> _playerItemObserver;
	SVKeyValueObserver* _playbackBufferFullObserver;
	SVKeyValueObserver* _playbackLikelyToKeepUpObserver;

}

@property (assign,getter=isPlaybackBufferFull,nonatomic) BOOL playbackBufferFull;                      //@synthesize playbackBufferFull=_playbackBufferFull - In the implementation block
@property (assign,getter=isPlaybackLikelyToKeepUp,nonatomic) BOOL playbackLikelyToKeepUp;              //@synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp - In the implementation block
@property (nonatomic,readonly) id<SVPlayerItemObserving> playerItemObserver;                           //@synthesize playerItemObserver=_playerItemObserver - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * playbackBufferFullObserver;                        //@synthesize playbackBufferFullObserver=_playbackBufferFullObserver - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * playbackLikelyToKeepUpObserver;                    //@synthesize playbackLikelyToKeepUpObserver=_playbackLikelyToKeepUpObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock;                                            //@synthesize changeBlock=_changeBlock - In the implementation block
-(BOOL)isPlaybackLikelyToKeepUp;
-(BOOL)isPlaybackBufferFull;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1 ;
-(id)initWithPlayerItemObserver:(id)arg1 ;
-(id<SVPlayerItemObserving>)playerItemObserver;
-(void)setPlaybackBufferFull:(BOOL)arg1 ;
-(void)setPlaybackLikelyToKeepUp:(BOOL)arg1 ;
-(SVKeyValueObserver *)playbackBufferFullObserver;
-(SVKeyValueObserver *)playbackLikelyToKeepUpObserver;
@end

