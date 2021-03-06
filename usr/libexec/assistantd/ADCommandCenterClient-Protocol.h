//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADCommandCenterRequestDelegate-Protocol.h"
#import "ADCommandCenterSpeechDelegate-Protocol.h"

@class INImage, INIntent, NSDictionary, NSError, NSString, NSURL;

@protocol ADCommandCenterClient <ADCommandCenterRequestDelegate, ADCommandCenterSpeechDelegate>
- (void)adAudioSessionDidBecomeActive:(_Bool)arg1;
- (void)adAudioSessionWillBecomeActive:(_Bool)arg1;
- (void)adRequestDidHandleFailedStartPlayback:(long long)arg1;
- (void)adRequestWillProcessStartPlayback:(long long)arg1 intent:(INIntent *)arg2 completion:(void (^)(_Bool, _Bool))arg3;
- (void)adStartUIRequestWithText:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)adExtensionRequestFinishedForApplication:(NSString *)arg1 error:(NSError *)arg2;
- (void)adExtensionRequestWillStartForApplication:(NSString *)arg1;
- (void)adWantsToCacheImage:(INImage *)arg1;
- (void)adQuickStopWasHandledWithActions:(unsigned long long)arg1;
- (void)adRequestRequestedDismissAssistant;
- (void)adServerRequestsTTSStateUnmuted:(_Bool)arg1;
- (void)adInvalidateCurrentUserActivity;
- (void)adSetUserActivityInfo:(NSDictionary *)arg1 webpageURL:(NSURL *)arg2;
- (void)adAcousticIDRequestDidFinishSuccessfully:(_Bool)arg1;
- (void)adMusicWasDetected;
- (void)adAcousticIDRequestWillStart;
- (_Bool)adTextToSpeechIsMuted;
- (void)adGetClockContext:(void (^)(AFClockAlarmSnapshot *, AFClockTimerSnapshot *))arg1;
- (void)adGetBulletinContext:(void (^)(NSArray *))arg1;
- (void)adRequestRequestedOpenURL:(NSURL *)arg1 completion:(void (^)(_Bool))arg2;
- (void)adRequestRequestedOpenApplicationWithBundleID:(NSString *)arg1 URL:(NSURL *)arg2 completion:(void (^)(_Bool))arg3;
@end

