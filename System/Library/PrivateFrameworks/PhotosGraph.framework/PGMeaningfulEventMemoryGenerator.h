/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate, NSString;

@interface PGMeaningfulEventMemoryGenerator : PGFeaturedMemoryGenerator {

	BOOL _skipsCollectionTitle;
	NSDate* _lowerBoundLocalDate;
	unsigned long long _eventType;
	unsigned long long _meaning;
	NSString* _meaningfulEventUUID;
	unsigned long long _memoryCategory;

}

@property (nonatomic,retain) NSDate * lowerBoundLocalDate;                   //@synthesize lowerBoundLocalDate=_lowerBoundLocalDate - In the implementation block
@property (assign,nonatomic) unsigned long long eventType;                   //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) unsigned long long meaning;                     //@synthesize meaning=_meaning - In the implementation block
@property (nonatomic,retain) NSString * meaningfulEventUUID;                 //@synthesize meaningfulEventUUID=_meaningfulEventUUID - In the implementation block
@property (assign,nonatomic) BOOL skipsCollectionTitle;                      //@synthesize skipsCollectionTitle=_skipsCollectionTitle - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCategory;              //@synthesize memoryCategory=_memoryCategory - In the implementation block
-(unsigned long long)eventType;
-(void)setEventType:(unsigned long long)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)setMemoryCategory:(unsigned long long)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(NSDate *)lowerBoundLocalDate;
-(void)setLowerBoundLocalDate:(NSDate *)arg1 ;
-(unsigned long long)meaning;
-(void)setMeaning:(unsigned long long)arg1 ;
-(unsigned long long)memoryCategory;
-(id)_additionalInfoKeywordsForPotentialMemory:(id)arg1 ;
-(NSString *)meaningfulEventUUID;
-(void)setMeaningfulEventUUID:(NSString *)arg1 ;
-(BOOL)skipsCollectionTitle;
-(void)setSkipsCollectionTitle:(BOOL)arg1 ;
@end

