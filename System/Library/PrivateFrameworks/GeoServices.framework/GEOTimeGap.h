/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTimeGap : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _seconds;
	unsigned _subsequentEventId;
	BOOL _ifChained;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasSubsequentEventId; 
@property (assign,nonatomic) unsigned subsequentEventId; 
@property (assign,nonatomic) BOOL hasSeconds; 
@property (assign,nonatomic) unsigned seconds; 
@property (assign,nonatomic) BOOL hasIfChained; 
@property (assign,nonatomic) BOOL ifChained; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)seconds;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)subsequentEventId;
-(BOOL)ifChained;
-(void)setSeconds:(unsigned)arg1 ;
-(void)setSubsequentEventId:(unsigned)arg1 ;
-(void)setHasSubsequentEventId:(BOOL)arg1 ;
-(BOOL)hasSubsequentEventId;
-(void)setHasSeconds:(BOOL)arg1 ;
-(BOOL)hasSeconds;
-(void)setIfChained:(BOOL)arg1 ;
-(void)setHasIfChained:(BOOL)arg1 ;
-(BOOL)hasIfChained;
@end

