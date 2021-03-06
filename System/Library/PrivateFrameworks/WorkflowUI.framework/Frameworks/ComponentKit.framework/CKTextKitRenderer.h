/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKTextKitTruncating;
#import <ComponentKit/ComponentKit-Structs.h>
@class CKTextKitContext, CKTextKitShadower, UITraitCollection;

@interface CKTextKitRenderer : NSObject {

	CGSize _calculatedSize;
	double _verticalOffset;
	CKTextKitContext* _context;
	id<CKTextKitTruncating> _truncater;
	CKTextKitShadower* _shadower;
	UITraitCollection* _traitCollection;
	CGSize _constrainedSize;
	CKTextKitAttributes* _attributes;

}

@property (nonatomic,readonly) CKTextKitContext * context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<CKTextKitTruncating> truncater;              //@synthesize truncater=_truncater - In the implementation block
@property (nonatomic,readonly) CKTextKitShadower * shadower;                   //@synthesize shadower=_shadower - In the implementation block
@property (nonatomic,readonly) CKTextKitAttributes* attributes;                //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) CGSize constrainedSize;                         //@synthesize constrainedSize=_constrainedSize - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
-(CGSize)size;
-(CKTextKitAttributes*)attributes;
-(CKTextKitContext *)context;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(unsigned long long)lineCount;
-(void)_calculateSize;
-(id)initWithTextKitAttributes:(const CKTextKitAttributes*)arg1 constrainedSize:(CGSize)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 bounds:(CGRect)arg2 ;
-(CGSize)constrainedSize;
-(id)rectsForTextRange:(NSRange)arg1 measureOption:(unsigned long long)arg2 ;
-(unsigned long long)nearestTextIndexAtPosition:(CGPoint)arg1 ;
-(id)textCheckingResultAtPoint:(CGPoint)arg1 ;
-(CGRect)_internalRectForGlyphAtIndex:(unsigned long long)arg1 measureOption:(unsigned long long)arg2 layoutManager:(id)arg3 textContainer:(id)arg4 textStorage:(id)arg5 ;
-(CKTextKitShadower *)shadower;
-(void)enumerateTextIndexesAtPosition:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGRect)trailingRect;
-(CGRect)frameForTextRange:(NSRange)arg1 ;
-(id<CKTextKitTruncating>)truncater;
-(vector<_NSRange, std::__1::allocator<_NSRange> >*)visibleRanges;
@end

