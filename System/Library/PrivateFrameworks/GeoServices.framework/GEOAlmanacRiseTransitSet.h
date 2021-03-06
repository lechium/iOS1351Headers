/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class GEOCelestialRiseTransitSet, NSDate;

@interface GEOAlmanacRiseTransitSet : NSObject {

	GEOCelestialRiseTransitSet* _celestialRiseTransitSet;
	unsigned long long _firstEventType;
	unsigned long long _lastEventType;

}

@property (nonatomic,readonly) NSDate * rise; 
@property (nonatomic,readonly) NSDate * transit; 
@property (nonatomic,readonly) NSDate * set; 
@property (nonatomic,readonly) CAARiseTransitSetDetails riseTransitSet; 
@property (nonatomic,readonly) unsigned long long firstEventType; 
@property (nonatomic,readonly) unsigned long long lastEventType; 
@property (nonatomic,readonly) NSDate * firstEventDate; 
@property (nonatomic,readonly) NSDate * lastEventDate; 
-(id)description;
-(NSDate *)set;
-(NSDate *)rise;
-(NSDate *)transit;
-(CAARiseTransitSetDetails)riseTransitSet;
-(void)_calculateFirstAndLastEvents;
-(unsigned long long)firstEventType;
-(unsigned long long)lastEventType;
-(NSDate *)firstEventDate;
-(NSDate *)lastEventDate;
-(id)initWith:(id)arg1 ;
-(long long)compareToDate:(id)arg1 ;
-(BOOL)isCompatibleWith:(id)arg1 ;
@end

