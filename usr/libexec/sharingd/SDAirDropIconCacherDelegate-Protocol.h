//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SDAirDropIconCacher;

@protocol SDAirDropIconCacherDelegate <NSObject>
- (void)iconCacher:(SDAirDropIconCacher *)arg1 didFetchDataWithError:(NSError *)arg2;
- (void)iconCacher:(SDAirDropIconCacher *)arg1 didStoreDataWithError:(NSError *)arg2;
@end

