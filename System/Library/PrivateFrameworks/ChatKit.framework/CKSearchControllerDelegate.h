/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKSearchControllerDelegate <NSObject>
@optional
-(id)searchControllerChatGUIDsForDetailsSearch:(id)arg1;

@required
-(id)searchController:(id)arg1 conversationForChatGUID:(id)arg2;
-(void)searchControllerContentsDidChange:(id)arg1;
-(void)deleteMessageItem:(id)arg1;
-(UIEdgeInsets*)parentMarginInsetsForSearchController:(id)arg1;
-(void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2;
-(void)deleteTransferGUID:(id)arg1;
-(id)containerTraitCollectionForController:(id)arg1;
-(double)containerWidthForController:(id)arg1;
-(void)searchController:(id)arg1 requestsPresentationOfShareController:(id)arg2 atRect:(CGRect)arg3;
-(void)searchController:(id)arg1 requestsPresentationOfAlertController:(id)arg2 atRect:(CGRect)arg3;

@end

