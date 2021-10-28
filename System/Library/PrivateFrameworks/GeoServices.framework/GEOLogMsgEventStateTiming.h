/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying> {

	double _durationInOldState;
	NSMutableArray* _stateTransitionFeedbacks;
	SCD_Struct_GE99 _flags;

}

@property (nonatomic,retain) NSMutableArray * stateTransitionFeedbacks; 
@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState; 
+(BOOL)isValid:(id)arg1 ;
+(Class)stateTransitionFeedbackType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addStateTransitionFeedback:(id)arg1 ;
-(unsigned long long)stateTransitionFeedbacksCount;
-(void)clearStateTransitionFeedbacks;
-(id)stateTransitionFeedbackAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)stateTransitionFeedbacks;
-(void)setStateTransitionFeedbacks:(NSMutableArray *)arg1 ;
-(double)durationInOldState;
-(void)setDurationInOldState:(double)arg1 ;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(BOOL)hasDurationInOldState;
@end
