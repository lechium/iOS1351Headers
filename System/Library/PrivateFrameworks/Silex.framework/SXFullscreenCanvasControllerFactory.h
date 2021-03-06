/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXFullscreenCanvasControllerFactory.h>

@protocol SXFullscreenCanvasControllerFactory <NSObject>
@required
-(id)fullscreenCanvasControllerForShowable:(id)arg1;

@end


@protocol SXFullscreenCaptionViewFactory, SXPresentationAttributesProvider, SXMediaSharingPolicyProvider;
@class NSString;

@interface SXFullscreenCanvasControllerFactory : NSObject <SXFullscreenCanvasControllerFactory> {

	id<SXFullscreenCaptionViewFactory> _captionViewFactory;
	id<SXPresentationAttributesProvider> _presentationAttributesProvider;
	id<SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;

}

@property (nonatomic,readonly) id<SXFullscreenCaptionViewFactory> captionViewFactory;                            //@synthesize captionViewFactory=_captionViewFactory - In the implementation block
@property (nonatomic,readonly) id<SXPresentationAttributesProvider> presentationAttributesProvider;              //@synthesize presentationAttributesProvider=_presentationAttributesProvider - In the implementation block
@property (nonatomic,readonly) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;                      //@synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXMediaSharingPolicyProvider>)mediaSharingPolicyProvider;
-(id<SXFullscreenCaptionViewFactory>)captionViewFactory;
-(id)fullscreenCanvasControllerForShowable:(id)arg1 ;
-(id)initWithCaptionViewFactory:(id)arg1 presentationAttributesProvider:(id)arg2 mediaSharingPolicyProvider:(id)arg3 ;
-(id<SXPresentationAttributesProvider>)presentationAttributesProvider;
@end

