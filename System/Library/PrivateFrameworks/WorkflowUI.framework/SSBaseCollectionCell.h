/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@interface SSBaseCollectionCell : UICollectionViewCell {

	BOOL _didCompleteSetup;

}

@property (assign,nonatomic) BOOL didCompleteSetup;              //@synthesize didCompleteSetup=_didCompleteSetup - In the implementation block
+(id)identifier;
+(id)cellForCollectionView:(id)arg1 indexPath:(id)arg2 ;
-(void)configureCell;
-(void)setDidCompleteSetup:(BOOL)arg1 ;
-(BOOL)didCompleteSetup;
@end
