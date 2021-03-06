//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, RPRecordingSession;

@protocol RPRecordingSessionDelegate <NSObject>
- (void)recordingSessionClientDidEnterForeground:(RPRecordingSession *)arg1;
- (void)recordingSessionClientDidEnterBackground:(RPRecordingSession *)arg1;
- (void)broadcastSession:(RPRecordingSession *)arg1 didUpdateDuration:(double)arg2;
- (void)broadcastSession:(RPRecordingSession *)arg1 didUpdateServiceInfo:(NSDictionary *)arg2;
- (void)recordingSession:(RPRecordingSession *)arg1 stoppedWithError:(NSError *)arg2;
@end

