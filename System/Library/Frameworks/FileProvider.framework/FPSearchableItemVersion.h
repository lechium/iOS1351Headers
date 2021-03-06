/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FileProvider-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface FPSearchableItemVersion : PBCodable <NSCopying> {

	NSData* _contentVersion;
	NSData* _metadataVersion;

}

@property (nonatomic,readonly) BOOL hasContentVersion; 
@property (nonatomic,retain) NSData * contentVersion;                //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadataVersion; 
@property (nonatomic,retain) NSData * metadataVersion;               //@synthesize metadataVersion=_metadataVersion - In the implementation block
+(id)stringFromVersion:(id)arg1 ;
+(id)versionFromString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)contentVersion;
-(void)setContentVersion:(NSData *)arg1 ;
-(NSData *)metadataVersion;
-(void)setMetadataVersion:(NSData *)arg1 ;
-(BOOL)hasContentVersion;
-(BOOL)hasMetadataVersion;
@end

