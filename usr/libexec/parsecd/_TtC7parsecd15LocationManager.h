//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7parsecd15LocationManager : NSObject
{
    MISSING_TYPE *assembly;	// 8 = 0x8
    MISSING_TYPE *locationService;	// 24 = 0x18
    MISSING_TYPE *updateQueue;	// 40 = 0x28
    MISSING_TYPE *parsecBundle;	// 48 = 0x30
    MISSING_TYPE *geoLocation;	// 56 = 0x38
    MISSING_TYPE *geoLocationLatLng;	// 64 = 0x40
    MISSING_TYPE *geoLocationSource;	// 80 = 0x50
    MISSING_TYPE *geoClientMetadata;	// 96 = 0x60
    MISSING_TYPE *lookupGeoLocationLatLng;	// 112 = 0x70
    MISSING_TYPE *locationAuthorizationStatus;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000100034ec0
- (id)init;	// IMP=0x0000000100037c14
- (void)updateCountryCode:(id)arg1;	// IMP=0x00000001000364b4
- (void)updateMapsClientMetadata:(id)arg1;	// IMP=0x0000000100035f94
- (void)performedSearchNotification:(id)arg1;	// IMP=0x00000001000358e4
- (void)guidChangeNotificationChangeNotification:(id)arg1;	// IMP=0x00000001000356f4
- (void)bagChangeNotification:(id)arg1;	// IMP=0x000000010003552c
- (void)dealloc;	// IMP=0x0000000100034e9c

@end
