/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol AAUISpecifierProvider <NSObject>
@property (assign,nonatomic,__weak) id<AAUISpecifierProviderDelegate> delegate; 
@property (nonatomic,copy) NSArray * specifiers; 
@optional
-(BOOL)handleURL:(id)arg1;

@required
-(id<AAUISpecifierProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)initWithAccountManager:(id)arg1;
-(NSArray *)specifiers;
-(void)setSpecifiers:(id)arg1;

@end
