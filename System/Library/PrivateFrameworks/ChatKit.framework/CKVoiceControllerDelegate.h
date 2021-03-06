/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKVoiceControllerDelegate <NSObject>
@required
-(void)voiceControllerDidDetectStartpoint:(id)arg1;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
-(void)voiceControllerDidStartRecording:(id)arg1;
-(void)voiceControllerDidFinishRecording:(id)arg1 successfully:(BOOL)arg2;
-(void)voiceController:(id)arg1 didUpdateAveragePower:(float)arg2;

@end

