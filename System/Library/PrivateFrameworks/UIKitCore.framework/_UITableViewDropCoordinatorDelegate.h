/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UITableViewDropCoordinatorDelegate <_UITableViewPlaceholderContextDelegate>
@required
-(id)tableView;
-(id)animateDragItem:(id)arg1 toTarget:(id)arg2;
-(id)animateDragItem:(id)arg1 toCell:(id)arg2 withPreviewParameters:(id)arg3;
-(id)animateDragItem:(id)arg1 intoRowAtIndexPath:(id)arg2 rect:(CGRect)arg3;
-(id)animateDragItem:(id)arg1 toRowAtIndexPath:(id)arg2;
-(void)insertPlaceholderAtIndexPath:(id)arg1 withContext:(id)arg2 previewParametersProvider:(/*^block*/id)arg3;

@end
