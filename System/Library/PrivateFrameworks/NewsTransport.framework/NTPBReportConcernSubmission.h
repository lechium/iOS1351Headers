/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBReportConcernSubmission : PBCodable <NSCopying> {

	int _cancelLocation;
	int _reportConcernLocation;
	int _resultType;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                             //@synthesize resultType=_resultType - In the implementation block
@property (assign,nonatomic) BOOL hasReportConcernLocation; 
@property (assign,nonatomic) int reportConcernLocation;                  //@synthesize reportConcernLocation=_reportConcernLocation - In the implementation block
@property (assign,nonatomic) BOOL hasCancelLocation; 
@property (assign,nonatomic) int cancelLocation;                         //@synthesize cancelLocation=_cancelLocation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)resultType;
-(void)writeTo:(id)arg1 ;
-(void)setResultType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(int)reportConcernLocation;
-(void)setReportConcernLocation:(int)arg1 ;
-(void)setHasReportConcernLocation:(BOOL)arg1 ;
-(BOOL)hasReportConcernLocation;
-(int)cancelLocation;
-(void)setCancelLocation:(int)arg1 ;
-(void)setHasCancelLocation:(BOOL)arg1 ;
-(BOOL)hasCancelLocation;
@end

