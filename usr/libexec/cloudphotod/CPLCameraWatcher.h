//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FigCameraViewfinderDelegate-Protocol.h"
#import "FigCameraViewfinderSessionDelegate-Protocol.h"

@class FigCameraViewfinder, NSString;
@protocol CPLCameraWatcherDelegate;

@interface CPLCameraWatcher : NSObject <FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate>
{
    FigCameraViewfinder *_viewFinder;	// 8 = 0x8
    _Bool _isCameraRunning;	// 16 = 0x10
    id <CPLCameraWatcherDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100016374
@property(readonly) __weak id <CPLCameraWatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2;	// IMP=0x0000000100016308
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2;	// IMP=0x00000001000162b0
- (_Bool)isCameraRunning;	// IMP=0x00000001000162a8
- (id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2;	// IMP=0x00000001000161c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

