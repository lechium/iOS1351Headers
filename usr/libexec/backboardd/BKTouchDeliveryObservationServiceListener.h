//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSServiceConnectionListenerDelegate-Protocol.h"

@class BKTouchDeliveryObservationManager, BSServiceConnectionListener, NSString;

@interface BKTouchDeliveryObservationServiceListener : NSObject <BSServiceConnectionListenerDelegate>
{
    BSServiceConnectionListener *_connectionListener;	// 8 = 0x8
    BKTouchDeliveryObservationManager *_manager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010006e768
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x000000010006e4f4
- (void)activate;	// IMP=0x000000010006e4e4
- (id)initWithObservationManager:(id)arg1;	// IMP=0x000000010006e3f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

