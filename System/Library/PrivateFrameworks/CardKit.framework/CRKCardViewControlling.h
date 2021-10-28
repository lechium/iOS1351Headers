/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CRKCardViewControlling <CRKEventResponding,CRKFeedbackDelegate,CRCommandHandling>
@property (nonatomic,retain) id<CRCard> card; 
@property (nonatomic,retain) id<CRKCardSectionViewSourcing> cardSectionViewSource; 
@property (assign,nonatomic,__weak) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
@required
-(id<CRCard>)card;
-(void)setCard:(id)arg1;
-(double)contentHeightForWidth:(double)arg1;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(id<CRKCardSectionViewSourcing>)cardSectionViewSource;
-(void)setCardSectionViewSource:(id)arg1;
-(void)setCardViewControllerDelegate:(id)arg1;

@end
