/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIAccessibilityElementDescription, NSArray;

@interface UIAccessibilityHierarchyDescription : NSObject <NSSecureCoding> {

	UIAccessibilityElementDescription* _rootElement;
	NSArray* _leafElements;

}

@property (nonatomic,retain) UIAccessibilityElementDescription * rootElement;              //@synthesize rootElement=_rootElement - In the implementation block
@property (nonatomic,retain) NSArray * leafElements;                                       //@synthesize leafElements=_leafElements - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRootElement:(UIAccessibilityElementDescription *)arg1 ;
-(UIAccessibilityElementDescription *)rootElement;
-(void)setLeafElements:(NSArray *)arg1 ;
-(NSArray *)leafElements;
@end
