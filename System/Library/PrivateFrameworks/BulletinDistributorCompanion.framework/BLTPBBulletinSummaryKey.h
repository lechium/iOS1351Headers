/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface BLTPBBulletinSummaryKey : PBCodable <NSCopying> {

	NSString* _key;
	NSData* _value;
	NSData* _valueNulls;

}

@property (nonatomic,retain) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSData * value;                    //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasValueNulls; 
@property (nonatomic,retain) NSData * valueNulls;               //@synthesize valueNulls=_valueNulls - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(NSData *)value;
-(void)setValue:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasValue;
-(void)setValueNulls:(NSData *)arg1 ;
-(BOOL)hasValueNulls;
-(NSData *)valueNulls;
@end

