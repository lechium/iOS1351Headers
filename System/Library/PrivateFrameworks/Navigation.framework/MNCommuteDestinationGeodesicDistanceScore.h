/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/MNCommuteDestinationScore.h>
#import <libobjc.A.dylib/MNCommuteDestinationLocationScore.h>

@class NSMutableArray;

@interface MNCommuteDestinationGeodesicDistanceScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore> {

	int _score;
	NSMutableArray* _geodesicDistances;
	double _slope;

}

@property (nonatomic,retain) NSMutableArray * geodesicDistances;              //@synthesize geodesicDistances=_geodesicDistances - In the implementation block
@property (assign,nonatomic) double slope;                                    //@synthesize slope=_slope - In the implementation block
+(double)weight;
-(int)score;
-(void)updateForLocation:(id)arg1 ;
-(id)initWithDestination:(id)arg1 ;
-(double)slope;
-(void)setSlope:(double)arg1 ;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(id)descriptionExtras;
-(void)_updateScoreAndDestinationInvalid;
-(NSMutableArray *)geodesicDistances;
-(void)setGeodesicDistances:(NSMutableArray *)arg1 ;
@end

