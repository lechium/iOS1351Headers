/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKWorkout, NSArray;

@interface HKLocationReadings : NSObject <NSSecureCoding> {

	BOOL _isSmoothed;
	HKWorkout* _workout;
	NSArray* _allValidLocations;
	NSArray* _inOrderLocationArrays;
	double _averageSpeed;
	double _topSpeed;
	double _bottomSpeed;

}

@property (nonatomic,readonly) BOOL isSmoothed;                              //@synthesize isSmoothed=_isSmoothed - In the implementation block
@property (nonatomic,readonly) HKWorkout * workout;                          //@synthesize workout=_workout - In the implementation block
@property (nonatomic,readonly) NSArray * allValidLocations;                  //@synthesize allValidLocations=_allValidLocations - In the implementation block
@property (nonatomic,readonly) NSArray * inOrderLocationArrays;              //@synthesize inOrderLocationArrays=_inOrderLocationArrays - In the implementation block
@property (nonatomic,readonly) double averageSpeed;                          //@synthesize averageSpeed=_averageSpeed - In the implementation block
@property (nonatomic,readonly) double topSpeed;                              //@synthesize topSpeed=_topSpeed - In the implementation block
@property (nonatomic,readonly) double bottomSpeed;                           //@synthesize bottomSpeed=_bottomSpeed - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)debugDescription;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(double)averageSpeed;
-(HKWorkout *)workout;
-(void)_filterLocationsByActiveTimePeriod:(id)arg1 ;
-(void)_calculateSpeeds;
-(NSArray *)inOrderLocationArrays;
-(NSArray *)allValidLocations;
-(BOOL)isSmoothed;
-(id)initWithLocations:(id)arg1 workout:(id)arg2 isSmoothed:(BOOL)arg3 ;
-(id)initWithLocation:(id)arg1 workout:(id)arg2 ;
-(double)topSpeed;
-(double)bottomSpeed;
@end

