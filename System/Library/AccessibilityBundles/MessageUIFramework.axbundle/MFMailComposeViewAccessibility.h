/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/AccessibilityBundles/MessageUIFramework.axbundle/MessageUIFramework
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageUIFramework/MessageUIFramework-Structs.h>
#import <MessageUIFramework/__MFMailComposeViewAccessibility_super.h>

@interface MFMailComposeViewAccessibility : __MFMailComposeViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)shouldGroupAccessibilityChildren;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)didMoveToSuperview;
-(long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)presentSearchResults:(id)arg1 ;
-(id)dragSource:(id)arg1 draggableItemsAtPoint:(CGPoint)arg2 ;
-(void)dropTarget:(id)arg1 dragEnteredAtPoint:(CGPoint)arg2 ;
-(void)dropTarget:(id)arg1 dragDidMoveToPoint:(CGPoint)arg2 ;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(void)setFromAddressPickerVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_searchResultsTable;
-(id)_accessibilityComposeElementsForSorting;
-(unsigned long long)_axIndexOfRecipient:(id)arg1 inArray:(id)arg2 ;
@end

