//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsSuggestionsBasePollingFeeler.h"

#import "MapsSuggestionsPollingFeeler-Protocol.h"

@class MapsSuggestionsMutableSignalPack, NSObject, NSString;
@protocol MapsSuggestionsFeelerDelegate, OS_dispatch_queue;

@interface MapsSuggestionsRoutineFeeler : MapsSuggestionsBasePollingFeeler <MapsSuggestionsPollingFeeler>
{
    MapsSuggestionsMutableSignalPack *_signalPack;	// 8 = 0x8
    double _pollingFrequency;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (_Bool)isEnabled;	// IMP=0x000000010000f00c
- (void).cxx_destruct;	// IMP=0x0000000100010e70
- (double)_distanceFromCurrentLocationToLat:(double)arg1 long:(double)arg2;	// IMP=0x0000000100010d70
- (void)_updateParkedCarWithGroup:(id)arg1;	// IMP=0x0000000100010630
- (void)_updateTouristInfoWithGroup:(id)arg1;	// IMP=0x000000010000ff94
- (void)_fetchLocationsOfInterestOfType:(long long)arg1 group:(id)arg2;	// IMP=0x000000010000f534
- (void)_sendCurrentSignalPackWithGroup:(id)arg1;	// IMP=0x000000010000f2e4
- (double)updateSignals;	// IMP=0x000000010000f18c
- (id)initWithDelegate:(id)arg1 name:(id)arg2;	// IMP=0x000000010000f040
- (_Bool)canProduceSignalType:(long long)arg1;	// IMP=0x000000010000f01c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsFeelerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

