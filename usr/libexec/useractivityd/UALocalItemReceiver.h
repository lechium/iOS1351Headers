//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UAReceiver.h"

@class UAUserActivityClientProcessesController;

@interface UALocalItemReceiver : UAReceiver
{
    UAUserActivityClientProcessesController *_controller;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010004bf68
@property(readonly, retain) UAUserActivityClientProcessesController *controller; // @synthesize controller=_controller;
- (id)statusString;	// IMP=0x000000010004be64
- (id)receivedItems;	// IMP=0x000000010004bbdc
- (_Bool)receiving;	// IMP=0x000000010004bb8c
- (id)initWithManager:(id)arg1 controller:(id)arg2;	// IMP=0x000000010004baec

@end
