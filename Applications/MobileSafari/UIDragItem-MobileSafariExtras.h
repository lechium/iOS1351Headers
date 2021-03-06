//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDragItem.h>

@class TabDocument, UIView;
@protocol TabCollectionView;

@interface UIDragItem (MobileSafariExtras)
+ (id)safari_itemWithLocalTabDocument:(id)arg1 sourceTabView:(id)arg2;	// IMP=0x00000001000ced24
@property(readonly, nonatomic) UIView<TabCollectionView> *safari_localSourceTabView;
@property(readonly, nonatomic) TabDocument *safari_localTabDocument;
- (id)_safari_localTabDocumentDragMetadata;	// IMP=0x00000001000cee10
@end

