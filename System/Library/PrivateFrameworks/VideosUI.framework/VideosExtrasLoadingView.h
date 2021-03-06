/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/IKAppDocumentDelegate.h>

@protocol VideosExtrasLoadingViewDelegate;
@class IKAppDocument, NSDictionary, VideosExtrasActivityIndicator, NSString;

@interface VideosExtrasLoadingView : UIView <IKAppDocumentDelegate> {

	IKAppDocument* _document;
	NSDictionary* _options;
	VideosExtrasActivityIndicator* _activityIndicator;
	id<VideosExtrasLoadingViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_show;
-(void)documentNeedsUpdate:(id)arg1 ;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 delegate:(id)arg3 ;
-(void)startCountdownToVisibilityWithInterval:(double)arg1 ;
-(void)cancelCountdownToVisibility;
@end

