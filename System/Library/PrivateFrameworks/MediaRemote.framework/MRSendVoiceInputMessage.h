/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@class MRAudioDataBlock, MRAudioBuffer;

@interface MRSendVoiceInputMessage : MRProtocolMessage {

	MRAudioDataBlock* _dataBlock;

}

@property (nonatomic,readonly) MRAudioBuffer * buffer; 
@property (nonatomic,readonly) SCD_Struct_MR14 time; 
@property (nonatomic,readonly) float gain; 
-(unsigned long long)type;
-(unsigned long long)priority;
-(SCD_Struct_MR14)time;
-(MRAudioBuffer *)buffer;
-(float)gain;
-(void)_initializeDataIfNecessary;
-(id)initWithBuffer:(id)arg1 time:(SCD_Struct_MR14)arg2 gain:(float)arg3 ;
@end

