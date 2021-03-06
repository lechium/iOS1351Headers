/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCHeadlineProviding, OS_dispatch_group;
@class NSString, FCArticleContentManifest, NSObject, NSError, FCFetchOperation;

@interface FCArticle : NSObject {

	NSString* _articleID;
	id<FCHeadlineProviding> _headline;
	FCArticleContentManifest* _contentManifest;
	NSObject*<OS_dispatch_group> _fetchGroup;
	NSError* _fetchError;
	FCFetchOperation* _headlineFetchOperation;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchGroup;                 //@synthesize fetchGroup=_fetchGroup - In the implementation block
@property (nonatomic,retain) NSError * fetchError;                                    //@synthesize fetchError=_fetchError - In the implementation block
@property (nonatomic,retain) FCFetchOperation * headlineFetchOperation;               //@synthesize headlineFetchOperation=_headlineFetchOperation - In the implementation block
@property (nonatomic,retain) id<FCHeadlineProviding> headline;                        //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) FCArticleContentManifest * contentManifest;              //@synthesize contentManifest=_contentManifest - In the implementation block
@property (nonatomic,readonly) NSString * articleID;                                  //@synthesize articleID=_articleID - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setHeadline:(id<FCHeadlineProviding>)arg1 ;
-(id<FCHeadlineProviding>)headline;
-(void)setFetchError:(NSError *)arg1 ;
-(NSError *)fetchError;
-(NSString *)articleID;
-(id)initWithContext:(id)arg1 articleID:(id)arg2 forceArticleUpdate:(BOOL)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5 ;
-(id)initWithContext:(id)arg1 headline:(id)arg2 ;
-(NSObject*<OS_dispatch_group>)fetchGroup;
-(void)setFetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setContentManifest:(FCArticleContentManifest *)arg1 ;
-(FCArticleContentManifest *)contentManifest;
-(void)performBlockWhenFullyLoaded:(/*^block*/id)arg1 ;
-(void)performBlockWhenContentManifestIsLoaded:(/*^block*/id)arg1 ;
-(FCFetchOperation *)headlineFetchOperation;
-(void)setHeadlineFetchOperation:(FCFetchOperation *)arg1 ;
@end

