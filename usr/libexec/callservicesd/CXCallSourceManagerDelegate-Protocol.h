//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CXCallSourceUpdates-Protocol.h"

@class CXAction, CXCallSource, CXCallSourceManager, CXTransactionGroup;

@protocol CXCallSourceManagerDelegate <CXCallSourceUpdates>
- (_Bool)callSource:(CXCallSource *)arg1 shouldProcessAction:(CXAction *)arg2 error:(id *)arg3;
- (void)callSourcesChangedForCallSourceManager:(CXCallSourceManager *)arg1;
- (void)callSourceManager:(CXCallSourceManager *)arg1 completedTransactionGroup:(CXTransactionGroup *)arg2;
@end

