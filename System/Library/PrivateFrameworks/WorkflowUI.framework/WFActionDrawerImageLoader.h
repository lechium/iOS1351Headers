/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSCache;

@interface WFActionDrawerImageLoader : NSObject {

	NSObject*<OS_dispatch_queue> _imageLoadingQueue;
	NSCache* _imageCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> imageLoadingQueue;              //@synthesize imageLoadingQueue=_imageLoadingQueue - In the implementation block
@property (nonatomic,readonly) NSCache * imageCache;                                        //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSCache *)imageCache;
-(NSObject*<OS_dispatch_queue>)imageLoadingQueue;
-(id)loadImagesForInteractionDonation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

