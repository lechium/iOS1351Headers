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

@class NSData;

@interface HKHealthWrapCodableMessageKey : PBCodable <NSCopying> {

	NSData* _iv;
	NSData* _key;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSData * key;               //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasIv; 
@property (nonatomic,retain) NSData * iv;                //@synthesize iv=_iv - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasKey;
-(void)setIv:(NSData *)arg1 ;
-(BOOL)hasIv;
-(NSData *)iv;
@end
