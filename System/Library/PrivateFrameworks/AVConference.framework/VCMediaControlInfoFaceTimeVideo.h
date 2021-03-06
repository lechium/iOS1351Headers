/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaControlInfo.h>

@interface VCMediaControlInfoFaceTimeVideo : VCMediaControlInfo {

	unsigned char _controlInfoCameraStatus;
	unsigned char _controlInfoLTRBits;
	unsigned _controlInfoLTRTimestamp;
	SCD_Struct_VC101 _controlInfoFrameExtensionData;
	unsigned char _controlInfoFEC[36];
	unsigned long long _controlInfoFECLength;
	unsigned _controlInfoProbe;
	unsigned _controlInfoReceivedKbits;
	unsigned _controlInfoReceivedPackets;
	unsigned _controlInfoVideoPacketSize;
	unsigned _controlInfoVideoTimestamp;
	double _controlInfoVideoArrivalTime;

}
-(id)description;
-(int)configureWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC78*)arg3 ;
-(int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned)arg3 ;
-(BOOL)hasInfoType:(unsigned)arg1 ;
-(int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned)arg4 ;
-(int)serializeToBuffer:(char*)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3 ;
-(unsigned long long)serializedSize;
-(int)handleOptionalControlInfo:(SCD_Struct_VC78*)arg1 ;
@end

