/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:02 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class NSArray;

@interface CNPropertyIntentActionableCell : CNPropertySimpleTransportCell {

	NSArray* _actions;

}

@property (nonatomic,retain) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
-(id)defaultContext;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(BOOL)shouldPerformDefaultAction;
-(void)performDefaultAction;
-(void)updateTransportButtons;
-(id)transportsMapping;
-(void)transportButton1Clicked:(id)arg1 ;
-(void)transportButton2Clicked:(id)arg1 ;
-(void)transportButton3Clicked:(id)arg1 ;
@end
