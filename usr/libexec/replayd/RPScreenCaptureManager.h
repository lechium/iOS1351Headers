//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RPScreenCaptureManagerProtocol;

@interface RPScreenCaptureManager : NSObject
{
    CDUnknownBlockType _screenCaptureOutputHandler;	// 8 = 0x8
    id <RPScreenCaptureManagerProtocol> _delegate;	// 16 = 0x10
}

+ (id)newInstance;	// IMP=0x0000000100021a6c
- (void).cxx_destruct;	// IMP=0x0000000100021b58
@property(retain, nonatomic) id <RPScreenCaptureManagerProtocol> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType screenCaptureOutputHandler; // @synthesize screenCaptureOutputHandler=_screenCaptureOutputHandler;
- (void)stop;	// IMP=0x0000000100021ad4
- (void)startSessionWithPID:(int)arg1 windowSize:(struct CGSize)arg2 systemRecording:(_Bool)arg3 contextIDs:(id)arg4 captureRate:(int)arg5 outputHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100021a78

@end
