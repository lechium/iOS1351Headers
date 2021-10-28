/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SKUIStorePageSectionsDelegate <NSObject>
@optional
-(void)sectionsViewControllerDidScroll:(id)arg1;
-(void)sectionsViewController:(id)arg1 willScrollToOffset:(CGPoint)arg2 visibleRange:(SKUIIndexPathRange)arg3;
-(void)sectionsViewControllerDidDismissOverlayController:(id)arg1;
-(BOOL)sectionsViewController:(id)arg1 showProductPageForItem:(id)arg2;
-(BOOL)sectionsViewController:(id)arg1 showStorePageForURL:(id)arg2;

@end
