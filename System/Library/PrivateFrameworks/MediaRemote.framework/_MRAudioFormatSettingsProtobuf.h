/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:02 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _MRAudioFormatSettingsProtobuf : PBCodable <NSCopying> {

	NSData* _formatSettingsPlistData;

}

@property (nonatomic,readonly) BOOL hasFormatSettingsPlistData; 
@property (nonatomic,retain) NSData * formatSettingsPlistData;               //@synthesize formatSettingsPlistData=_formatSettingsPlistData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFormatSettingsPlistData:(NSData *)arg1 ;
-(NSData *)formatSettingsPlistData;
-(BOOL)hasFormatSettingsPlistData;
@end
