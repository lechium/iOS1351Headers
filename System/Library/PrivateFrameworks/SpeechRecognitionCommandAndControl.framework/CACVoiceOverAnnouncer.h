/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, CACVoiceOverAnnouncement;

@interface CACVoiceOverAnnouncer : NSObject {

	NSObject*<OS_dispatch_queue> _announcerQueue;
	BOOL _shouldInterruptCurrentAnnouncement;
	NSMutableArray* _voiceOverAnnouncementQueue;
	CACVoiceOverAnnouncement* _currentAnnouncement;

}

@property (nonatomic,retain) NSMutableArray * voiceOverAnnouncementQueue;                 //@synthesize voiceOverAnnouncementQueue=_voiceOverAnnouncementQueue - In the implementation block
@property (nonatomic,retain) CACVoiceOverAnnouncement * currentAnnouncement;              //@synthesize currentAnnouncement=_currentAnnouncement - In the implementation block
@property (assign,nonatomic) BOOL shouldInterruptCurrentAnnouncement;                     //@synthesize shouldInterruptCurrentAnnouncement=_shouldInterruptCurrentAnnouncement - In the implementation block
-(id)init;
-(void)_didFinishAnnouncement:(id)arg1 ;
-(NSMutableArray *)voiceOverAnnouncementQueue;
-(CACVoiceOverAnnouncement *)currentAnnouncement;
-(BOOL)shouldInterruptCurrentAnnouncement;
-(void)_dequeueNextAnnouncement;
-(void)setShouldInterruptCurrentAnnouncement:(BOOL)arg1 ;
-(void)setCurrentAnnouncement:(CACVoiceOverAnnouncement *)arg1 ;
-(void)announceMessage:(id)arg1 type:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)prepareForImmediateAnnouncement;
-(void)setVoiceOverAnnouncementQueue:(NSMutableArray *)arg1 ;
@end
