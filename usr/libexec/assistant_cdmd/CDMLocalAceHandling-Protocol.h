//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol CDMCFHandlerDelegate;

@protocol CDMLocalAceHandling <NSObject>
- (void)handleWithDelegate:(id <CDMCFHandlerDelegate>)arg1 clientId:(NSString *)arg2 completion:(void (^)(SABaseCommand *, NSError *))arg3;
@end
