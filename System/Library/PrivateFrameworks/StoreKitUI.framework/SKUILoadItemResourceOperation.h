/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SSVPlatformRequestOperation, SKUIItemResourceRequest;

@interface SKUILoadItemResourceOperation : SKUILoadResourceOperation {

	SSVPlatformRequestOperation* _underlyingOperation;

}

@property (__weak) SSVPlatformRequestOperation * underlyingOperation;              //@synthesize underlyingOperation=_underlyingOperation - In the implementation block
@property (copy,readonly) SKUIItemResourceRequest * resourceRequest; 
-(void)cancel;
-(void)main;
-(id)initWithResourceRequest:(id)arg1 ;
-(void)setUnderlyingOperation:(SSVPlatformRequestOperation *)arg1 ;
-(SSVPlatformRequestOperation *)underlyingOperation;
@end

