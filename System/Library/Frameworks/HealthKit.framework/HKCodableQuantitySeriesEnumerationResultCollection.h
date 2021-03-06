/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HKCodableQuantitySeriesEnumerationResultCollection : PBCodable <NSCopying> {

	double _latestSampleStartTime;
	NSMutableArray* _results;
	SCD_Struct_HK10 _has;

}

@property (nonatomic,retain) NSMutableArray * results;                   //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) BOOL hasLatestSampleStartTime; 
@property (assign,nonatomic) double latestSampleStartTime;               //@synthesize latestSampleStartTime=_latestSampleStartTime - In the implementation block
+(Class)resultsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)results;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setResults:(NSMutableArray *)arg1 ;
-(void)addResults:(id)arg1 ;
-(void)clearResults;
-(unsigned long long)resultsCount;
-(id)resultsAtIndex:(unsigned long long)arg1 ;
-(void)setLatestSampleStartTime:(double)arg1 ;
-(void)setHasLatestSampleStartTime:(BOOL)arg1 ;
-(BOOL)hasLatestSampleStartTime;
-(double)latestSampleStartTime;
@end

