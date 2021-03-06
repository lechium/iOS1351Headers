//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCArgumentParser.h>

#import "SCATScannerManagerDelegate-Protocol.h"

@class NSObject;
@protocol OS_os_transaction;

@interface HNDMain : SCRCArgumentParser <SCATScannerManagerDelegate>
{
    struct __CFRunLoop *_mainRunLoop;	// 80 = 0x50
    _Bool _stop;	// 88 = 0x58
    _Bool _systemAppReady;	// 89 = 0x59
    _Bool _keepAlive;	// 90 = 0x5a
    NSObject<OS_os_transaction> *_transaction;	// 96 = 0x60
}

+ (id)commandPath;	// IMP=0x0000000100006b00
+ (id)versionString;	// IMP=0x0000000100006af4
+ (id)processIdentifier;	// IMP=0x0000000100006ae8
- (void).cxx_destruct;	// IMP=0x0000000100008a38
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) _Bool systemAppReady; // @synthesize systemAppReady=_systemAppReady;
- (void)_assistAppValidationMode;	// IMP=0x00000001000084ec
- (_Bool)_urlMatchesLoadableCode:(id)arg1;	// IMP=0x0000000100008308
- (void)stopIfAllowed;	// IMP=0x000000010000814c
- (void)stop;	// IMP=0x0000000100007f04
- (void)_goDogGo:(id)arg1;	// IMP=0x0000000100007dd4
- (void)_initializeSystemSettings;	// IMP=0x0000000100007af0
- (void)_assistiveTouchSettingsChanged;	// IMP=0x0000000100007a50
- (void)_scannerEnabledChange;	// IMP=0x00000001000077e0
- (void)_assistiveTouchEnabledChange;	// IMP=0x00000001000075d4
- (int)run;	// IMP=0x0000000100006be4
- (void)setKeepAlive:(_Bool)arg1;	// IMP=0x0000000100006b0c
- (void)_springBoardDied:(id)arg1;	// IMP=0x0000000100006a48
- (void)_languageChanged:(id)arg1;	// IMP=0x00000001000069dc
- (void)dealloc;	// IMP=0x0000000100006964
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;	// IMP=0x0000000100006740

@end

