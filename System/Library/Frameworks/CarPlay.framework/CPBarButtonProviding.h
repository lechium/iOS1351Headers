/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, CPBarButton;


@protocol CPBarButtonProviding <NSObject>
@property (nonatomic,retain) NSArray * leadingNavigationBarButtons; 
@property (nonatomic,retain) NSArray * trailingNavigationBarButtons; 
@property (nonatomic,retain) CPBarButton * backButton; 
@required
-(CPBarButton *)backButton;
-(void)setBackButton:(id)arg1;
-(NSArray *)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1;
-(NSArray *)trailingNavigationBarButtons;
-(void)setTrailingNavigationBarButtons:(id)arg1;

@end

