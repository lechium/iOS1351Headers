/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIBezierPath, UIDragPreviewParameters;

@interface _DUIPreview : NSObject <NSSecureCoding, NSCopying> {

	BOOL _fadesHorizontally;
	BOOL _fadesVertically;
	BOOL _hidesSourceView;
	BOOL _avoidAnimation;
	BOOL _wantsSuppressedMask;
	unsigned _coordinateSpaceSourceContextID;
	UIColor* _backgroundColor;
	UIBezierPath* _outline;
	unsigned long long _coordinateSpaceSourceLayerRenderID;
	double _originalRotation;
	long long _previewMode;
	CGPoint _contentOffset;
	CGSize _contentSize;
	CGPoint _originalCenter;
	CGPoint _originalCenterInCoordinateSpace;
	CGPoint _liftAnchorPoint;
	CGSize _viewScaleFactor;

}

@property (nonatomic,readonly) CGSize viewScaleFactor;                                           //@synthesize viewScaleFactor=_viewScaleFactor - In the implementation block
@property (nonatomic,readonly) BOOL _springboardPlatterStyle; 
@property (nonatomic,readonly) double backAlpha; 
@property (nonatomic,copy) UIColor * backgroundColor;                                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) CGSize boundingSize; 
@property (nonatomic,readonly) CGPoint contentOffset;                                            //@synthesize contentOffset=_contentOffset - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                               //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) CGPoint croppedScaledAnchorPoint; 
@property (nonatomic,readonly) CGSize croppedScaledSize; 
@property (assign,nonatomic) BOOL fadesHorizontally;                                             //@synthesize fadesHorizontally=_fadesHorizontally - In the implementation block
@property (assign,nonatomic) BOOL fadesVertically;                                               //@synthesize fadesVertically=_fadesVertically - In the implementation block
@property (nonatomic,readonly) double liftAlpha; 
@property (nonatomic,readonly) CGAffineTransform liftTransform; 
@property (assign,nonatomic) BOOL hidesSourceView;                                               //@synthesize hidesSourceView=_hidesSourceView - In the implementation block
@property (nonatomic,copy) UIBezierPath * outline;                                               //@synthesize outline=_outline - In the implementation block
@property (assign,nonatomic) CGPoint originalCenter;                                             //@synthesize originalCenter=_originalCenter - In the implementation block
@property (assign,nonatomic) CGPoint originalCenterInCoordinateSpace;                            //@synthesize originalCenterInCoordinateSpace=_originalCenterInCoordinateSpace - In the implementation block
@property (assign,nonatomic) unsigned coordinateSpaceSourceContextID;                            //@synthesize coordinateSpaceSourceContextID=_coordinateSpaceSourceContextID - In the implementation block
@property (assign,nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID;              //@synthesize coordinateSpaceSourceLayerRenderID=_coordinateSpaceSourceLayerRenderID - In the implementation block
@property (assign,nonatomic) double originalRotation;                                            //@synthesize originalRotation=_originalRotation - In the implementation block
@property (getter=isOversized,nonatomic,readonly) BOOL oversized; 
@property (nonatomic,readonly) double scaleFactor; 
@property (nonatomic,readonly) CGSize scaledSize; 
@property (nonatomic,readonly) double stackAlpha; 
@property (assign,nonatomic) BOOL textMode; 
@property (assign,nonatomic) long long previewMode;                                              //@synthesize previewMode=_previewMode - In the implementation block
@property (nonatomic,readonly) double topAlpha; 
@property (nonatomic,readonly) CGPoint unscaledAnchorPoint; 
@property (nonatomic,readonly) CGSize unscaledSize; 
@property (nonatomic,readonly) UIDragPreviewParameters * parameters; 
@property (assign,nonatomic) CGPoint liftAnchorPoint;                                            //@synthesize liftAnchorPoint=_liftAnchorPoint - In the implementation block
@property (assign,nonatomic) BOOL avoidAnimation;                                                //@synthesize avoidAnimation=_avoidAnimation - In the implementation block
@property (assign,nonatomic) BOOL wantsSuppressedMask;                                           //@synthesize wantsSuppressedMask=_wantsSuppressedMask - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultPreviewWithFrame:(CGRect)arg1 ;
+(double)defaultStackAlpha;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIDragPreviewParameters *)parameters;
-(CGSize)contentSize;
-(double)scaleFactor;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(CGPoint)contentOffset;
-(void)setLiftAnchorPoint:(CGPoint)arg1 ;
-(void)setHidesSourceView:(BOOL)arg1 ;
-(double)liftAlpha;
-(CGSize)unscaledSize;
-(BOOL)wantsSuppressedMask;
-(long long)previewMode;
-(UIBezierPath *)outline;
-(CGSize)croppedScaledSize;
-(BOOL)hidesSourceView;
-(CGAffineTransform)liftTransform;
-(double)originalRotation;
-(double)stackAlpha;
-(BOOL)_springboardPlatterStyle;
-(id)initWithBounds:(CGRect)arg1 outline:(id)arg2 ;
-(id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3 center:(CGPoint)arg4 ;
-(CGSize)viewScaleFactor;
-(BOOL)textMode;
-(CGSize)boundingSize;
-(CGPoint)liftAnchorPoint;
-(double)_topOffset;
-(void)setPreviewMode:(long long)arg1 ;
-(CGPoint)unscaledAnchorPoint;
-(CGSize)scaledSize;
-(id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3 ;
-(double)backAlpha;
-(BOOL)isOversized;
-(double)topAlpha;
-(void)setTextMode:(BOOL)arg1 ;
-(CGPoint)croppedScaledAnchorPoint;
-(BOOL)fadesHorizontally;
-(BOOL)fadesVertically;
-(void)setFadesHorizontally:(BOOL)arg1 ;
-(void)setFadesVertically:(BOOL)arg1 ;
-(void)setOutline:(UIBezierPath *)arg1 ;
-(CGPoint)originalCenter;
-(void)setOriginalCenter:(CGPoint)arg1 ;
-(CGPoint)originalCenterInCoordinateSpace;
-(void)setOriginalCenterInCoordinateSpace:(CGPoint)arg1 ;
-(unsigned)coordinateSpaceSourceContextID;
-(void)setCoordinateSpaceSourceContextID:(unsigned)arg1 ;
-(unsigned long long)coordinateSpaceSourceLayerRenderID;
-(void)setCoordinateSpaceSourceLayerRenderID:(unsigned long long)arg1 ;
-(void)setOriginalRotation:(double)arg1 ;
-(BOOL)avoidAnimation;
-(void)setAvoidAnimation:(BOOL)arg1 ;
-(void)setWantsSuppressedMask:(BOOL)arg1 ;
@end

