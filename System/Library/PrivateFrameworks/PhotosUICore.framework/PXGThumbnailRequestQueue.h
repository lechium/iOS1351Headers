/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGThumbnailRequestQueue : NSObject {

	long long _capacity;
	long long _count;
	PXGThumbnailRequest* _requests;

}

@property (assign,nonatomic) long long count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) PXGThumbnailRequest* requests;              //@synthesize requests=_requests - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(PXGThumbnailRequest*)requests;
-(void)enqueueRequestsWithItemRange:(NSRange)arg1 textureRequestIDs:(NSRange)arg2 displayAssetFetchResult:(id)arg3 targetSize:(CGSize)arg4 ;
-(void)sortRequests;
-(void)removeAllRequests;
@end

