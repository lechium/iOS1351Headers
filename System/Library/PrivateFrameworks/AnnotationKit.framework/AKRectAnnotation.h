/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularShapeAnnotation.h>

@interface AKRectAnnotation : AKRectangularShapeAnnotation {

	double _cornerRadius;

}

@property (assign) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
@end

