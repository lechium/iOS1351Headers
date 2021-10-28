//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBUIPowerDownViewControllerDelegate-Protocol.h"

@class CBWindow, NSString;

@interface CBAlertManager : NSObject <SBUIPowerDownViewControllerDelegate>
{
    _Bool _powerDownVisible;	// 8 = 0x8
    _Bool _alertVisible;	// 9 = 0x9
    _Bool _wiFiPickerVisible;	// 10 = 0xa
    _Bool _thermalWarningVisible;	// 11 = 0xb
    CBWindow *_wiFiPickerWindow;	// 16 = 0x10
    CBWindow *_thermalWarningWindow;	// 24 = 0x18
    CBWindow *_powerDownWindow;	// 32 = 0x20
    CDUnknownBlockType _powerDownResponse;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100012bc4
- (void).cxx_destruct;	// IMP=0x0000000100014a28
@property(copy, nonatomic) CDUnknownBlockType powerDownResponse; // @synthesize powerDownResponse=_powerDownResponse;
@property(retain, nonatomic) CBWindow *powerDownWindow; // @synthesize powerDownWindow=_powerDownWindow;
@property(retain, nonatomic) CBWindow *thermalWarningWindow; // @synthesize thermalWarningWindow=_thermalWarningWindow;
@property(retain, nonatomic) CBWindow *wiFiPickerWindow; // @synthesize wiFiPickerWindow=_wiFiPickerWindow;
@property(nonatomic) _Bool thermalWarningVisible; // @synthesize thermalWarningVisible=_thermalWarningVisible;
@property(nonatomic) _Bool wiFiPickerVisible; // @synthesize wiFiPickerVisible=_wiFiPickerVisible;
@property(nonatomic) _Bool alertVisible; // @synthesize alertVisible=_alertVisible;
@property(nonatomic) _Bool powerDownVisible; // @synthesize powerDownVisible=_powerDownVisible;
- (_Bool)_modalNotVisible:(unsigned long long)arg1;	// IMP=0x00000001000148a0
- (_Bool)_alertNotVisible;	// IMP=0x0000000100014800
- (void)_dismissWiFiPicker;	// IMP=0x0000000100014730
- (id)_pointImageOfColor:(id)arg1;	// IMP=0x00000001000146b0
- (void)powerDownViewRequestPowerDown:(id)arg1;	// IMP=0x00000001000145f8
- (void)powerDownViewRequestCancel:(id)arg1;	// IMP=0x00000001000144f8
- (void)dismissThermalWarningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000143e0
- (void)showPowerDownWithCompletion:(CDUnknownBlockType)arg1 response:(CDUnknownBlockType)arg2;	// IMP=0x00000001000140e0
- (void)showThermalWarningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013dc8
- (void)showWiFiPickerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013b00
- (void)showExitConfirmationWithCompletion:(CDUnknownBlockType)arg1 response:(CDUnknownBlockType)arg2;	// IMP=0x00000001000135c4
- (void)showMenuSheetWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2 response:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012cd8
- (id)_init;	// IMP=0x0000000100012c3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
