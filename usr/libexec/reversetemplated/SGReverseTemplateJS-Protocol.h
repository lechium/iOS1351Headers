//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary;

@protocol SGReverseTemplateJS
- (void)emailToJsonLd:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)schemaOrgToOutput:(NSDictionary *)arg1 reply:(void (^)(NSArray *, NSArray *, NSDictionary *))arg2;
- (void)textMessageToOutput:(NSDictionary *)arg1 reply:(void (^)(NSArray *, NSArray *, NSDictionary *))arg2;
- (void)emailToOutput:(NSDictionary *)arg1 reply:(void (^)(NSArray *, NSArray *, NSDictionary *))arg2;
- (void)shouldDownloadFull:(NSDictionary *)arg1 reply:(void (^)(_Bool))arg2;
@end
