/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOModality : PBCodable <NSCopying> {

	double _timestamp;
	int _confidence;
	BOOL _expectedModality;
	BOOL _notMoving;
	struct {
		unsigned has_timestamp : 1;
		unsigned has_confidence : 1;
		unsigned has_expectedModality : 1;
		unsigned has_notMoving : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) BOOL hasExpectedModality; 
@property (assign,nonatomic) BOOL expectedModality; 
@property (assign,nonatomic) BOOL hasNotMoving; 
@property (assign,nonatomic) BOOL notMoving; 
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)confidence;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(BOOL)expectedModality;
-(void)setExpectedModality:(BOOL)arg1 ;
-(void)setHasExpectedModality:(BOOL)arg1 ;
-(BOOL)hasExpectedModality;
-(BOOL)notMoving;
-(void)setNotMoving:(BOOL)arg1 ;
-(void)setHasNotMoving:(BOOL)arg1 ;
-(BOOL)hasNotMoving;
-(id)confidenceAsString:(int)arg1 ;
-(int)StringAsConfidence:(id)arg1 ;
@end

