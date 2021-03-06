/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveExperiments/ProactiveExperiments-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PREUMTrialExperiment, NSMutableArray, PREUMMessageMetadata;

@interface PREUMResponseList : PBCodable <NSCopying> {

	unsigned long long _responseTimePerf;
	PREUMTrialExperiment* _experiment;
	int _generationStatus;
	NSMutableArray* _items;
	PREUMMessageMetadata* _msgMetadata;
	BOOL _isCached;
	SCD_Struct_PR3 _has;

}

@property (nonatomic,readonly) BOOL hasExperiment; 
@property (nonatomic,retain) PREUMTrialExperiment * experiment;                //@synthesize experiment=_experiment - In the implementation block
@property (nonatomic,readonly) BOOL hasMsgMetadata; 
@property (nonatomic,retain) PREUMMessageMetadata * msgMetadata;               //@synthesize msgMetadata=_msgMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                           //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL hasIsCached; 
@property (assign,nonatomic) BOOL isCached;                                    //@synthesize isCached=_isCached - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTimePerf; 
@property (assign,nonatomic) unsigned long long responseTimePerf;              //@synthesize responseTimePerf=_responseTimePerf - In the implementation block
@property (assign,nonatomic) BOOL hasGenerationStatus; 
@property (assign,nonatomic) int generationStatus;                             //@synthesize generationStatus=_generationStatus - In the implementation block
+(Class)itemsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(unsigned long long)itemsCount;
-(void)addItems:(id)arg1 ;
-(BOOL)isCached;
-(void)setIsCached:(BOOL)arg1 ;
-(void)clearItems;
-(id)itemsAtIndex:(unsigned long long)arg1 ;
-(PREUMTrialExperiment *)experiment;
-(void)setHasIsCached:(BOOL)arg1 ;
-(BOOL)hasIsCached;
-(void)setExperiment:(PREUMTrialExperiment *)arg1 ;
-(BOOL)hasExperiment;
-(BOOL)hasMsgMetadata;
-(int)generationStatus;
-(void)setGenerationStatus:(int)arg1 ;
-(void)setHasGenerationStatus:(BOOL)arg1 ;
-(BOOL)hasGenerationStatus;
-(id)generationStatusAsString:(int)arg1 ;
-(int)StringAsGenerationStatus:(id)arg1 ;
-(PREUMMessageMetadata *)msgMetadata;
-(void)setMsgMetadata:(PREUMMessageMetadata *)arg1 ;
-(void)setResponseTimePerf:(unsigned long long)arg1 ;
-(void)setHasResponseTimePerf:(BOOL)arg1 ;
-(BOOL)hasResponseTimePerf;
-(unsigned long long)responseTimePerf;
@end

