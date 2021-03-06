//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLBarometerCalibrationContextManager.h"

#import "CLRoutineMonitorClientProtocol-Protocol.h"

@class NSString;
@protocol CLRoutineMonitorServiceProtocol;

@interface CLContextManagerSignificantLocationVisit : CLBarometerCalibrationContextManager <CLRoutineMonitorClientProtocol>
{
    id <CLRoutineMonitorServiceProtocol> _routineMonitorProxy;	// 32 = 0x20
    double lastSLVUpdateTimestamp;	// 40 = 0x28
    double lastFloorTransitionUpdateTimestamp;	// 48 = 0x30
    unsigned char numWorkSubmissions;	// 56 = 0x38
    unsigned char numUnknownSubmissions;	// 57 = 0x39
    unsigned char numFloorTransitionSubmissions;	// 58 = 0x3a
    _Bool useSanctionedPolygons;	// 59 = 0x3b
    struct CLFloorTransitionDetector _floorTransitionDetector;	// 64 = 0x40
    _Bool _valid;	// 128 = 0x80
    _Bool _duringVisit;	// 129 = 0x81
    double _currentVisitHorizontalUncertainty;	// 136 = 0x88
    struct CLLocationCoordinate2D _currentVisitLocation;	// 144 = 0x90
}

+ (_Bool)isInsideSanctionedPolygon:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0000000100812d20
- (id).cxx_construct;	// IMP=0x0000000100812ef4
- (void).cxx_destruct;	// IMP=0x0000000100812ee4
@property(nonatomic) double currentVisitHorizontalUncertainty; // @synthesize currentVisitHorizontalUncertainty=_currentVisitHorizontalUncertainty;
@property(nonatomic) struct CLLocationCoordinate2D currentVisitLocation; // @synthesize currentVisitLocation=_currentVisitLocation;
@property(nonatomic) _Bool duringVisit; // @synthesize duringVisit=_duringVisit;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (_Bool)shouldTriggerFloorTransitionHarvest:(float)arg1 atTime:(double)arg2;	// IMP=0x0000000100812b30
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x00000001008125ec
- (double)timeUserGetCloseToVisitLocation;	// IMP=0x00000001008120cc
- (_Bool)hasPressureChangeFrom:(double)arg1 to:(double)arg2;	// IMP=0x0000000100811e58
- (void)sendTrackFrom:(double)arg1 to:(double)arg2 location:(struct CLLocationCoordinate2D)arg3 horrUnc:(double)arg4 type:(unsigned long long)arg5;	// IMP=0x0000000100811c8c
- (_Bool)shouldSubmit:(long long)arg1 calibrationType:(unsigned long long)arg2;	// IMP=0x00000001008119a8
- (_Bool)isDeparture:(id)arg1;	// IMP=0x0000000100811958
- (_Bool)isEntry:(id)arg1;	// IMP=0x0000000100811908
- (void)onVisit:(id)arg1;	// IMP=0x0000000100811210
- (void)cleanup;	// IMP=0x00000001008111bc
- (void)dealloc;	// IMP=0x000000010081116c
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(array_c179b914 *)arg3;	// IMP=0x0000000100810ed4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

