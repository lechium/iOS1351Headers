/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TinCanShared/TinCanShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDTinCanInCallEvent : PBCodable <NSCopying> {

	long long _offsetTimeMs;
	unsigned _eventType;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasOffsetTimeMs; 
@property (assign,nonatomic) long long offsetTimeMs;              //@synthesize offsetTimeMs=_offsetTimeMs - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                  //@synthesize eventType=_eventType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)eventType;
-(void)setEventType:(unsigned)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(void)setOffsetTimeMs:(long long)arg1 ;
-(void)setHasOffsetTimeMs:(BOOL)arg1 ;
-(BOOL)hasOffsetTimeMs;
-(long long)offsetTimeMs;
@end

