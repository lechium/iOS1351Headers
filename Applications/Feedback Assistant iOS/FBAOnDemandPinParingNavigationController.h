//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UINavigationController.h>

@class FBAGroupedDevice;

@interface FBAOnDemandPinParingNavigationController : UINavigationController
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    FBAGroupedDevice *_pairingDevice;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003f200
@property(retain) FBAGroupedDevice *pairingDevice; // @synthesize pairingDevice=_pairingDevice;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)didPinPairWithDevice:(id)arg1;	// IMP=0x000000010003ee58
- (void)didPinPair:(id)arg1;	// IMP=0x000000010003ec98
- (void)didCancelPairing:(id)arg1;	// IMP=0x000000010003eb80
- (void)dealloc;	// IMP=0x000000010003eb08
- (void)viewDidLoad;	// IMP=0x000000010003ea1c
- (id)initWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e81c

@end

