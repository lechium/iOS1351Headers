/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@interface _MFAtomTextSelectionRect : UITextSelectionRect {

	BOOL containsStart;
	BOOL containsEnd;
	CGRect rect;

}

@property (assign,nonatomic) CGRect rect; 
@property (assign,nonatomic) BOOL containsStart; 
@property (assign,nonatomic) BOOL containsEnd; 
-(void)setContainsStart:(BOOL)arg1 ;
-(void)setContainsEnd:(BOOL)arg1 ;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
@end
