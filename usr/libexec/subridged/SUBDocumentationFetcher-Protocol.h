//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SUBDescriptor;

@protocol SUBDocumentationFetcher <NSObject>
- (void)purgeAssetsNotMatchingDescriptor:(SUBDescriptor *)arg1 completion:(void (^)(void))arg2;
- (void)fetchDocumentationForDescriptor:(SUBDescriptor *)arg1 localOnly:(_Bool)arg2 shouldOverrideURL:(_Bool)arg3 overrideURL:(NSURL *)arg4 completion:(void (^)(SUBDocumentation *, NSError *))arg5;
- (void)fetchDocumentationForDescriptor:(SUBDescriptor *)arg1 localOnly:(_Bool)arg2 completion:(void (^)(SUBDocumentation *, NSError *))arg3;
@end
