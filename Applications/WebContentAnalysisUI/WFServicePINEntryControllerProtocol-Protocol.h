//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL;

@protocol WFServicePINEntryControllerProtocol
- (void)permitURLWithCompletion:(void (^)(NSError *))arg1;
- (void)getIsPINPresentWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)cancel;
- (void)setPageTitle:(NSString *)arg1;
- (void)setURL:(NSURL *)arg1;
@end
