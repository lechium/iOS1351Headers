/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:02 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITableViewDragDestinationDelegate <NSObject>
@optional
-(long long)__tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
-(void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
-(BOOL)_tableView:(id)arg1 canHandleDropSession:(id)arg2;
-(void)_tableView:(id)arg1 dropSessionDidEnter:(id)arg2;
-(id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
-(void)_tableView:(id)arg1 dropSessionDidExit:(id)arg2;
-(void)_tableView:(id)arg1 dropSessionDidEnd:(id)arg2;

@end

