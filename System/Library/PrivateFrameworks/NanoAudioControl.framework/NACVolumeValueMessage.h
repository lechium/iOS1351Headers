/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NACVolumeValueMessage : PBCodable <NSCopying> {

	NSString* _category;
	int _originIdentifier;
	float _volumeValue;
	SCD_Struct_NA1 _has;

}

@property (assign,nonatomic) BOOL hasVolumeValue; 
@property (assign,nonatomic) float volumeValue;                     //@synthesize volumeValue=_volumeValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                   //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                  //@synthesize originIdentifier=_originIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasCategory;
-(int)originIdentifier;
-(float)volumeValue;
-(void)setVolumeValue:(float)arg1 ;
-(void)setOriginIdentifier:(int)arg1 ;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
-(void)setHasVolumeValue:(BOOL)arg1 ;
-(BOOL)hasVolumeValue;
@end
