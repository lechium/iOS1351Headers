/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVTAvatarLibraryModelDelegate <NSObject>
@required
-(void)presetEditorViewController:(id)arg1;
-(void)didAddRecord:(id)arg1;
-(void)didDeleteRecord:(id)arg1;
-(void)presentUIViewController:(id)arg1 forItem:(id)arg2;
-(void)insertItemsAtIndexes:(id)arg1 deleteItemsAtIndexes:(id)arg2 reloadItemsAtIndexes:(id)arg3;
-(void)didUpdateLibraryItems:(id)arg1;
-(void)didEditRecord:(id)arg1;
-(void)dismissController:(id)arg1 completion:(/*^block*/id)arg2;

@end
