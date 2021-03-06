/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:59 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyRPC/TelephonyRPC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NanoPhoneVoicemailBody : PBCodable <NSCopying> {

	long long _voicemailNumber;
	NSData* _voicemailRecording;

}

@property (assign,nonatomic) long long voicemailNumber;                 //@synthesize voicemailNumber=_voicemailNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasVoicemailRecording; 
@property (nonatomic,retain) NSData * voicemailRecording;               //@synthesize voicemailRecording=_voicemailRecording - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)voicemailNumber;
-(void)setVoicemailNumber:(long long)arg1 ;
-(void)setVoicemailRecording:(NSData *)arg1 ;
-(BOOL)hasVoicemailRecording;
-(NSData *)voicemailRecording;
@end

