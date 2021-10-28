/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryFramework/PhotoLibraryFramework-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@interface PLImageAccessibilityElement : UIAccessibilityElement {

	int _index;

}

@property (assign,nonatomic) int index;              //@synthesize index=_index - In the implementation block
-(id)delegate;
-(int)index;
-(id)dataSource;
-(void)setIndex:(int)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityURL;
-(id)_accessibilityPhotoDescription;
-(id)_accessibilityElementStoredUserLabel;
-(id)_axMainAssetURL;
-(long long)_albumPhotoIndex;
-(id)albumView;
@end
