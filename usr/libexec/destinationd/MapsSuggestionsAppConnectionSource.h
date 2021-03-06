//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import "MapsSuggestionsSource-Protocol.h"

@class GEOMapItemStorage, NSNumber, NSObject, NSString, PPConnectionsCriteria, PPConnectionsStore;
@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsAppConnectionSource : MapsSuggestionsBaseSource <MapsSuggestionsSource>
{
    PPConnectionsStore *_connectionsStore;	// 8 = 0x8
    PPConnectionsCriteria *_criteria;	// 16 = 0x10
    GEOMapItemStorage *_cachedMapItem;	// 24 = 0x18
    NSString *_cachedKey;	// 32 = 0x20
    NSNumber *_cachedMapItemOrigin;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_appConnectionUpdateQueue;	// 48 = 0x30
}

+ (unsigned long long)disposition;	// IMP=0x0000000100030b90
+ (_Bool)isEnabled;	// IMP=0x0000000100030b80
- (void).cxx_destruct;	// IMP=0x000000010003465c
- (id)_subtitleForLocation:(id)arg1;	// IMP=0x0000000100034190
- (id)_entryFromLocationValue:(id)arg1;	// IMP=0x0000000100033d84
- (id)_entryFromLocation:(id)arg1;	// IMP=0x0000000100033014
- (void)_geoMapItemsFromMapsSuggestionsEntry:(id)arg1;	// IMP=0x00000001000320ac
- (id)_stripSubdomain:(id)arg1;	// IMP=0x0000000100031ef4
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100031eec
- (_Bool)canProduceEntriesOfType:(long long)arg1;	// IMP=0x0000000100031ee0
- (double)updateSuggestionEntries;	// IMP=0x0000000100031c50
- (void)stop;	// IMP=0x0000000100031c4c
- (void)start;	// IMP=0x0000000100031c48
- (void)_getRecentAppConnectionSuggestion;	// IMP=0x0000000100030d20
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100030b98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

