/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MPAVItem, MPAVController, UIView;


@protocol MPControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id delegate; 
@property (nonatomic,retain) MPAVItem * item; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,retain,readonly) UIView * view; 
@required
-(id)delegate;
-(void)setDelegate:(id)arg1;
-(MPAVItem *)item;
-(void)setItem:(id)arg1;
-(long long)orientation;
-(void)setOrientation:(long long)arg1;
-(UIView *)view;
-(MPAVController *)player;
-(void)setPlayer:(id)arg1;
-(void)clearWeakReferencesToObject:(id)arg1;
-(void)noteIgnoredChangeTypes:(unsigned long long)arg1;
-(void)setOrientation:(long long)arg1 animate:(BOOL)arg2;

@end
