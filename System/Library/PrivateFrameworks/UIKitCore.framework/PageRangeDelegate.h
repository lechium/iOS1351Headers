/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PageRangeDelegate <NSObject>
@required
-(void)setStartPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)setEndPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)addPage:(id)arg1 forPageIndex:(long long)arg2;
-(void)removePage:(id)arg1 forPageIndex:(long long)arg2;
-(void)addAllPages:(id)arg1;
-(BOOL)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canAddPage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canRemovePage:(id)arg1 forPageIndex:(long long)arg2;
-(BOOL)canAddAllPages:(id)arg1;
-(BOOL)canShowMenuBar;

@end

