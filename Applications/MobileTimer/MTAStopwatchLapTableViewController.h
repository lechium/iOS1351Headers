//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MTAStopwatchLapCell, NSMutableArray;

@interface MTAStopwatchLapTableViewController : UITableViewController
{
    _Bool _showsCurrentLap;	// 8 = 0x8
    double _currentInterval;	// 16 = 0x10
    unsigned long long _cellStyle;	// 24 = 0x18
    double _previousLapsTotalInterval;	// 32 = 0x20
    NSMutableArray *_lapTimes;	// 40 = 0x28
    MTAStopwatchLapCell *_currentLapCell;	// 48 = 0x30
    CDStruct_d2880215 _lapExtrema;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100045cec
@property(retain, nonatomic) MTAStopwatchLapCell *currentLapCell; // @synthesize currentLapCell=_currentLapCell;
@property(nonatomic) CDStruct_d2880215 lapExtrema; // @synthesize lapExtrema=_lapExtrema;
@property(retain, nonatomic) NSMutableArray *lapTimes; // @synthesize lapTimes=_lapTimes;
@property(nonatomic) double previousLapsTotalInterval; // @synthesize previousLapsTotalInterval=_previousLapsTotalInterval;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) _Bool showsCurrentLap; // @synthesize showsCurrentLap=_showsCurrentLap;
@property(nonatomic) double currentInterval; // @synthesize currentInterval=_currentInterval;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100045998
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010004598c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100045984
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100045948
- (void)_updateLapExtrema;	// IMP=0x00000001000456fc
- (double)runningTotalForLap:(long long)arg1;	// IMP=0x0000000100045634
- (unsigned long long)lapCount;	// IMP=0x00000001000455cc
- (void)clearAllLaps;	// IMP=0x0000000100045534
- (void)setLaps:(id)arg1;	// IMP=0x000000010004540c
- (void)addLap:(double)arg1;	// IMP=0x000000010004531c
- (void)_updateCurrentLapCell;	// IMP=0x000000010004518c
- (void)loadView;	// IMP=0x0000000100044ddc
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100044d68
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100044d60

@end
