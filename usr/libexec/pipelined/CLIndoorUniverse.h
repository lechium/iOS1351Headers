//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLIndoorUniverse : NSObject
{
    struct optional<UniverseState> _localizerUniverseState;	// 8 = 0x8
    struct optional<AvailabilityData> _availabilityData;	// 176 = 0xb0
    _Bool _indoorUniverseFirstDidChange;	// 240 = 0xf0
}

- (id).cxx_construct;	// IMP=0x00000001003695b4
- (void).cxx_destruct;	// IMP=0x0000000100369570
- (_Bool)updateLocalizerUniverseIfAllowed:(duration_673274cf)arg1 fromLocation:(const CDStruct_4d1fbe9a *)arg2 withUniverseUpdatedHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100369390
- (void)updateLocalizerUniverse:(duration_673274cf)arg1 fromLocation:(const CDStruct_4d1fbe9a *)arg2 withUniverseUpdatedHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100368d38
- (id)stripLocatationGroupIdsPrefix:(id)arg1;	// IMP=0x0000000100368a20
- (_Bool)isAllowedToUpdateUniverse:(const CDStruct_4d1fbe9a *)arg1;	// IMP=0x0000000100368920
- (_Bool)debouceUpdateUniverse:(duration_673274cf)arg1 fromLocation:(CDStruct_4d1fbe9a)arg2;	// IMP=0x0000000100368690
- (const struct AvailabilityData *)getAvailabilityData;	// IMP=0x0000000100368684
- (struct AvailabilityData *)mutableAvailabilityData;	// IMP=0x0000000100368650
- (struct UniverseState *)mutableUniverseState;	// IMP=0x0000000100368618
- (id)initWithAvailableVenues:(id)arg1 availabilityZScoreConfidenceInterval:(double)arg2 dynamicUniverseParameters:(const struct DynamicUniverseParameters *)arg3;	// IMP=0x0000000100368148

@end

