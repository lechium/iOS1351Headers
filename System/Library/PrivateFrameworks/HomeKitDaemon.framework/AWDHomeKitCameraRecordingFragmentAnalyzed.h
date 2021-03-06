/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitCameraRecordingFragmentAnalyzed : PBCodable <NSCopying> {

	unsigned long long _analysisResultCode;
	unsigned long long _duration;
	unsigned long long _sequenceNumber;
	unsigned long long _timestamp;
	NSString* _cameraUUID;
	NSString* _clipModelID;
	int _recordingReason;
	NSString* _sessionUUID;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasCameraUUID; 
@property (nonatomic,retain) NSString * cameraUUID;                              //@synthesize cameraUUID=_cameraUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                             //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned long long sequenceNumber;                  //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasAnalysisResultCode; 
@property (assign,nonatomic) unsigned long long analysisResultCode;              //@synthesize analysisResultCode=_analysisResultCode - In the implementation block
@property (nonatomic,readonly) BOOL hasClipModelID; 
@property (nonatomic,retain) NSString * clipModelID;                             //@synthesize clipModelID=_clipModelID - In the implementation block
@property (assign,nonatomic) BOOL hasRecordingReason; 
@property (assign,nonatomic) int recordingReason;                                //@synthesize recordingReason=_recordingReason - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(void)setHasDuration:(BOOL)arg1 ;
-(NSString *)sessionUUID;
-(void)setSessionUUID:(NSString *)arg1 ;
-(NSString *)clipModelID;
-(unsigned long long)analysisResultCode;
-(int)recordingReason;
-(void)setAnalysisResultCode:(unsigned long long)arg1 ;
-(void)setClipModelID:(NSString *)arg1 ;
-(void)setRecordingReason:(int)arg1 ;
-(void)setCameraUUID:(NSString *)arg1 ;
-(NSString *)cameraUUID;
-(BOOL)hasCameraUUID;
-(BOOL)hasSessionUUID;
-(void)setHasAnalysisResultCode:(BOOL)arg1 ;
-(BOOL)hasAnalysisResultCode;
-(BOOL)hasClipModelID;
-(void)setHasRecordingReason:(BOOL)arg1 ;
-(BOOL)hasRecordingReason;
-(id)recordingReasonAsString:(int)arg1 ;
-(int)StringAsRecordingReason:(id)arg1 ;
@end

