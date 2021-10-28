/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UITableViewCellLayoutManagerValue1.h>

@interface TKTonePickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1 {

	double _minimumTextIndentation;

}

@property (assign,nonatomic) double minimumTextIndentation;              //@synthesize minimumTextIndentation=_minimumTextIndentation - In the implementation block
-(CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(BOOL)arg3 ;
-(void)setMinimumTextIndentation:(double)arg1 ;
-(double)minimumTextIndentation;
-(CGRect)_adjustedTextFrameWithOriginalTextFrame:(CGRect)arg1 forCell:(id)arg2 ;
@end
