//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHPhotoLibrary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPSceneProcessingChangeBatch : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSMutableArray *_pendingChanges;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_publishQueue;	// 24 = 0x18
}

+ (id)batchForPhotoLibrary:(id)arg1;	// IMP=0x0000000100038ce0
- (void).cxx_destruct;	// IMP=0x0000000100039528
- (void)publishWithCompletionHandler:(CDUnknownBlockType)arg1 andCancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038f3c
- (int)updateAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x0000000100038d60
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x0000000100038bf4

@end

