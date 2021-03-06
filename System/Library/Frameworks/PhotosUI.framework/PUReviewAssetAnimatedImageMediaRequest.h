/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PUReviewAssetCancelableMediaRequest.h>

@interface PUReviewAssetAnimatedImageMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest> {

	long long __animatedRequestID;

}

@property (nonatomic,readonly) long long _animatedRequestID;              //@synthesize _animatedRequestID=__animatedRequestID - In the implementation block
-(void)cancelRequest;
-(id)initWithAnimatedImageRequestID:(long long)arg1 ;
-(long long)_animatedRequestID;
@end

