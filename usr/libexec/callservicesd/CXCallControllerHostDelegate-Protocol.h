//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CXCallControllerHost, CXTransaction, NSString;

@protocol CXCallControllerHostDelegate <NSObject>
- (void)callControllerHost:(CXCallControllerHost *)arg1 clientWithIdentifier:(NSString *)arg2 requestedTransaction:(CXTransaction *)arg3 completion:(void (^)(NSError *))arg4;
@end

