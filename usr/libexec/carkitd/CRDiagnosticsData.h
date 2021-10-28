//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFAccount, NSArray, NSDate, NSString, NSURL;

@interface CRDiagnosticsData : NSObject
{
    _Bool _mapsActive;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSString *_timestamp;	// 24 = 0x18
    NSURL *_deviceScreenshotURL;	// 32 = 0x20
    NSURL *_carScreenshotURL;	// 40 = 0x28
    NSURL *_carplayLogsURL;	// 48 = 0x30
    NSURL *_sysdiagnoseURL;	// 56 = 0x38
    NSURL *_configurationURL;	// 64 = 0x40
    NSArray *_attachmentURLs;	// 72 = 0x48
    NSString *_transcription;	// 80 = 0x50
    NSString *_activeBundleIdentifier;	// 88 = 0x58
    AFAccount *_siriInfo;	// 96 = 0x60
    NSString *_locationDescription;	// 104 = 0x68
    unsigned long long _transportType;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000010002a0c8
@property(nonatomic, getter=isMapsActive) _Bool mapsActive; // @synthesize mapsActive=_mapsActive;
@property(nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSString *locationDescription; // @synthesize locationDescription=_locationDescription;
@property(retain, nonatomic) AFAccount *siriInfo; // @synthesize siriInfo=_siriInfo;
@property(retain, nonatomic) NSString *activeBundleIdentifier; // @synthesize activeBundleIdentifier=_activeBundleIdentifier;
@property(retain, nonatomic) NSString *transcription; // @synthesize transcription=_transcription;
@property(retain, nonatomic) NSArray *attachmentURLs; // @synthesize attachmentURLs=_attachmentURLs;
@property(retain, nonatomic) NSURL *configurationURL; // @synthesize configurationURL=_configurationURL;
@property(retain, nonatomic) NSURL *sysdiagnoseURL; // @synthesize sysdiagnoseURL=_sysdiagnoseURL;
@property(retain, nonatomic) NSURL *carplayLogsURL; // @synthesize carplayLogsURL=_carplayLogsURL;
@property(retain, nonatomic) NSURL *carScreenshotURL; // @synthesize carScreenshotURL=_carScreenshotURL;
@property(retain, nonatomic) NSURL *deviceScreenshotURL; // @synthesize deviceScreenshotURL=_deviceScreenshotURL;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)description;	// IMP=0x0000000100029f5c
- (void)_createCarPlayDiagnosticsFolder;	// IMP=0x0000000100029558
- (id)initWithDeviceScreenshot:(id)arg1 carScreenshot:(id)arg2 configuration:(id)arg3 attachmentURLs:(id)arg4 siriInfo:(id)arg5 activeBundleID:(id)arg6 transportType:(unsigned long long)arg7;	// IMP=0x000000010002937c

@end
