/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/STSiriModelObject.h>

@class NSArray;

@interface STMapViewport : STSiriModelObject {

	double _northLatitude;
	double _southLatitude;
	double _eastLongitude;
	double _westLongitude;
	double _timeSinceViewportChanged;
	double _timeSinceViewportEnteredForeground;
	NSArray* _viewportVertices;

}

@property (assign,nonatomic) double northLatitude;                                   //@synthesize northLatitude=_northLatitude - In the implementation block
@property (assign,nonatomic) double southLatitude;                                   //@synthesize southLatitude=_southLatitude - In the implementation block
@property (assign,nonatomic) double eastLongitude;                                   //@synthesize eastLongitude=_eastLongitude - In the implementation block
@property (assign,nonatomic) double westLongitude;                                   //@synthesize westLongitude=_westLongitude - In the implementation block
@property (assign,nonatomic) double timeSinceViewportChanged;                        //@synthesize timeSinceViewportChanged=_timeSinceViewportChanged - In the implementation block
@property (assign,nonatomic) double timeSinceViewportEnteredForeground;              //@synthesize timeSinceViewportEnteredForeground=_timeSinceViewportEnteredForeground - In the implementation block
@property (nonatomic,copy) NSArray * viewportVertices;                               //@synthesize viewportVertices=_viewportVertices - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_aceContextObjectValue;
-(double)eastLongitude;
-(void)setEastLongitude:(double)arg1 ;
-(double)northLatitude;
-(void)setNorthLatitude:(double)arg1 ;
-(double)southLatitude;
-(void)setSouthLatitude:(double)arg1 ;
-(double)westLongitude;
-(void)setWestLongitude:(double)arg1 ;
-(double)timeSinceViewportChanged;
-(void)setTimeSinceViewportChanged:(double)arg1 ;
-(double)timeSinceViewportEnteredForeground;
-(void)setTimeSinceViewportEnteredForeground:(double)arg1 ;
-(NSArray *)viewportVertices;
-(void)setViewportVertices:(NSArray *)arg1 ;
@end

