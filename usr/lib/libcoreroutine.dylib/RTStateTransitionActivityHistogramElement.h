/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMMotionActivity;

@interface RTStateTransitionActivityHistogramElement : NSObject <NSCopying> {

	CMMotionActivity* _activity;
	double _interval;

}

@property (nonatomic,retain) CMMotionActivity * activity;              //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) double interval;                          //@synthesize interval=_interval - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(CMMotionActivity *)activity;
-(void)setActivity:(CMMotionActivity *)arg1 ;
-(id)initWithActivity:(id)arg1 ;
@end

