//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, _CPLCloudKitOperationSession;

@interface CPLCloudKitOperationCounter : NSObject
{
    NSMutableArray *_sessions;	// 8 = 0x8
    _CPLCloudKitOperationSession *_currentSession;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000c8340
- (id)status;	// IMP=0x00000001000c8034
- (id)statusObject;	// IMP=0x00000001000c7d70
- (void)endTask:(id)arg1 withOperationClasses:(id)arg2 operationsAllowingCellular:(id)arg3;	// IMP=0x00000001000c7bb8
- (void)beginTask:(id)arg1;	// IMP=0x00000001000c794c
- (id)init;	// IMP=0x00000001000c78e8

@end
