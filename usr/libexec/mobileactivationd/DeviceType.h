//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DeviceType : NSObject
{
    _Bool _is_prodfused_demoted;	// 8 = 0x8
    _Bool _is_devfused_undemoted;	// 9 = 0x9
    _Bool _is_dev_board;	// 10 = 0xa
    _Bool _is_fpga;	// 11 = 0xb
    _Bool _is_ipod;	// 12 = 0xc
    _Bool _is_ipad;	// 13 = 0xd
    _Bool _is_audio_accessory;	// 14 = 0xe
    _Bool _has_telephony;	// 15 = 0xf
    _Bool _should_hactivate;	// 16 = 0x10
    _Bool _is_internal_build;	// 17 = 0x11
    _Bool _has_internal_diagnostics;	// 18 = 0x12
    NSString *_product_type;	// 24 = 0x18
    NSString *_device_class;	// 32 = 0x20
    NSString *_hardware_model;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000010000b2b0
- (void).cxx_destruct;	// IMP=0x000000010000be44
@property(readonly, nonatomic) _Bool has_internal_diagnostics; // @synthesize has_internal_diagnostics=_has_internal_diagnostics;
@property(readonly, nonatomic) _Bool is_internal_build; // @synthesize is_internal_build=_is_internal_build;
@property(readonly, nonatomic) _Bool should_hactivate; // @synthesize should_hactivate=_should_hactivate;
@property(readonly, nonatomic) _Bool has_telephony; // @synthesize has_telephony=_has_telephony;
@property(readonly, nonatomic) _Bool is_audio_accessory; // @synthesize is_audio_accessory=_is_audio_accessory;
@property(readonly, nonatomic) _Bool is_ipad; // @synthesize is_ipad=_is_ipad;
@property(readonly, nonatomic) _Bool is_ipod; // @synthesize is_ipod=_is_ipod;
@property(readonly, nonatomic) _Bool is_fpga; // @synthesize is_fpga=_is_fpga;
@property(readonly, nonatomic) _Bool is_dev_board; // @synthesize is_dev_board=_is_dev_board;
@property(readonly, nonatomic) _Bool is_devfused_undemoted; // @synthesize is_devfused_undemoted=_is_devfused_undemoted;
@property(readonly, nonatomic) _Bool is_prodfused_demoted; // @synthesize is_prodfused_demoted=_is_prodfused_demoted;
@property(readonly, copy, nonatomic) NSString *hardware_model; // @synthesize hardware_model=_hardware_model;
@property(readonly, copy, nonatomic) NSString *device_class; // @synthesize device_class=_device_class;
@property(readonly, copy, nonatomic) NSString *product_type; // @synthesize product_type=_product_type;
- (id)copyDeviceTreeInt:(id)arg1 key:(id)arg2 defaultValue:(int)arg3;	// IMP=0x000000010000bc78
- (id)copyBootArgs;	// IMP=0x000000010000bbd4
- (id)copyDeviceTreeProperty:(id)arg1 key:(id)arg2;	// IMP=0x000000010000bb20
- (id)init;	// IMP=0x000000010000b31c

@end
