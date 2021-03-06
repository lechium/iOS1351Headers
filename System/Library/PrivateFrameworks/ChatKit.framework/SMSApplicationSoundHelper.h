/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TLAlert;

@interface SMSApplicationSoundHelper : NSObject {

	TLAlert* _alert;
	BOOL _bulletinSuppressed;

}

@property (assign,nonatomic) BOOL bulletinSuppressed;              //@synthesize bulletinSuppressed=_bulletinSuppressed - In the implementation block
-(BOOL)_shouldPlayTapbackSound;
-(void)stopPlayingAlert;
-(void)playSendSoundForMessage:(id)arg1 ;
-(BOOL)shouldPlayDefaultSendSoundForMessageInCurrentTranscript:(id)arg1 ;
-(BOOL)allowedByScreenTimeToPlayReceiveSoundForChat:(id)arg1 ;
-(void)playIncomingMessageSoundAndHapticForMessage:(id)arg1 messageIsForCurrentTranscript:(BOOL)arg2 ;
-(BOOL)bulletinSuppressed;
-(void)setBulletinSuppressed:(BOOL)arg1 ;
@end

