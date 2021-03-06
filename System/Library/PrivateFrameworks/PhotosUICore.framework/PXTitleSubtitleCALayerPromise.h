/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCALayerPromise.h>
#import <libobjc.A.dylib/PXMutableTitleSubtitleCALayerPromise.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSString, PXTitleSubtitleLabelSpec, NSArray;

@interface PXTitleSubtitleCALayerPromise : PXCALayerPromise <PXMutableTitleSubtitleCALayerPromise, CALayerDelegate> {

	BOOL _diagnosticsEnabled;
	NSString* _titleText;
	NSString* _subtitleText;
	PXTitleSubtitleLabelSpec* _spec;
	long long _typesettingMode;
	double _layerLastBaseline;
	double __textScaleFactor;
	NSArray* _diagnosticsRenderedLines;
	CGRect _layerContentBounds;

}

@property (nonatomic,readonly) double _textScaleFactor;                              //@synthesize _textScaleFactor=__textScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL diagnosticsEnabled;                                //@synthesize diagnosticsEnabled=_diagnosticsEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * diagnosticsRenderedLines;              //@synthesize diagnosticsRenderedLines=_diagnosticsRenderedLines - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleText;                            //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitleText;                         //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,readonly) PXTitleSubtitleLabelSpec * spec;                      //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) long long typesettingMode;                            //@synthesize typesettingMode=_typesettingMode - In the implementation block
@property (nonatomic,readonly) CGRect layerContentBounds;                            //@synthesize layerContentBounds=_layerContentBounds - In the implementation block
@property (nonatomic,readonly) double layerLastBaseline;                             //@synthesize layerLastBaseline=_layerLastBaseline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) double contentsScale; 
@property (assign,nonatomic) BOOL rendersAsynchronously; 
-(id)init;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setSpec:(PXTitleSubtitleLabelSpec *)arg1 ;
-(PXTitleSubtitleLabelSpec *)spec;
-(NSString *)titleText;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(BOOL)diagnosticsEnabled;
-(long long)typesettingMode;
-(void)setTypesettingMode:(long long)arg1 ;
-(id)createCustomLayer;
-(void)drawLayerContentInContext:(CGContextRef)arg1 ;
-(id)_linesToRenderWithContext:(CGContextRef)arg1 ;
-(id)_attributedStringForLabelWithText:(id)arg1 spec:(id)arg2 ;
-(id)_stringByReplacingNonbreakableWhitespaceToAllowLineWrapping:(id)arg1 maxWidth:(double)arg2 ;
-(CGRect)layerContentBounds;
-(double)layerLastBaseline;
-(double)_textScaleFactor;
-(NSArray *)diagnosticsRenderedLines;
@end

