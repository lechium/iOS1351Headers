/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRClientUpdatesConfigurationProtobuf : PBCodable <NSCopying> {

	BOOL _artworkUpdates;
	BOOL _keyboardUpdates;
	BOOL _nowPlayingUpdates;
	BOOL _outputDeviceUpdates;
	BOOL _volumeUpdates;
	SCD_Struct_MR17 _has;

}

@property (assign,nonatomic) BOOL hasNowPlayingUpdates; 
@property (assign,nonatomic) BOOL nowPlayingUpdates;                   //@synthesize nowPlayingUpdates=_nowPlayingUpdates - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkUpdates; 
@property (assign,nonatomic) BOOL artworkUpdates;                      //@synthesize artworkUpdates=_artworkUpdates - In the implementation block
@property (assign,nonatomic) BOOL hasVolumeUpdates; 
@property (assign,nonatomic) BOOL volumeUpdates;                       //@synthesize volumeUpdates=_volumeUpdates - In the implementation block
@property (assign,nonatomic) BOOL hasKeyboardUpdates; 
@property (assign,nonatomic) BOOL keyboardUpdates;                     //@synthesize keyboardUpdates=_keyboardUpdates - In the implementation block
@property (assign,nonatomic) BOOL hasOutputDeviceUpdates; 
@property (assign,nonatomic) BOOL outputDeviceUpdates;                 //@synthesize outputDeviceUpdates=_outputDeviceUpdates - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setNowPlayingUpdates:(BOOL)arg1 ;
-(void)setArtworkUpdates:(BOOL)arg1 ;
-(void)setVolumeUpdates:(BOOL)arg1 ;
-(void)setKeyboardUpdates:(BOOL)arg1 ;
-(void)setOutputDeviceUpdates:(BOOL)arg1 ;
-(BOOL)nowPlayingUpdates;
-(BOOL)artworkUpdates;
-(BOOL)volumeUpdates;
-(BOOL)keyboardUpdates;
-(BOOL)outputDeviceUpdates;
-(void)setHasNowPlayingUpdates:(BOOL)arg1 ;
-(BOOL)hasNowPlayingUpdates;
-(void)setHasArtworkUpdates:(BOOL)arg1 ;
-(BOOL)hasArtworkUpdates;
-(void)setHasVolumeUpdates:(BOOL)arg1 ;
-(BOOL)hasVolumeUpdates;
-(void)setHasKeyboardUpdates:(BOOL)arg1 ;
-(BOOL)hasKeyboardUpdates;
-(void)setHasOutputDeviceUpdates:(BOOL)arg1 ;
-(BOOL)hasOutputDeviceUpdates;
@end

