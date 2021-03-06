//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSProgress;

@interface DownloadAssetProgress : NSObject
{
    NSProgress *_overallProgress;	// 8 = 0x8
    NSMapTable *_mediaSelectionToProgressMap;	// 16 = 0x10
    unsigned long long _numMediaSelectionsCompleted;	// 24 = 0x18
    unsigned long long _numMediaSelectionsToReceiveProgress;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100207af0
@property(nonatomic) unsigned long long numMediaSelectionsToReceiveProgress; // @synthesize numMediaSelectionsToReceiveProgress=_numMediaSelectionsToReceiveProgress;
- (void)setMediaSelectionDidComplete:(id)arg1;	// IMP=0x0000000100207ad0
- (void)setProgress:(double)arg1 forMediaSelection:(id)arg2;	// IMP=0x0000000100207920
@property(readonly, nonatomic) double progress;
- (id)init;	// IMP=0x000000010020789c

@end

