/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXLayouter.h>

@protocol SXLayouterDelegate, SXColumnCalculator, SXUnitConverterFactory;
@class SXLayouterFactory, SXContainerComponentBlueprint, NSString;

@interface SXCollectionLayouter : NSObject <SXLayouter> {

	id<SXLayouterDelegate> _delegate;
	SXLayouterFactory* _layouterFactory;
	SXContainerComponentBlueprint* _containerComponentBlueprint;
	id<SXColumnCalculator> _columnCalculator;
	id<SXUnitConverterFactory> _unitConverterFactory;

}

@property (nonatomic,readonly) SXLayouterFactory * layouterFactory;                                      //@synthesize layouterFactory=_layouterFactory - In the implementation block
@property (nonatomic,readonly) SXContainerComponentBlueprint * containerComponentBlueprint;              //@synthesize containerComponentBlueprint=_containerComponentBlueprint - In the implementation block
@property (nonatomic,readonly) id<SXColumnCalculator> columnCalculator;                                  //@synthesize columnCalculator=_columnCalculator - In the implementation block
@property (nonatomic,readonly) id<SXUnitConverterFactory> unitConverterFactory;                          //@synthesize unitConverterFactory=_unitConverterFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SXLayouterDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
-(id<SXLayouterDelegate>)delegate;
-(void)setDelegate:(id<SXLayouterDelegate>)arg1 ;
-(id<SXUnitConverterFactory>)unitConverterFactory;
-(SXLayouterFactory *)layouterFactory;
-(void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(BOOL*)arg4 ;
-(id<SXColumnCalculator>)columnCalculator;
-(SXContainerComponentBlueprint *)containerComponentBlueprint;
-(id)childColumnLayoutForRowLayout:(id)arg1 display:(id)arg2 collectionContainerBlueprint:(id)arg3 childContainerComponentBlueprint:(id)arg4 documentColumnLayout:(id)arg5 unitConverter:(id)arg6 ;
-(id)initWithContainerComponent:(id)arg1 layouterFactory:(id)arg2 columnCalculator:(id)arg3 unitConverterFactory:(id)arg4 ;
@end

