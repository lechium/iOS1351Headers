/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber;

@interface HAMenstrualAlgorithmsHistoricalCycle : NSObject {

	BOOL _isDeterminant;
	unsigned _julianDayOfMenstruationStart;
	unsigned _julianDayOfMenstruationEnd;
	NSNumber* _fertilityStartJulianDay;
	NSNumber* _fertilityEndJulianDay;

}

@property (nonatomic,retain) NSNumber * fertilityStartJulianDay;                 //@synthesize fertilityStartJulianDay=_fertilityStartJulianDay - In the implementation block
@property (nonatomic,retain) NSNumber * fertilityEndJulianDay;                   //@synthesize fertilityEndJulianDay=_fertilityEndJulianDay - In the implementation block
@property (assign,nonatomic) unsigned julianDayOfMenstruationStart;              //@synthesize julianDayOfMenstruationStart=_julianDayOfMenstruationStart - In the implementation block
@property (assign,nonatomic) unsigned julianDayOfMenstruationEnd;                //@synthesize julianDayOfMenstruationEnd=_julianDayOfMenstruationEnd - In the implementation block
@property (assign,nonatomic) BOOL isDeterminant;                                 //@synthesize isDeterminant=_isDeterminant - In the implementation block
-(NSNumber *)fertilityStartJulianDay;
-(void)setFertilityStartJulianDay:(NSNumber *)arg1 ;
-(NSNumber *)fertilityEndJulianDay;
-(void)setFertilityEndJulianDay:(NSNumber *)arg1 ;
-(unsigned)julianDayOfMenstruationStart;
-(void)setJulianDayOfMenstruationStart:(unsigned)arg1 ;
-(unsigned)julianDayOfMenstruationEnd;
-(void)setJulianDayOfMenstruationEnd:(unsigned)arg1 ;
-(BOOL)isDeterminant;
-(void)setIsDeterminant:(BOOL)arg1 ;
@end

