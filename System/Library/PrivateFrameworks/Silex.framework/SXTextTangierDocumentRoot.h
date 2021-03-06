/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSReading/TSKDocumentRoot.h>

@class UIViewController, TSSStylesheet;

@interface SXTextTangierDocumentRoot : TSKDocumentRoot {

	UIViewController* _viewController;
	TSSStylesheet* _aStylesheet;

}

@property (nonatomic,readonly) TSSStylesheet * aStylesheet;                         //@synthesize aStylesheet=_aStylesheet - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)stylesheet;
-(TSSStylesheet *)aStylesheet;
@end

