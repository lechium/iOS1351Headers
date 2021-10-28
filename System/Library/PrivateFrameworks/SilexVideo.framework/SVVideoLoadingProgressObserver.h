/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVVideoLoadingProgressObserving.h>

@protocol SVPlayerItemObserving, SVVideoDurationObserving;
@class SVKeyValueObserver, NSString;

@interface SVVideoLoadingProgressObserver : NSObject <SVVideoLoadingProgressObserving> {

	double _progress;
	/*^block*/id _progressChangedBlock;
	id<SVPlayerItemObserving> _playerItemObserver;
	id<SVVideoDurationObserving> _durationObserver;
	SVKeyValueObserver* _loadedTimeRangesObserver;

}

@property (nonatomic,readonly) id<SVPlayerItemObserving> playerItemObserver;               //@synthesize playerItemObserver=_playerItemObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoDurationObserving> durationObserver;              //@synthesize durationObserver=_durationObserver - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * loadedTimeRangesObserver;              //@synthesize loadedTimeRangesObserver=_loadedTimeRangesObserver - In the implementation block
@property (assign,nonatomic) double progress;                                              //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onProgressChanged:,nonatomic,copy) id progressChangedBlock;              //@synthesize progressChangedBlock=_progressChangedBlock - In the implementation block
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(id<SVVideoDurationObserving>)durationObserver;
-(id)progressChangedBlock;
-(void)onProgressChanged:(/*^block*/id)arg1 ;
-(id<SVPlayerItemObserving>)playerItemObserver;
-(id)initWithPlayerItemObserver:(id)arg1 durationObserver:(id)arg2 ;
-(void)updateProgressWithLoadedTimeRanges:(id)arg1 duration:(double)arg2 ;
-(SVKeyValueObserver *)loadedTimeRangesObserver;
@end
