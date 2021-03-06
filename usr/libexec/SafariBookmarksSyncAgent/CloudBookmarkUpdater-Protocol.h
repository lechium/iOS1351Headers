//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CKRecordZoneID, CloudBookmarkPosition, NSData, NSString;

@protocol CloudBookmarkUpdater <NSObject>
@property(readonly, nonatomic) CKRecordZoneID *bookmarksRecordZoneID;
@property(readonly, nonatomic) NSString *deviceIdentifier;
- (CloudBookmarkPosition *)positionForCloudBookmarkWithRecordName:(NSString *)arg1;
- (NSData *)generateHashWithTitle:(NSString *)arg1 urlString:(NSString *)arg2;
@end

