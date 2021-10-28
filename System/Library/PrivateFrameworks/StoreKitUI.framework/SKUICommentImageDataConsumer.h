/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStyledImageDataConsumer.h>

@interface SKUICommentImageDataConsumer : SKUIStyledImageDataConsumer {

	/*^block*/id _completionBlock;

}

@property (copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(id)_scaledImageWithBounds:(CGSize)arg1 contentRect:(CGRect)arg2 drawBlock:(/*^block*/id)arg3 ;
@end
