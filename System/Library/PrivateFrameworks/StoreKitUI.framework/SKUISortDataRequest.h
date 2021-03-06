/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIResourceRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SKUISortDataRequestDelegate;
@class NSURL;

@interface SKUISortDataRequest : SKUIResourceRequest <NSCopying> {

	id<SKUISortDataRequestDelegate> _delegate;
	NSURL* _sortURL;

}

@property (nonatomic,readonly) NSURL * sortURL;                                            //@synthesize sortURL=_sortURL - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISortDataRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SKUISortDataRequestDelegate>)delegate;
-(void)setDelegate:(id<SKUISortDataRequestDelegate>)arg1 ;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
-(id)initWithSortURL:(id)arg1 ;
-(NSURL *)sortURL;
@end

