/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class PUPhotoCommentEntryView;

@interface PUPhotoPostCommentTextEntryCell : UITableViewCell {

	PUPhotoCommentEntryView* _textEntryView;

}

@property (nonatomic,retain) PUPhotoCommentEntryView * textEntryView;              //@synthesize textEntryView=_textEntryView - In the implementation block
+(void)preferredContentSizeDidChange;
+(double)heightForWidth:(double)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(PUPhotoCommentEntryView *)textEntryView;
-(void)setTextEntryView:(PUPhotoCommentEntryView *)arg1 ;
@end
