//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RPScreenCaptureManager.h"

#import "FigScreenCaptureFrameHandlerDelegate-Protocol.h"

@class FigScreenCaptureController, NSString;

@interface RPScreenCaptureManagerIOS : RPScreenCaptureManager <FigScreenCaptureFrameHandlerDelegate>
{
    _Bool _screenCaptureDidStart;	// 8 = 0x8
    FigScreenCaptureController *_screenCaptureController;	// 16 = 0x10
    CDUnknownBlockType _didStartScreenCaptureHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100016aa0
@property(copy, nonatomic) CDUnknownBlockType didStartScreenCaptureHandler; // @synthesize didStartScreenCaptureHandler=_didStartScreenCaptureHandler;
@property(nonatomic) _Bool screenCaptureDidStart; // @synthesize screenCaptureDidStart=_screenCaptureDidStart;
@property(retain, nonatomic) FigScreenCaptureController *screenCaptureController; // @synthesize screenCaptureController=_screenCaptureController;
- (void)screenCaptureControllerMediaServicesWereReset:(id)arg1;	// IMP=0x00000001000169c4
- (void)screenCaptureControllerWasPreempted:(id)arg1;	// IMP=0x0000000100016948
- (void)screenCaptureController:(id)arg1 didFailWithStatus:(int)arg2;	// IMP=0x00000001000168b4
- (void)handleScreenCaptureFailureWithError:(id)arg1;	// IMP=0x0000000100016838
- (void)screenCaptureController:(id)arg1 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 transformFlags:(unsigned long long)arg3;	// IMP=0x00000001000166b0
- (void)stop;	// IMP=0x000000010001655c
- (void)startSessionWithPID:(int)arg1 windowSize:(struct CGSize)arg2 systemRecording:(_Bool)arg3 contextIDs:(id)arg4 captureRate:(int)arg5 outputHandler:(CDUnknownBlockType)arg6 didStartHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000100016348
- (void)setCloneMirroringMode:(_Bool)arg1 contextIDs:(id)arg2;	// IMP=0x000000010001625c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
