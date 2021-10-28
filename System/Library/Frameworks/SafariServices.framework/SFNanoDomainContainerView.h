/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class _SFBrowserView;

@interface SFNanoDomainContainerView : UIView {

	double _maximumHeight;
	_SFBrowserView* _browserView;

}

@property (assign,nonatomic) double maximumHeight;                             //@synthesize maximumHeight=_maximumHeight - In the implementation block
@property (assign,nonatomic,__weak) _SFBrowserView * browserView;              //@synthesize browserView=_browserView - In the implementation block
+(double)defaultHeight;
+(double)defaultTopOffset;
+(double)defaultHeightInsideQuickboard;
-(_SFBrowserView *)browserView;
-(void)setMaximumHeight:(double)arg1 ;
-(double)maximumHeight;
-(void)updateWithDomain:(id)arg1 isSecure:(BOOL)arg2 showsNotSecureAnotation:(BOOL)arg3 ;
-(void)setBrowserView:(_SFBrowserView *)arg1 ;
@end
