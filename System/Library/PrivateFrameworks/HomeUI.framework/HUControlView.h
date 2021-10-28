/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol HUControlView <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate; 
@property (nonatomic,retain) id value; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted; 
@optional
-(BOOL)canBeHighlighted;
-(void)setCanBeHighlighted:(BOOL)arg1;

@required
+(Class)valueClass;
-(id<HUControlViewDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)identifier;
-(id)value;
-(void)setValue:(id)arg1;
-(void)setIdentifier:(id)arg1;
-(BOOL)isDisabled;
-(void)setDisabled:(BOOL)arg1;

@end
