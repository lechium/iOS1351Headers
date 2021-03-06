/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCContentContext;
@interface FCFlintResourceManager : NSObject {

	id<FCContentContext> _context;

}

@property (nonatomic,readonly) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(id)initWithContext:(id)arg1 ;
-(id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 cacheLifetimeHint:(long long)arg3 relativePriority:(long long)arg4 callBackQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)fetchFontResourcesWithIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)cachedResourcesWithIdentifiers:(id)arg1 ;
@end

