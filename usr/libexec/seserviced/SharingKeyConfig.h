//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KmlTlv, NSString;

@interface SharingKeyConfig : NSObject
{
    unsigned char _version;	// 8 = 0x8
    unsigned char _updateCounter;	// 9 = 0x9
    unsigned char _accessRights;	// 10 = 0xa
    KmlTlv *_keyConfigTlv;	// 16 = 0x10
    NSString *_friendlyName;	// 24 = 0x18
    NSString *_sharingPasswordSeed;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100044a04
@property(retain, nonatomic) NSString *sharingPasswordSeed; // @synthesize sharingPasswordSeed=_sharingPasswordSeed;
@property(nonatomic) unsigned char accessRights; // @synthesize accessRights=_accessRights;
@property(nonatomic) unsigned char updateCounter; // @synthesize updateCounter=_updateCounter;
@property(nonatomic) unsigned char version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
@property(retain, nonatomic) KmlTlv *keyConfigTlv; // @synthesize keyConfigTlv=_keyConfigTlv;
- (_Bool)parseKeyConfigFromData:(id)arg1;	// IMP=0x0000000100044534
- (id)createKeyConfigWithFriendlyName:(id)arg1 profile:(unsigned char)arg2;	// IMP=0x0000000100043fbc
- (id)init;	// IMP=0x0000000100043f68

@end

