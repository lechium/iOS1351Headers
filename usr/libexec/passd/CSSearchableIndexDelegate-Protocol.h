//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSSearchableIndex, NSArray, NSData, NSString, NSURL;

@protocol CSSearchableIndexDelegate <NSObject>
- (void)searchableIndex:(CSSearchableIndex *)arg1 reindexSearchableItemsWithIdentifiers:(NSArray *)arg2 acknowledgementHandler:(void (^)(void))arg3;
- (void)searchableIndex:(CSSearchableIndex *)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(void (^)(void))arg2;

@optional
- (NSURL *)fileURLForSearchableIndex:(CSSearchableIndex *)arg1 itemIdentifier:(NSString *)arg2 typeIdentifier:(NSString *)arg3 inPlace:(_Bool)arg4 error:(out id *)arg5;
- (NSData *)dataForSearchableIndex:(CSSearchableIndex *)arg1 itemIdentifier:(NSString *)arg2 typeIdentifier:(NSString *)arg3 error:(out id *)arg4;
- (void)searchableIndexDidFinishThrottle:(CSSearchableIndex *)arg1;
- (void)searchableIndexDidThrottle:(CSSearchableIndex *)arg1;
@end
