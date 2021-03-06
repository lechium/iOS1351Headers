//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WFTemperatureUnitObserver-Protocol.h"
#import "WeatherLocationDataProviderObserver-Protocol.h"

@class NSHashTable, NSString, WFForecastRequest, WFTemperatureUnitRequest, WeatherConditions;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WeatherConditionsDataProvider : NSObject <WFTemperatureUnitObserver, WeatherLocationDataProviderObserver>
{
    NSHashTable *_observers;	// 8 = 0x8
    WeatherConditions *_weatherConditions;	// 16 = 0x10
    int _temperatureUnit;	// 24 = 0x18
    WFForecastRequest *_weatherRequest;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_weatherRequestQueue;	// 40 = 0x28
    CDUnknownBlockType _weatherRequestFactory;	// 48 = 0x30
    WFTemperatureUnitRequest *_temperatureUnitRequest;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_updatingTimer;	// 64 = 0x40
    _Bool _shouldAutoRefresh;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100022020
@property(copy, nonatomic) CDUnknownBlockType weatherRequestFactory; // @synthesize weatherRequestFactory=_weatherRequestFactory;
@property(nonatomic) _Bool shouldAutoRefresh; // @synthesize shouldAutoRefresh=_shouldAutoRefresh;
@property(readonly, nonatomic) WeatherConditions *weatherConditions; // @synthesize weatherConditions=_weatherConditions;
- (void)_updateTemperatureUnit:(int)arg1;	// IMP=0x0000000100021f50
- (void)_updateLocation:(id)arg1;	// IMP=0x0000000100021df4
- (void)_updateWeatherConditions:(id)arg1;	// IMP=0x0000000100021d98
- (_Bool)_shouldQueryForWeatherConditionsData;	// IMP=0x0000000100021d44
- (void)_scheduleWeatherConditionsRefresh;	// IMP=0x0000000100021a94
- (void)_requestTemperatureUnit;	// IMP=0x000000010002171c
- (void)_notifyObserversWeatherConditionsDidChange;	// IMP=0x0000000100021514
- (void)_cancelWeatherConditionsRefresh;	// IMP=0x00000001000214d8
- (void)weatherLocationDataProvider:(id)arg1 didChangeLocation:(id)arg2;	// IMP=0x00000001000214b4
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2;	// IMP=0x00000001000214a4
- (void)didChangeLocation:(id)arg1;	// IMP=0x0000000100021428
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100021418
- (void)addObserver:(id)arg1;	// IMP=0x0000000100021408
- (void)dealloc;	// IMP=0x000000010002134c
- (id)init;	// IMP=0x0000000100020ccc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

