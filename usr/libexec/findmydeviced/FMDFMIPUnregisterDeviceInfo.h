//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMDFMIPUnregisterDeviceInfo : NSObject
{
    _Bool _paired;	// 8 = 0x8
    _Bool _migrationConfirmed;	// 9 = 0x9
    NSString *_udid;	// 16 = 0x10
    NSString *_pairingId;	// 24 = 0x18
    NSString *_serialNumber;	// 32 = 0x20
    NSString *_imei;	// 40 = 0x28
    NSString *_imei2;	// 48 = 0x30
    NSString *_meid;	// 56 = 0x38
    NSString *_productType;	// 64 = 0x40
    NSString *_productVersion;	// 72 = 0x48
    NSString *_buildVersion;	// 80 = 0x50
    unsigned long long _disableContext;	// 88 = 0x58
    NSString *_unregisterToken;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010000b458
@property(retain, nonatomic) NSString *unregisterToken; // @synthesize unregisterToken=_unregisterToken;
@property(nonatomic) _Bool migrationConfirmed; // @synthesize migrationConfirmed=_migrationConfirmed;
@property(nonatomic) _Bool paired; // @synthesize paired=_paired;
@property(nonatomic) unsigned long long disableContext; // @synthesize disableContext=_disableContext;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *meid; // @synthesize meid=_meid;
@property(retain, nonatomic) NSString *imei2; // @synthesize imei2=_imei2;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *pairingId; // @synthesize pairingId=_pairingId;
@property(retain, nonatomic) NSString *udid; // @synthesize udid=_udid;

@end

