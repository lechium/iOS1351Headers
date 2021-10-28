/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSCopying;
@class UIViewController, UIMenu;

@interface _UIFulfilledContextMenuConfiguration : NSObject {

	id<NSCopying> _identifier;
	UIViewController* _previewViewController;
	UIMenu* _actions;

}

@property (nonatomic,copy) id<NSCopying> identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,copy) UIMenu * actions;                                        //@synthesize actions=_actions - In the implementation block
-(id<NSCopying>)identifier;
-(void)setIdentifier:(id<NSCopying>)arg1 ;
-(UIMenu *)actions;
-(void)setPreviewViewController:(UIViewController *)arg1 ;
-(UIViewController *)previewViewController;
-(void)setActions:(UIMenu *)arg1 ;
-(BOOL)isPresentable;
@end
