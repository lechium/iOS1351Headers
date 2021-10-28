//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "KmlPairingTransportProtocol-Protocol.h"

@class NSString;
@protocol KmlPairingTransportDelegate;

@interface KmlBluetoothPairingTransport : NSObject <KmlPairingTransportProtocol>
{
    id <KmlPairingTransportDelegate> delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010004ee50
@property(nonatomic) __weak id <KmlPairingTransportDelegate> delegate; // @synthesize delegate;
- (void)reset;	// IMP=0x000000010004ee28
- (void)sendApdu:(id)arg1;	// IMP=0x000000010004ee24
- (void)readApdu;	// IMP=0x000000010004ee20
- (void)endTransaction;	// IMP=0x000000010004ee1c
- (void)startTransaction;	// IMP=0x000000010004ee18
- (void)endSession;	// IMP=0x000000010004ee14
- (void)startSession;	// IMP=0x000000010004ee10
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010004ed9c
- (id)init;	// IMP=0x000000010004ed68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
