//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ECEFCoordinate, GeographicCoordinate;

@interface CLIndoorPrefetchRegion : NSObject
{
    struct unique_ptr<CLIndoorPrefetchLocationOfInterest, std::__1::default_delete<CLIndoorPrefetchLocationOfInterest>> _baseOfOperations;	// 8 = 0x8
    GeographicCoordinate *_latlon;	// 16 = 0x10
    ECEFCoordinate *_ecef;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000100015380
- (void).cxx_destruct;	// IMP=0x0000000100015368
@property(readonly, retain) ECEFCoordinate *ecef; // @synthesize ecef=_ecef;
@property(readonly, retain) GeographicCoordinate *latlon; // @synthesize latlon=_latlon;
- (time_point_8c9030d0)relevancy:(time_point_8c9030d0)arg1;	// IMP=0x0000000100015338
- (_Bool)mergeLocationOfInterest:(const struct CLIndoorPrefetchLocationOfInterest *)arg1 clusterRadius:(double)arg2;	// IMP=0x00000001000152b8
- (void)dealloc;	// IMP=0x0000000100015268
- (id)initFromLOI:(const struct CLIndoorPrefetchLocationOfInterest *)arg1;	// IMP=0x0000000100015194

@end

