//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CXCallObserverDelegate-Protocol.h"

@class CXCallObserver, NSString;
@protocol MRDPhoneCallObserverDelegate;

@interface MRDPhoneCallObserver : NSObject <CXCallObserverDelegate>
{
    CXCallObserver *_callObserver;	// 8 = 0x8
    unsigned long long _numberOfActiveCalls;	// 16 = 0x10
    id <MRDPhoneCallObserverDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000822e8
@property(nonatomic) __weak id <MRDPhoneCallObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)numberOfActivePhoneCalls:(CDUnknownBlockType)arg1;	// IMP=0x0000000100082158
- (void)_notifyDelegate:(id)arg1;	// IMP=0x00000001000820c8
- (void)phoneCallDidChangeNotification:(id)arg1;	// IMP=0x0000000100082048
- (void)callObserver:(id)arg1 callChanged:(id)arg2;	// IMP=0x0000000100081fd0
- (id)init;	// IMP=0x0000000100081ed4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
