/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _NMRCommandOptionsProtobuf : PBCodable <NSCopying> {

	double _playbackPosition;
	long long _radioStationID;
	unsigned long long _trackID;
	NSString* _contentItemID;
	NSString* _contextID;
	NSString* _destinationAppDisplayID;
	NSString* _mediaType;
	int _playbackQueueInsertionPosition;
	float _playbackRate;
	NSString* _radioStationHash;
	float _rating;
	int _repeatMode;
	unsigned _sendOptions;
	int _shuffleMode;
	float _skipInterval;
	NSString* _sourceID;
	NSString* _stationURL;
	NSData* _systemAppPlaybackQueueData;
	BOOL _externalPlayerCommand;
	BOOL _negative;
	BOOL _requestDefermentToPlaybackQueuePosition;
	BOOL _shouldBeginRadioPlayback;
	BOOL _shouldOverrideManuallyCuratedQueue;
	SCD_Struct_NM11 _has;

}

@property (nonatomic,readonly) BOOL hasSourceID; 
@property (nonatomic,retain) NSString * sourceID;                                          //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaType; 
@property (nonatomic,retain) NSString * mediaType;                                         //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) BOOL hasExternalPlayerCommand; 
@property (assign,nonatomic) BOOL externalPlayerCommand;                                   //@synthesize externalPlayerCommand=_externalPlayerCommand - In the implementation block
@property (assign,nonatomic) BOOL hasSkipInterval; 
@property (assign,nonatomic) float skipInterval;                                           //@synthesize skipInterval=_skipInterval - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackRate; 
@property (assign,nonatomic) float playbackRate;                                           //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) BOOL hasRating; 
@property (assign,nonatomic) float rating;                                                 //@synthesize rating=_rating - In the implementation block
@property (assign,nonatomic) BOOL hasNegative; 
@property (assign,nonatomic) BOOL negative;                                                //@synthesize negative=_negative - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackPosition; 
@property (assign,nonatomic) double playbackPosition;                                      //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (assign,nonatomic) BOOL hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                               //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                              //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (nonatomic,readonly) BOOL hasContextID; 
@property (nonatomic,retain) NSString * contextID;                                         //@synthesize contextID=_contextID - In the implementation block
@property (assign,nonatomic) BOOL hasTrackID; 
@property (assign,nonatomic) unsigned long long trackID;                                   //@synthesize trackID=_trackID - In the implementation block
@property (assign,nonatomic) BOOL hasRadioStationID; 
@property (assign,nonatomic) long long radioStationID;                                     //@synthesize radioStationID=_radioStationID - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationHash; 
@property (nonatomic,retain) NSString * radioStationHash;                                  //@synthesize radioStationHash=_radioStationHash - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemAppPlaybackQueueData; 
@property (nonatomic,retain) NSData * systemAppPlaybackQueueData;                          //@synthesize systemAppPlaybackQueueData=_systemAppPlaybackQueueData - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationAppDisplayID; 
@property (nonatomic,retain) NSString * destinationAppDisplayID;                           //@synthesize destinationAppDisplayID=_destinationAppDisplayID - In the implementation block
@property (assign,nonatomic) BOOL hasSendOptions; 
@property (assign,nonatomic) unsigned sendOptions;                                         //@synthesize sendOptions=_sendOptions - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDefermentToPlaybackQueuePosition; 
@property (assign,nonatomic) BOOL requestDefermentToPlaybackQueuePosition;                 //@synthesize requestDefermentToPlaybackQueuePosition=_requestDefermentToPlaybackQueuePosition - In the implementation block
@property (assign,nonatomic) BOOL hasShouldOverrideManuallyCuratedQueue; 
@property (assign,nonatomic) BOOL shouldOverrideManuallyCuratedQueue;                      //@synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue - In the implementation block
@property (nonatomic,readonly) BOOL hasStationURL; 
@property (nonatomic,retain) NSString * stationURL;                                        //@synthesize stationURL=_stationURL - In the implementation block
@property (assign,nonatomic) BOOL hasShouldBeginRadioPlayback; 
@property (assign,nonatomic) BOOL shouldBeginRadioPlayback;                                //@synthesize shouldBeginRadioPlayback=_shouldBeginRadioPlayback - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackQueueInsertionPosition; 
@property (assign,nonatomic) int playbackQueueInsertionPosition;                           //@synthesize playbackQueueInsertionPosition=_playbackQueueInsertionPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasContentItemID; 
@property (nonatomic,retain) NSString * contentItemID;                                     //@synthesize contentItemID=_contentItemID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)contextID;
-(void)setContextID:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)trackID;
-(NSString *)mediaType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(BOOL)hasSourceID;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(BOOL)hasRating;
-(void)setMediaType:(NSString *)arg1 ;
-(void)setTrackID:(unsigned long long)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(BOOL)hasMediaType;
-(void)setPlaybackPosition:(double)arg1 ;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(void)setContentItemID:(NSString *)arg1 ;
-(NSString *)contentItemID;
-(double)playbackPosition;
-(BOOL)shouldOverrideManuallyCuratedQueue;
-(void)setShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(NSString *)stationURL;
-(int)shuffleMode;
-(void)setShuffleMode:(int)arg1 ;
-(NSString *)radioStationHash;
-(void)setRadioStationHash:(NSString *)arg1 ;
-(long long)radioStationID;
-(void)setRadioStationID:(long long)arg1 ;
-(void)setNegative:(BOOL)arg1 ;
-(void)setHasPlaybackRate:(BOOL)arg1 ;
-(BOOL)hasPlaybackRate;
-(void)setHasRepeatMode:(BOOL)arg1 ;
-(BOOL)hasRepeatMode;
-(id)repeatModeAsString:(int)arg1 ;
-(int)StringAsRepeatMode:(id)arg1 ;
-(void)setHasShuffleMode:(BOOL)arg1 ;
-(BOOL)hasShuffleMode;
-(id)shuffleModeAsString:(int)arg1 ;
-(int)StringAsShuffleMode:(id)arg1 ;
-(BOOL)hasRadioStationHash;
-(void)setDestinationAppDisplayID:(NSString *)arg1 ;
-(BOOL)hasDestinationAppDisplayID;
-(NSString *)destinationAppDisplayID;
-(BOOL)hasPlaybackPosition;
-(void)setHasPlaybackPosition:(BOOL)arg1 ;
-(void)setSkipInterval:(float)arg1 ;
-(void)setHasSkipInterval:(BOOL)arg1 ;
-(BOOL)hasSkipInterval;
-(float)skipInterval;
-(void)setSystemAppPlaybackQueueData:(NSData *)arg1 ;
-(void)setStationURL:(NSString *)arg1 ;
-(void)setExternalPlayerCommand:(BOOL)arg1 ;
-(void)setHasExternalPlayerCommand:(BOOL)arg1 ;
-(BOOL)hasExternalPlayerCommand;
-(void)setHasRating:(BOOL)arg1 ;
-(void)setHasNegative:(BOOL)arg1 ;
-(BOOL)hasNegative;
-(BOOL)hasContextID;
-(void)setHasTrackID:(BOOL)arg1 ;
-(BOOL)hasTrackID;
-(void)setHasRadioStationID:(BOOL)arg1 ;
-(BOOL)hasRadioStationID;
-(BOOL)hasSystemAppPlaybackQueueData;
-(unsigned)sendOptions;
-(void)setSendOptions:(unsigned)arg1 ;
-(void)setHasSendOptions:(BOOL)arg1 ;
-(BOOL)hasSendOptions;
-(void)setRequestDefermentToPlaybackQueuePosition:(BOOL)arg1 ;
-(void)setHasRequestDefermentToPlaybackQueuePosition:(BOOL)arg1 ;
-(BOOL)hasRequestDefermentToPlaybackQueuePosition;
-(void)setHasShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(BOOL)hasShouldOverrideManuallyCuratedQueue;
-(BOOL)hasStationURL;
-(void)setShouldBeginRadioPlayback:(BOOL)arg1 ;
-(void)setHasShouldBeginRadioPlayback:(BOOL)arg1 ;
-(BOOL)hasShouldBeginRadioPlayback;
-(void)setPlaybackQueueInsertionPosition:(int)arg1 ;
-(void)setHasPlaybackQueueInsertionPosition:(BOOL)arg1 ;
-(BOOL)hasPlaybackQueueInsertionPosition;
-(BOOL)hasContentItemID;
-(BOOL)externalPlayerCommand;
-(BOOL)negative;
-(NSData *)systemAppPlaybackQueueData;
-(BOOL)requestDefermentToPlaybackQueuePosition;
-(BOOL)shouldBeginRadioPlayback;
-(int)playbackQueueInsertionPosition;
@end

