//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSCalendar, NSDate;

@interface MTASleepBaseTableViewController : UITableViewController
{
    NSCalendar *_calendar;	// 8 = 0x8
    NSDate *_baseDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100064400
@property(retain, nonatomic) NSDate *baseDate; // @synthesize baseDate=_baseDate;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (void)dealloc;	// IMP=0x0000000100064330
- (void)handleContentSizeCategoryChange:(id)arg1;	// IMP=0x00000001000642f0
- (id)DNDModeFooterForAlarm:(id)arg1;	// IMP=0x0000000100064034
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100063ee4
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100063edc

@end
