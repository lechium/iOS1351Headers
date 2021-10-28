//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

@class CommonProduct;

@interface ThermalLevelCC : ComponentControl
{
    CommonProduct *product;	// 120 = 0x78
    unsigned int currThermLevel;	// 128 = 0x80
    unsigned int prevThermLevel;	// 132 = 0x84
}

- (void)refreshFunctionalTelemetry;	// IMP=0x0000000100023828
- (void)defaultAction;	// IMP=0x00000001000237c4
- (id)initWithProduct:(id)arg1;	// IMP=0x00000001000236f8

@end
