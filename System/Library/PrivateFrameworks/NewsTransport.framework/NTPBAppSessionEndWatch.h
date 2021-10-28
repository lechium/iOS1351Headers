/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBAppSessionEndWatch : PBCodable <NSCopying> {

	long long _watchAppSessionDuration;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasWatchAppSessionDuration; 
@property (assign,nonatomic) long long watchAppSessionDuration;              //@synthesize watchAppSessionDuration=_watchAppSessionDuration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setWatchAppSessionDuration:(long long)arg1 ;
-(void)setHasWatchAppSessionDuration:(BOOL)arg1 ;
-(BOOL)hasWatchAppSessionDuration;
-(long long)watchAppSessionDuration;
@end
