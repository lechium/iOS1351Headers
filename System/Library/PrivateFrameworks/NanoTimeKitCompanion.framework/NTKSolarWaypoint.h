/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NTKCacheableKeyProvider.h>

@class NSDate, NSString, NTKSolarTimeModel;

@interface NTKSolarWaypoint : NSObject <NTKCacheableKeyProvider> {

	long long _type;
	NSDate* _waypointDate;
	NSString* _localizedName;
	NTKSolarTimeModel* _solarTimeModel;
	double _percentageThroughPeriodForWaypointDate;

}

@property (nonatomic,readonly) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NTKSolarTimeModel * solarTimeModel;                         //@synthesize solarTimeModel=_solarTimeModel - In the implementation block
@property (nonatomic,readonly) NSDate * waypointDate;                                      //@synthesize waypointDate=_waypointDate - In the implementation block
@property (nonatomic,readonly) double percentageThroughPeriodForWaypointDate;              //@synthesize percentageThroughPeriodForWaypointDate=_percentageThroughPeriodForWaypointDate - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(long long)type;
-(NSString *)localizedName;
-(id)ntkCacheableKey;
-(id)initWithType:(long long)arg1 solarTimeModel:(id)arg2 ;
-(void)updateDependentValues;
-(void)updateDependentValuesWithPlaceholderData;
-(NTKSolarTimeModel *)solarTimeModel;
-(NSDate *)waypointDate;
-(double)percentageThroughPeriodForWaypointDate;
@end
