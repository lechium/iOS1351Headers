/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@interface TLKProminenceView : UIView {

	unsigned long long _prominence;

}

@property (assign,nonatomic) unsigned long long prominence;              //@synthesize prominence=_prominence - In the implementation block
+(id)viewWithProminence:(unsigned long long)arg1 ;
-(id)init;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(unsigned long long)prominence;
-(void)setProminence:(unsigned long long)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(id)initWithProminence:(unsigned long long)arg1 ;
@end

