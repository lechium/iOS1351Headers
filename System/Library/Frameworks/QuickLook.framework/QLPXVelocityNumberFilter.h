/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuickLook/QLPXNumberFilter.h>

@interface QLPXVelocityNumberFilter : QLPXNumberFilter {

	double _minimumSampleInterval;
	double _previousVelocityWeight;
	double _lastValue;
	double _lastTime;
	double _velocity;
	double _previousVelocity;
	double _filteredVelocity;

}
+(id)gestureVelocityFilter;
-(id)initWithInput:(double)arg1 ;
-(double)updatedOutput;
@end
