/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVCSessionParticipantDelegate <NSObject>
@optional
-(void)participant:(id)arg1 audioEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)participant:(id)arg1 videoEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)participant:(id)arg1 audioPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)participant:(id)arg1 videoPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)participant:(id)arg1 remoteAudioEnabledDidChange:(BOOL)arg2;
-(void)participant:(id)arg1 remoteVideoEnabledDidChange:(BOOL)arg2;
-(void)participant:(id)arg1 remoteAudioPausedDidChange:(BOOL)arg2;
-(void)participant:(id)arg1 remoteVideoPausedDidChange:(BOOL)arg2;
-(void)participant:(id)arg1 prominenceDidChange:(id)arg2;
-(void)participant:(id)arg1 mediaPrioritiesDidChange:(id)arg2;
-(void)participant:(id)arg1 spatialAudioSourceIDDidChange:(unsigned long long)arg2;

@end

