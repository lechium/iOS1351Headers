//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface HistoryTableViewDataSourceChange : NSObject
{
    _Bool _sectionChange;	// 8 = 0x8
    long long _changeType;	// 16 = 0x10
    NSIndexPath *_changeIndexPath;	// 24 = 0x18
}

+ (id)changeWithType:(long long)arg1 indexPath:(id)arg2 isSectionChange:(_Bool)arg3;	// IMP=0x00000001000efaa4
- (void).cxx_destruct;	// IMP=0x00000001000efb64
@property(retain, nonatomic) NSIndexPath *changeIndexPath; // @synthesize changeIndexPath=_changeIndexPath;
@property(nonatomic, getter=isSectionChange) _Bool sectionChange; // @synthesize sectionChange=_sectionChange;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;

@end

