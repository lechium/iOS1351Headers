//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB;

@interface GEOAnalyticsPipelinePersistence : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
    _Bool _shadowEnabled;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000146a4
- (void).cxx_destruct;	// IMP=0x0000000100016dd8
- (void)clearAllData;	// IMP=0x0000000100016d4c
- (void)clearPendingLogMsgElemsForBatchUploadOfPolicyType:(int)arg1;	// IMP=0x0000000100016b84
- (void)clearExpiredLogMsgsWithResultBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016610
- (void)selectMapKitCountWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016140
- (void)selectLogMsgsForBatchUploadOfPolicyType:(int)arg1 visitorBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100015bcc
- (id)selectHandlingPoliciesForBatchUpload;	// IMP=0x00000001000159d8
- (void)storeLogMsgElems:(id)arg1;	// IMP=0x0000000100015700
- (void)_writeMapKitCountElem:(id)arg1;	// IMP=0x00000001000154c8
- (void)_writeLogMsgQueueElem:(id)arg1;	// IMP=0x0000000100015080
- (long long)_analyticsCount;	// IMP=0x0000000100014f48
- (void)_tearDown;	// IMP=0x0000000100014ed4
- (void)dealloc;	// IMP=0x0000000100014e88
- (void)_setupEvalStmtsOnDb:(id)arg1;	// IMP=0x0000000100014c68
- (id)initWithDBFilePath:(id)arg1;	// IMP=0x0000000100014770
- (id)init;	// IMP=0x0000000100014710
- (id)getEvalStatus;	// IMP=0x0000000100017a94
- (void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(CDUnknownBlockType)arg2 summaryBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000176f0
- (void)flushEvalData;	// IMP=0x0000000100017638
- (void)setEvalMode:(_Bool)arg1;	// IMP=0x0000000100017588

@end

