/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSearchResultsTitleHeaderCell.h>

@class CALayer;

@interface CKDetailsSearchResultsTitleHeaderCell : CKSearchResultsTitleHeaderCell {

	CALayer* _bottomHairline;

}

@property (nonatomic,retain) CALayer * bottomHairline;              //@synthesize bottomHairline=_bottomHairline - In the implementation block
+(id)reuseIdentifier;
+(id)supplementaryViewType;
-(void)setTitle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setBottomHairline:(CALayer *)arg1 ;
-(CALayer *)bottomHairline;
@end
