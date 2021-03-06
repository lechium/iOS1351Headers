/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVVideoImpressionTrackerFactory.h>

@protocol SVVideoImpressionTrackerFactory <NSObject>
@required
-(id)createImpressionTrackerForVideo:(id)arg1;

@end


@protocol SVVideoImpressionThresholdProviding, SVVideoDurationObserverFactory;
@class SVTimeline, NSString;

@interface SVVideoImpressionTrackerFactory : NSObject <SVVideoImpressionTrackerFactory> {

	SVTimeline* _timeline;
	id<SVVideoImpressionThresholdProviding> _impressionThresholdProvider;
	id<SVVideoDurationObserverFactory> _durationObserverFactory;

}

@property (nonatomic,readonly) SVTimeline * timeline;                                                            //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,readonly) id<SVVideoImpressionThresholdProviding> impressionThresholdProvider;              //@synthesize impressionThresholdProvider=_impressionThresholdProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoDurationObserverFactory> durationObserverFactory;                       //@synthesize durationObserverFactory=_durationObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoDurationObserverFactory>)durationObserverFactory;
-(SVTimeline *)timeline;
-(id)createImpressionTrackerForVideo:(id)arg1 ;
-(id)initWithTimeline:(id)arg1 impressionThresholdProvider:(id)arg2 durationObserverFactory:(id)arg3 ;
-(id<SVVideoImpressionThresholdProviding>)impressionThresholdProvider;
@end

