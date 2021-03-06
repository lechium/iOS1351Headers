//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DASessionSettings : NSObject
{
    _Bool _displayDeviceIdentifier;	// 8 = 0x8
    _Bool _fullscreenPromptsEnabled;	// 9 = 0x9
    NSString *_deviceIdentifier;	// 16 = 0x10
    unsigned long long _allowCellularSizeThreshold;	// 24 = 0x18
}

+ (id)acceptableValueClasses;	// IMP=0x000000010001d5ec
+ (id)sessionSettingsWithDictionary:(id)arg1;	// IMP=0x000000010001d178
- (void).cxx_destruct;	// IMP=0x000000010001d9fc
@property(nonatomic) unsigned long long allowCellularSizeThreshold; // @synthesize allowCellularSizeThreshold=_allowCellularSizeThreshold;
@property(nonatomic) _Bool fullscreenPromptsEnabled; // @synthesize fullscreenPromptsEnabled=_fullscreenPromptsEnabled;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) _Bool displayDeviceIdentifier; // @synthesize displayDeviceIdentifier=_displayDeviceIdentifier;
- (id)description;	// IMP=0x000000010001d8d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001d858
- (_Bool)isEqualToSessionSettings:(id)arg1;	// IMP=0x000000010001d724
- (id)dictionary;	// IMP=0x000000010001d444
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010001d1d8
- (id)init;	// IMP=0x000000010001d1c8

@end

