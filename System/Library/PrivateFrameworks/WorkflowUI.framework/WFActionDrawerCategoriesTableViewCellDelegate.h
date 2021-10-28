/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFActionDrawerCategoriesTableViewCellDelegate
@optional
-(void)categoriesTableViewCell:(id)arg1 didSelectAction:(id)arg2;
-(void)categoriesTableViewCell:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3;

@required
-(void)categoriesTableViewCellDidSelectCategoryApps:(id)arg1 title:(id)arg2;
-(void)categoriesTableViewCellDidSelectCategoryFavorites:(id)arg1 title:(id)arg2;
-(void)categoriesTableViewCellDidSelectCategoryScripting:(id)arg1 title:(id)arg2;
-(void)categoriesTableViewCell:(id)arg1 didSelectCategoryForContentType:(id)arg2 title:(id)arg3;

@end
