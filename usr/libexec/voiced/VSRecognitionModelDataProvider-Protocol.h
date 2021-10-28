//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol VSRecognitionModelDataProvider <NSObject>
- (long long)valueCountForClassWithIdentifier:(NSString *)arg1 inModelWithIdentifier:(NSString *)arg2;

@optional
- (void)stopReportingChanges;
- (void)beginReportingChanges;
- (_Bool)isCacheValidityIdentifierValid:(NSDictionary *)arg1;
- (NSDictionary *)cacheValidityIdentifier;
- (NSString *)phoneticValueAtIndex:(long long)arg1 forClassWithIdentifier:(NSString *)arg2 inModelWithIdentifier:(NSString *)arg3;
- (_Bool)getValue:(id *)arg1 weight:(long long *)arg2 atIndex:(long long)arg3 forClassWithIdentifier:(NSString *)arg4 inModelWithIdentifier:(NSString *)arg5;
- (NSString *)valueAtIndex:(long long)arg1 forClassWithIdentifier:(NSString *)arg2 inModelWithIdentifier:(NSString *)arg3;
@end
