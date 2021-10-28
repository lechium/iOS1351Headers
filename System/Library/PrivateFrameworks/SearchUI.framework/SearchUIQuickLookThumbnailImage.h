/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUIImage.h>

@class NSURL, QLThumbnailGenerationRequest;

@interface SearchUIQuickLookThumbnailImage : SearchUIImage {

	NSURL* _url;
	QLThumbnailGenerationRequest* _request;

}

@property (nonatomic,retain) NSURL * url;                               //@synthesize url=_url - In the implementation block
@property (__weak) QLThumbnailGenerationRequest * request;              //@synthesize request=_request - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(Class)classForCoder;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(void)setRequest:(QLThumbnailGenerationRequest *)arg1 ;
-(QLThumbnailGenerationRequest *)request;
-(void)setUrl:(NSURL *)arg1 ;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
@end
