/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBDate : PBCodable <NSCopying> {

	double _timeIntervalSince1970;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasTimeIntervalSince1970; 
@property (assign,nonatomic) double timeIntervalSince1970;               //@synthesize timeIntervalSince1970=_timeIntervalSince1970 - In the implementation block
-(double)timeIntervalSince1970;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTimeIntervalSince1970:(double)arg1 ;
-(void)setHasTimeIntervalSince1970:(BOOL)arg1 ;
-(BOOL)hasTimeIntervalSince1970;
@end

