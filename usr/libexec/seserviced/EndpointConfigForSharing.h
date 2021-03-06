//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KmlEndpointCreationConfig, KmlTlv, NSArray, SEEndPoint;

@interface EndpointConfigForSharing : NSObject
{
    KmlTlv *_endpointConfigTlv;	// 8 = 0x8
    NSArray *_deviceConfigTlvs;	// 16 = 0x10
    KmlEndpointCreationConfig *_keyCreationConfig;	// 24 = 0x18
    SEEndPoint *_endpoint;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000460a8
@property(retain, nonatomic) SEEndPoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) KmlEndpointCreationConfig *keyCreationConfig; // @synthesize keyCreationConfig=_keyCreationConfig;
@property(retain, nonatomic) NSArray *deviceConfigTlvs; // @synthesize deviceConfigTlvs=_deviceConfigTlvs;
@property(retain, nonatomic) KmlTlv *endpointConfigTlv; // @synthesize endpointConfigTlv=_endpointConfigTlv;
- (_Bool)parseEndpointCreationAndDeviceConfigsFromData:(id)arg1;	// IMP=0x0000000100045b04
- (id)createDeviceConfig;	// IMP=0x0000000100045600
- (id)createEndpointConfigWithImmoTokenIdentifier:(id)arg1;	// IMP=0x0000000100044ab8
- (id)init;	// IMP=0x0000000100044a40

@end

