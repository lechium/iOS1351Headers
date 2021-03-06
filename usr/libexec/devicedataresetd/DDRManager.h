//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DDRWorkerClientProtocol-Protocol.h"

@class DDRUIPresenter, NSString, NSXPCConnection;
@protocol DDRManagerDelegate, OS_dispatch_queue;

@interface DDRManager : NSObject <DDRWorkerClientProtocol>
{
    id <DDRManagerDelegate> _delegate;	// 8 = 0x8
    NSXPCConnection *_dataResetWorkerConnection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    DDRUIPresenter *_uiPresenter;	// 32 = 0x20
    NSString *_reason;	// 40 = 0x28
    long long _mode;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100004ed4
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) DDRUIPresenter *uiPresenter; // @synthesize uiPresenter=_uiPresenter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *dataResetWorkerConnection; // @synthesize dataResetWorkerConnection=_dataResetWorkerConnection;
@property(nonatomic) __weak id <DDRManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetWithModeDidBegin:(long long)arg1;	// IMP=0x0000000100004db4
- (void)resetWithMode:(long long)arg1 didUpdateWithProgress:(double)arg2;	// IMP=0x0000000100004cc8
- (void)doObliterateWithType:(struct __CFString *)arg1 showingProgress:(_Bool)arg2 options:(id)arg3;	// IMP=0x0000000100004bf0
- (void)_obliterateAndBrickDevice:(_Bool)arg1;	// IMP=0x0000000100004b10
- (void)finishResetOfMode:(long long)arg1 withError:(id)arg2;	// IMP=0x00000001000049ec
- (void)resetDataWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004394
- (void)resetConnection;	// IMP=0x0000000100004314

@end

