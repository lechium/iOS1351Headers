/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class PKPass;

@interface PKEditPassesTableViewCell : UITableViewCell {

	BOOL _showImage;
	PKPass* _pass;

}

@property (nonatomic,retain) PKPass * pass;               //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) BOOL showImage;              //@synthesize showImage=_showImage - In the implementation block
+(double)height;
+(UIEdgeInsets)separatorInset;
+(CGSize)imageSizeNeeded;
+(BOOL)needsFullPassImage;
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
-(void)setImage:(id)arg1 forPass:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 showImage:(BOOL)arg2 ;
-(BOOL)showImage;
-(void)setShowImage:(BOOL)arg1 ;
@end

