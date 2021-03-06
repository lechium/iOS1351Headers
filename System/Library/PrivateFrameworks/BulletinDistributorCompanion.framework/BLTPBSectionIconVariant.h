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

@class NSData;

@interface BLTPBSectionIconVariant : PBCodable <NSCopying> {

	unsigned _format;
	NSData* _imageData;
	BOOL _precomposed;
	SCD_Struct_BL1 _has;

}

@property (assign,nonatomic) unsigned format;                  //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL hasImageData; 
@property (nonatomic,retain) NSData * imageData;               //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) BOOL hasPrecomposed; 
@property (assign,nonatomic) BOOL precomposed;                 //@synthesize precomposed=_precomposed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned)format;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)precomposed;
-(void)setFormat:(unsigned)arg1 ;
-(void)setPrecomposed:(BOOL)arg1 ;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(BOOL)hasImageData;
-(void)setHasPrecomposed:(BOOL)arg1 ;
-(BOOL)hasPrecomposed;
@end

