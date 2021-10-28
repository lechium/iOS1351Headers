/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SearchUITableViewTesting <NSObject>
@property (nonatomic,copy) id cellWillDisplayHandler; 
@property (nonatomic,copy) id tableViewWillUpdateHandler; 
@property (nonatomic,copy) id tableViewDidUpdateHandler; 
@required
-(id)navigationController;
-(id)tableViewWillUpdateHandler;
-(id)tableViewDidUpdateHandler;
-(id)cellWillDisplayHandler;
-(void)performScrollTestWithHandlerForFirstScrollCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(void)performScrollTestWithCompletion:(/*^block*/id)arg1;
-(id)currentTableModel;
-(void)toggleShowMoreForSection:(unsigned long long)arg1;
-(CGRect*)scrollToIndexPath:(id)arg1;
-(void)tapAtIndexPath:(id)arg1;
-(void)setCellWillDisplayHandler:(/*^block*/id)arg1;
-(void)setTableViewWillUpdateHandler:(/*^block*/id)arg1;
-(void)setTableViewDidUpdateHandler:(/*^block*/id)arg1;

@end
