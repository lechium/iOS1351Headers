/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IKStyleList, IKViewElementStyle;

@interface IKViewElementStyleComposer : NSObject {

	BOOL _requiresMediaQueryEvaluation;
	BOOL _compositionDone;
	IKViewElementStyleComposer* _defaultStyleComposer;
	IKViewElementStyleComposer* _parentStyleComposer;
	IKStyleList* _styleList;
	IKViewElementStyle* _elementStyleOverrides;
	IKViewElementStyle* _composedSansDefaultStyle;
	IKViewElementStyle* _composedStyle;

}

@property (nonatomic,readonly) BOOL requiresMediaQueryEvaluation;                                     //@synthesize requiresMediaQueryEvaluation=_requiresMediaQueryEvaluation - In the implementation block
@property (nonatomic,retain) IKViewElementStyle * composedSansDefaultStyle;                           //@synthesize composedSansDefaultStyle=_composedSansDefaultStyle - In the implementation block
@property (nonatomic,retain) IKViewElementStyle * composedStyle;                                      //@synthesize composedStyle=_composedStyle - In the implementation block
@property (nonatomic,retain,readonly) IKViewElementStyleComposer * defaultStyleComposer;              //@synthesize defaultStyleComposer=_defaultStyleComposer - In the implementation block
@property (nonatomic,retain,readonly) IKViewElementStyleComposer * parentStyleComposer;               //@synthesize parentStyleComposer=_parentStyleComposer - In the implementation block
@property (nonatomic,retain,readonly) IKStyleList * styleList;                                        //@synthesize styleList=_styleList - In the implementation block
@property (nonatomic,retain,readonly) IKViewElementStyle * elementStyleOverrides;                     //@synthesize elementStyleOverrides=_elementStyleOverrides - In the implementation block
@property (getter=isCompositionDone,nonatomic,readonly) BOOL compositionDone;                         //@synthesize compositionDone=_compositionDone - In the implementation block
+(id)styleComposerWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4 ;
-(BOOL)requiresMediaQueryEvaluation;
-(id)composedStyleWithMediaQueryEvaluator:(id)arg1 ;
-(id)initWithDefaultStyleComposer:(id)arg1 parentStyleComposer:(id)arg2 styleList:(id)arg3 elementStyleOverrides:(id)arg4 ;
-(void)_composeWithMediaQueryEvaluator:(id)arg1 ;
-(BOOL)isCompositionDone;
-(IKViewElementStyle *)composedStyle;
-(void)setComposedSansDefaultStyle:(IKViewElementStyle *)arg1 ;
-(void)setComposedStyle:(IKViewElementStyle *)arg1 ;
-(IKStyleList *)styleList;
-(IKViewElementStyleComposer *)defaultStyleComposer;
-(void)setNeedsRecomposition;
-(id)consolidatedDefaultStyleList;
-(IKViewElementStyle *)composedSansDefaultStyle;
-(IKViewElementStyleComposer *)parentStyleComposer;
-(id)composedSansDefaultStyleWithMediaQueryEvaluator:(id)arg1 ;
-(IKViewElementStyle *)elementStyleOverrides;
@end

