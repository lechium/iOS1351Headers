/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VoiceTriggerNotificationInterface.h>

@protocol VoiceTriggerNotificationInterface;
@interface AVVoiceTriggerNotificationForwarder : NSObject <VoiceTriggerNotificationInterface> {

	id<VoiceTriggerNotificationInterface> _target;

}

@property (assign,nonatomic) id<VoiceTriggerNotificationInterface> target;              //@synthesize target=_target - In the implementation block
-(void)setTarget:(id<VoiceTriggerNotificationInterface>)arg1 ;
-(id<VoiceTriggerNotificationInterface>)target;
-(void)voiceTriggerNotification:(id)arg1 ;
-(void)speakerStateChangedNotification:(id)arg1 ;
-(void)speakerMuteStateChangedNotification:(BOOL)arg1 ;
-(void)siriClientRecordStateChangedNotification:(BOOL)arg1 recordingCount:(unsigned long long)arg2 ;
@end

