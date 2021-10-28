//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSString;

@interface RescueAbandonedPlaceholderOperation : Task
{
    NSString *_bundleID;	// 8 = 0x8
    CDUnknownBlockType _outputBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100127dc4
- (id)_fetchAppProxyForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100127a7c
- (_Bool)_canRescueInstallTypeForBundleID:(id)arg1 proxy:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100127768
- (void)_attemptRescueForBundleID:(id)arg1;	// IMP=0x0000000100127584
- (void)main;	// IMP=0x00000001001272d0
@property(copy, nonatomic) CDUnknownBlockType outputBlock;
- (id)initWithBundleID:(id)arg1;	// IMP=0x000000010012715c

@end
