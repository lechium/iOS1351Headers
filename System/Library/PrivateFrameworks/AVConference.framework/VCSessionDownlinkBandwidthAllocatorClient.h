/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray, NSNumber;


@protocol VCSessionDownlinkBandwidthAllocatorClient
@property (readonly) NSString * uuid; 
@property (readonly) NSArray * mediaEntries; 
@property (readonly) unsigned actualNetworkBitrateVideo; 
@property (readonly) unsigned actualNetworkBitrateAudio; 
@property (readonly) unsigned optedInNetworkBitrateVideo; 
@property (readonly) unsigned optedInNetworkBitrateAudio; 
@property (readonly) NSNumber * optedInVideoStreamID; 
@property (readonly) NSNumber * optedInAudioStreamID; 
@property (readonly) unsigned short activeDownlinkVideoStreamID; 
@property (readonly) unsigned short activeDownlinkAudioStreamID; 
@property (readonly) unsigned char videoQuality; 
@property (readonly) unsigned visibilityIndex; 
@property (readonly) unsigned prominenceIndex; 
@property (readonly) BOOL isVisible; 
@property (assign,getter=isVideoSuspended,nonatomic) BOOL videoSuspended; 
@required
-(NSString *)uuid;
-(BOOL)isVisible;
-(unsigned char)videoQuality;
-(unsigned)visibilityIndex;
-(unsigned)prominenceIndex;
-(NSArray *)mediaEntries;
-(unsigned)actualNetworkBitrateVideo;
-(unsigned)actualNetworkBitrateAudio;
-(unsigned)optedInNetworkBitrateVideo;
-(unsigned)optedInNetworkBitrateAudio;
-(NSNumber *)optedInVideoStreamID;
-(NSNumber *)optedInAudioStreamID;
-(unsigned short)activeDownlinkVideoStreamID;
-(unsigned short)activeDownlinkAudioStreamID;
-(BOOL)isVideoSuspended;
-(void)setVideoSuspended:(BOOL)arg1;

@end

