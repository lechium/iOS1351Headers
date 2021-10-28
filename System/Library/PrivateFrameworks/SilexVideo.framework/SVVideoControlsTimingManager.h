/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVVideoControlsTimingProviding.h>

@protocol SVVideoControlsTimingConfiguration, SVVideoSkipThresholdProviding;
@class SVTimeline, NSString;

@interface SVVideoControlsTimingManager : NSObject <SVVideoControlsTimingProviding> {

	id<SVVideoControlsTimingConfiguration> _timingConfiguration;
	id<SVVideoSkipThresholdProviding> _skipThresholdProvider;
	SVTimeline* _timeline;

}

@property (nonatomic,readonly) id<SVVideoControlsTimingConfiguration> timingConfiguration;              //@synthesize timingConfiguration=_timingConfiguration - In the implementation block
@property (nonatomic,readonly) id<SVVideoSkipThresholdProviding> skipThresholdProvider;                 //@synthesize skipThresholdProvider=_skipThresholdProvider - In the implementation block
@property (nonatomic,readonly) SVTimeline * timeline;                                                   //@synthesize timeline=_timeline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SVTimeline *)timeline;
-(double)autoAppearanceTimeIntervalForVideo:(id)arg1 ;
-(double)autoHideTimeIntervalForVideo:(id)arg1 ;
-(double)nowPlayingVisibilityTimeIntervalForVideo:(id)arg1 ;
-(double)moreFromVisibilityTimeIntervalForVideo:(id)arg1 ;
-(double)upNextAppearanceTimeIntervalForVideo:(id)arg1 ;
-(id)initWithControlTimingConfiguration:(id)arg1 skipThresholdProvider:(id)arg2 timeline:(id)arg3 ;
-(id<SVVideoSkipThresholdProviding>)skipThresholdProvider;
-(id<SVVideoControlsTimingConfiguration>)timingConfiguration;
@end
