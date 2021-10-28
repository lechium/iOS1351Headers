//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSAnalytics/OSAStackShotReport.h>

@class NSString;

@interface PanicReport : OSAStackShotReport
{
    NSString *_panicString;	// 136 = 0x88
    NSString *_otherString;	// 144 = 0x90
    NSString *_buildVersion;	// 152 = 0x98
    unsigned long long _panicFlags;	// 160 = 0xa0
    _Bool _isBtnReset;	// 168 = 0xa8
    NSString *_storagePanicData;	// 176 = 0xb0
}

- (void)generateLogAtLevel:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004d38
- (id)reportNamePrefix;	// IMP=0x0000000100004c8c
- (id)appleCareDetails;	// IMP=0x0000000100004c7c
- (id)problemType;	// IMP=0x0000000100004c54
- (void)useStoragePanicData:(id)arg1;	// IMP=0x0000000100004c44
- (void)dealloc;	// IMP=0x0000000100004bd4
- (id)additionalIPSMetadata;	// IMP=0x0000000100004b50
- (id)getBuildVersionString;	// IMP=0x0000000100004a90
- (id)initWithPanicString:(id)arg1 otherString:(id)arg2 buildVersion:(id)arg3 panicFlags:(unsigned long long)arg4;	// IMP=0x0000000100004914

@end
