/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class _TVCommonSenseView, IKViewElement;

@interface _TVCommonSenseTemplateController : UIViewController {

	_TVCommonSenseView* _commonSenseView;
	IKViewElement* _templateElement;

}

@property (nonatomic,retain) _TVCommonSenseView * commonSenseView;              //@synthesize commonSenseView=_commonSenseView - In the implementation block
@property (nonatomic,retain) IKViewElement * templateElement;                   //@synthesize templateElement=_templateElement - In the implementation block
-(void)loadView;
-(IKViewElement *)templateElement;
-(void)setTemplateElement:(IKViewElement *)arg1 ;
-(void)_loadTemplate;
-(void)_updateHeaderWithElement:(id)arg1 ;
-(id)_infoTableFromElement:(id)arg1 ;
-(void)_updateFooterWithElement:(id)arg1 ;
-(_TVCommonSenseView *)commonSenseView;
-(void)updateWithCommonSenseTemplate:(id)arg1 ;
-(void)setCommonSenseView:(_TVCommonSenseView *)arg1 ;
@end

