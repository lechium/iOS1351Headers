//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BBObserverDelegate-Protocol.h"

@class BBObserver, NSArray, NSString;
@protocol MFBulletinSettingsObserverDelegate, OS_dispatch_queue;

@interface MFBulletinSettingsObserver : NSObject <BBObserverDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    BBObserver *_observer;	// 16 = 0x10
    id <MFBulletinSettingsObserverDelegate> _delegate;	// 24 = 0x18
    NSArray *_subsections;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100064bfc
@property(copy, nonatomic) NSArray *subsections; // @synthesize subsections=_subsections;
@property(readonly) __weak id <MFBulletinSettingsObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_nts_updateSubsections:(id)arg1;	// IMP=0x0000000100064ac0
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;	// IMP=0x0000000100064a10
- (void)invalidate;	// IMP=0x00000001000649dc
- (void)start;	// IMP=0x00000001000646f4
- (void)dealloc;	// IMP=0x0000000100064674
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100064588

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
