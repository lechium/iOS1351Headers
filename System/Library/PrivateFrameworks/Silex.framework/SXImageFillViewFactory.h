/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXImageFillViewFactory.h>

@protocol SXImageFillViewFactory <NSObject>
@required
-(id)createImageFillViewForImageFill:(id)arg1;

@end


@protocol SXDOMObjectProviding, SXImageViewFactory;
@class NSString;

@interface SXImageFillViewFactory : NSObject <SXImageFillViewFactory> {

	id<SXDOMObjectProviding> _DOMObjectProvider;
	id<SXImageViewFactory> _imageViewFactory;

}

@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;              //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) id<SXImageViewFactory> imageViewFactory;                 //@synthesize imageViewFactory=_imageViewFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id)createImageFillViewForImageFill:(id)arg1 ;
-(id<SXImageViewFactory>)imageViewFactory;
-(id)initWithDOMObjectProvider:(id)arg1 imageViewFactory:(id)arg2 ;
@end

