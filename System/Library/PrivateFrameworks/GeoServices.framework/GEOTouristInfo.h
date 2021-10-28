/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTouristInfo : PBCodable <NSCopying> {

	double _fetchTimestamp;
	BOOL _isTourist;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasIsTourist; 
@property (assign,nonatomic) BOOL isTourist; 
@property (assign,nonatomic) BOOL hasFetchTimestamp; 
@property (assign,nonatomic) double fetchTimestamp; 
+(BOOL)isValid:(id)arg1 ;
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
-(BOOL)isTourist;
-(void)setIsTourist:(BOOL)arg1 ;
-(void)setHasIsTourist:(BOOL)arg1 ;
-(BOOL)hasIsTourist;
-(void)setFetchTimestamp:(double)arg1 ;
-(double)fetchTimestamp;
-(void)setHasFetchTimestamp:(BOOL)arg1 ;
-(BOOL)hasFetchTimestamp;
@end
