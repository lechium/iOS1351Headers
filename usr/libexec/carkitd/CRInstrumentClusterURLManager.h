//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CARSessionObserving-Protocol.h"

@class CARSessionStatus, NSArray, NSString;

@interface CRInstrumentClusterURLManager : NSObject <CARSessionObserving>
{
    CARSessionStatus *_sessionStatus;	// 8 = 0x8
    NSArray *_urlStrings;	// 16 = 0x10
    NSArray *_sessionURLStrings;	// 24 = 0x18
}

+ (id)_bundlesToReadInfoKeys;	// IMP=0x0000000100037100
- (void).cxx_destruct;	// IMP=0x0000000100038044
@property(retain, nonatomic) NSArray *sessionURLStrings; // @synthesize sessionURLStrings=_sessionURLStrings;
@property(retain, nonatomic) NSArray *urlStrings; // @synthesize urlStrings=_urlStrings;
@property(retain, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x0000000100037f60
- (void)sessionDidConnect:(id)arg1;	// IMP=0x0000000100037e14
- (void)_notifyURLsDidChange;	// IMP=0x0000000100037d54
- (void)_applySessionURLs:(id)arg1;	// IMP=0x0000000100037aa0
@property(readonly, nonatomic) NSArray *sessionInstrumentClusterURLs;
@property(readonly, nonatomic) NSArray *instrumentClusterURLs;
- (id)init;	// IMP=0x00000001000371c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
