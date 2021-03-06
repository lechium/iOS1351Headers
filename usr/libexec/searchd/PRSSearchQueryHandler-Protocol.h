//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, PRSQueryTask;

@protocol PRSSearchQueryHandler <NSObject>
- (void)query:(PRSQueryTask *)arg1 didFinishWithResults:(NSArray *)arg2 withSuggestions:(NSArray *)arg3 withCorrections:(NSArray *)arg4;

@optional
- (double)scaleFactor;
- (void)geoUserSessionEntityString:(NSString *)arg1;
- (void)queryDidFinishLoading:(PRSQueryTask *)arg1;
@end

